// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "StealthCharacter.h"
#include "BulletActor.h"
#include "Engine/SkeletalMeshSocket.h"
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

	bAlwaysRelevant = true;
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	// Listen server support
	if (GetNetMode() == NM_ListenServer && HasAuthority())
		ClientAttachWeaponMesh_Implementation();
}

void AWeaponBase::ClientAttachWeaponMesh_Implementation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return;

	USkeletalMeshComponent* characterMesh = playerOwner->GetMesh();
	AttachToActor(playerOwner, FAttachmentTransformRules::SnapToTargetIncludingScale);

	TPPWeaponComponent->AttachToComponent(characterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("weapon_WorldModel"));
	TPPWeaponComponent->SetSkeletalMesh(TPPWeaponObject);
	TPPWeaponComponent->SetOwnerNoSee(false);
	TPPWeaponComponent->SetOnlyOwnerSee(false);

	if (FPPWeaponObject == nullptr)
		return;

	FPPWeaponComponent->AttachToComponent(playerOwner->GetWeaponViewModelAttachment(), FAttachmentTransformRules::KeepRelativeTransform);
	FPPWeaponComponent->SetSkeletalMesh(FPPWeaponObject);
	FPPWeaponComponent->SetOnlyOwnerSee(true);
	FPPWeaponComponent->SetOwnerNoSee(false);

	FPPWeaponComponent->bCastDynamicShadow = false;
	FPPWeaponComponent->CastShadow = false;
}

void AWeaponBase::OnRep_Owner()
{
	ClientAttachWeaponMesh();
	Super::OnRep_Owner();
}

void AWeaponBase::ShootPrimary()
{
	if (!CanShootPrimary())
		return;

	if (GetWeaponMode() == EWeaponMode::AUTOMATIC)
		bPrimaryFiring = true;
	else
	{
		ClientShootPrimary(GetAimingLocation());
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

void AWeaponBase::OnShootTrace(FVector endLoc, FHitResult &shootResult)
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return;

	UWorld* World = GetWorld();

	FName traceName = TEXT("BulletTrace");
	FCollisionQueryParams traceParams(traceName, true, this);
	traceParams.AddIgnoredActor(GetOwner());

	World->DebugDrawTraceTag = traceName;

	FVector startLoc;
	startLoc = playerOwner->GetViewCamera()->GetComponentLocation();

	bool hitResult = World->LineTraceSingleByChannel(
		shootResult,
		startLoc,
		endLoc,
		ECC_GameTraceChannel14,
		traceParams
	);
}

void AWeaponBase::ServerShootPrimary_Implementation(FVector endLoc)
{
	if (!CanShootPrimary())
		return;

	FHitResult hitDetails;
	OnShootTrace(endLoc, hitDetails);
	MulticastShootPrimary(hitDetails);

	if (bUseAmmo)
		MagazineCount--;

	FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
}

void AWeaponBase::MulticastShootPrimary_Implementation(FHitResult hitResult)
{
	APawn* playerPawn = (APawn*)GetOwner();
	if (playerPawn == nullptr)
		return;

	// We already ran this function on the owner when the player shot
	if (playerPawn->IsLocallyControlled())
		return;

	FVector hitLoc = hitResult.Location;
	ClientShootPrimary(hitLoc);
}

void AWeaponBase::ClientShootPrimary(FVector hitLoc)
{
	UWorld* World = GetWorld();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;

	FTransform spawnTransform;
	spawnTransform.SetLocation(GetMuzzleLocation());
	spawnTransform.SetRotation(GetFPPWeaponRotation().Quaternion());

	ABulletActor* bullet = World->SpawnActor<ABulletActor>(ABulletActor::StaticClass(), spawnTransform, spawnParams);
	bullet->SetEndLocation(hitLoc);
}

void AWeaponBase::ServerShootSecondary_Implementation()
{
}

void AWeaponBase::Reload()
{
	if (!bUseAmmo || MagazineCount >= MagazineFullNum || AmmoCount <= 0)
		return;

	ServerReload();

	FireRateCooldown = GetGameTimeSinceCreation() + 1.5; // Reload speed, change to animation speed when we have an animation
}

void AWeaponBase::ServerReload_Implementation()
{
	uint16 ammoDiff = (MagazineFullNum - MagazineCount);
	if (AmmoCount >= ammoDiff)
	{
		AmmoCount -= ammoDiff;
		MagazineCount = MagazineFullNum;
	}
	else
	{
		uint16 magDiff = (MagazineCount + AmmoCount);
		if (magDiff > MagazineFullNum)
		{
			AmmoCount = ammoDiff;
			MagazineCount = MagazineFullNum;
		}
		else
		{
			MagazineCount = magDiff;
			AmmoCount = 0;
		}
	}

	FireRateCooldown = GetGameTimeSinceCreation() + 1.5; // Reload speed, change to animation speed when we have an animation
}

bool AWeaponBase::CanShootPrimary()
{
	if (GetGameTimeSinceCreation() < FireRateCooldown || (bUseAmmo && MagazineCount <= 0))
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
			ClientShootPrimary(GetAimingLocation());
			ServerShootPrimary(GetAimingLocation());
			FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
		}
	}
}

FVector AWeaponBase::GetAimingLocation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return GetActorLocation();

	//FVector compLoc = playerOwner->GetViewCamera()->GetForwardVector();
	//return GetMuzzleLocation() + (compLoc * 4000.f);

	//FVector compLoc = playerOwner->GetViewCamera()->GetComponentLocation();
	FVector compLoc = playerOwner->GetViewRotation().Vector();
	return GetMuzzleLocation() + (compLoc * 4000.f);
}

FVector AWeaponBase::GetWeaponLocation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return GetActorLocation();

	if (playerOwner->IsLocallyControlled())
	{
		if (FPPWeaponComponent)
			return FPPWeaponComponent->GetComponentLocation();
	}

	return TPPWeaponComponent->GetComponentLocation();
}

FVector AWeaponBase::GetMuzzleLocation()
{
	AStealthCharacter* playerOwner = (AStealthCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return GetActorLocation();

	if (playerOwner->IsLocallyControlled())
	{
		if (FPPWeaponComponent)
			return FPPWeaponComponent->GetSocketLocation("Muzzle");
	}

	return TPPWeaponComponent->GetSocketLocation("Muzzle");
}

FRotator AWeaponBase::GetFPPWeaponRotation()
{
	if (FPPWeaponComponent == nullptr)
		return GetActorRotation();

	return FPPWeaponComponent->GetRelativeRotation();
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
}

int AWeaponBase::GetMagazineCount()
{
	return (int)MagazineCount;
}

int AWeaponBase::GetAmmoCount()
{
	return (int)AmmoCount;
}
