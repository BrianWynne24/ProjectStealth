// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "StealthCharacter.h"
#include "Util.h"
#include "Net/UnrealNetwork.h"

AWeaponBase::AWeaponBase()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BaseComponent"));
	SceneComponent->SetupAttachment(RootComponent);

	TPPWeaponComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WorldWeapon"));
	TPPWeaponComponent->SetupAttachment(SceneComponent);

	FPPWeaponComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ViewWeapon"));
	FPPWeaponComponent->SetupAttachment(SceneComponent);

	WeaponName = "WeaponBase";

	SetReplicates(true);
	SetActorEnableCollision(false);

	SetActorTickEnabled(true);
	PrimaryActorTick.bCanEverTick = true;
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	TPPWeaponComponent->SetSkeletalMesh(TPPWeaponObject);
	FPPWeaponComponent->SetSkeletalMesh(FPPWeaponObject);

	ClientAttach();
}

void AWeaponBase::ServerEquipToCharacter(AStealthCharacter* Character)
{
	Util::Debug(WeaponName);

	if (GetNetMode() == NM_ListenServer)
		ClientAttach();
}

void AWeaponBase::ClientAttach()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return;

	USkeletalMeshComponent* characterMesh = playerOwner->GetMesh();
	AttachToActor(playerOwner, FAttachmentTransformRules::SnapToTargetIncludingScale);

	TPPWeaponComponent->AttachToComponent(characterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("weapon_WorldModel"));
	TPPWeaponComponent->SetOwnerNoSee(true);
	TPPWeaponComponent->SetOnlyOwnerSee(false);

	if (FPPWeaponObject == nullptr)
		return;

	FPPWeaponComponent->AttachToComponent(playerOwner->GetWeaponViewModelAttachment(), FAttachmentTransformRules::KeepRelativeTransform);
	FPPWeaponComponent->SetOnlyOwnerSee(true);
	FPPWeaponComponent->SetOwnerNoSee(false);
}

void AWeaponBase::ShootPrimary()
{
	if (!CanShootPrimary())
		return;

	if (GetWeaponMode() == EWeaponMode::AUTOMATIC)
		bPrimaryFiring = true;
	else
	{
		ClientShootPrimary();
		ServerShootPrimary(GetAimingLocation());
		FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
	}
}

void AWeaponBase::StopPrimaryFire()
{
	bPrimaryFiring = false;
}

void AWeaponBase::ShootSecondary()
{
	ServerShootSecondary();
}

void AWeaponBase::ServerShootPrimary_Implementation(FVector endLoc)
{
	if (!CanShootPrimary())
		return;

	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return;

	UWorld* World = GetWorld();

	FName traceName = TEXT("BulletTrace");
	FCollisionQueryParams traceParams(traceName, true, this);
	World->DebugDrawTraceTag = traceName;

	FVector startLoc;
	startLoc = GetWeaponLocation();

	FHitResult hitDetails;
	bool hitResult = World->LineTraceSingleByChannel(
		hitDetails,
		startLoc,
		endLoc,
		ECC_Visibility,
		traceParams
	);

	MulticastShootPrimary();

	if (bUseAmmo)
		MagazineCount--;

	FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
}

void AWeaponBase::MulticastShootPrimary_Implementation()
{

}

void AWeaponBase::ClientShootPrimary()
{

}

void AWeaponBase::ServerShootSecondary_Implementation()
{
}

void AWeaponBase::Reload()
{
	if (!bUseAmmo || MagazineCount >= MagazineFullNum || AmmoCount <= 0 || bReloading)
		return;

	bReloading = true;
	ServerReload();

	FireRateCooldown = GetGameTimeSinceCreation() + 1.5; // Reload speed, change to animation speed when we have an animation
}

void AWeaponBase::ServerReload_Implementation()
{
	bReloading = true;

	uint16 ammoDiff = (MagazineFullNum - MagazineCount);
	if (AmmoCount >= ammoDiff)
	{
		AmmoCount -= ammoDiff;
		MagazineCount = MagazineFullNum;
	}
	else
	{
		MagazineCount = AmmoCount;
		AmmoCount = 0;
	}

	bReloading = false;
	FireRateCooldown = GetGameTimeSinceCreation() + 1.5; // Reload speed, change to animation speed when we have an animation
}

bool AWeaponBase::CanShootPrimary()
{
	if (GetGameTimeSinceCreation() < FireRateCooldown || (bUseAmmo && MagazineCount <= 0) || bReloading)
		return false;

	return true;
}

bool AWeaponBase::CanShootSecondary()
{
	return false;
}

void AWeaponBase::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	// Automatic fire is handle here
	if (bPrimaryFiring)
	{
		if (CanShootPrimary())
		{
			ClientShootPrimary();
			ServerShootPrimary(GetAimingLocation());
			FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
		}
	}
}

FVector AWeaponBase::GetAimingLocation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return FVector(0, 0, 0);

	return GetWeaponLocation() + (playerOwner->GetViewCamera()->GetForwardVector() * 5000.f);
}

FVector AWeaponBase::GetWeaponLocation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return FVector(0, 0, 0);

	if (HasAuthority())
	{
;		USkeletalMeshComponent* charMesh = playerOwner->GetMesh();
		if (charMesh != nullptr)
			return playerOwner->GetMesh()->GetSocketLocation("weapon_ViewModel");

		return playerOwner->GetActorLocation();
	}

	return playerOwner->GetWeaponViewModelAttachment()->GetComponentLocation();
}

// RepNotifys
void AWeaponBase::OnRep_MagazineCount()
{

}

void AWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeaponBase, MagazineCount);
	DOREPLIFETIME(AWeaponBase, MagazineFullNum);
	DOREPLIFETIME(AWeaponBase, AmmoCount);
	DOREPLIFETIME(AWeaponBase, bUseAmmo);
	DOREPLIFETIME(AWeaponBase, bReloading);
}
