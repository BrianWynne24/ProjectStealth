// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"
//#include "Camera/CameraComponent.h"
#include "StealthCharacter.h"
#include "Util.h"

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
		ServerShootPrimary();
		FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
	}
}

void AWeaponBase::StopPrimaryFire()
{
	bPrimaryFiring = false;
}

void AWeaponBase::ShootSecondary()
{
	//ServerShootSecondary();
}

void AWeaponBase::ServerShootPrimary_Implementation()
{
	if (!CanShootPrimary())
		return;

	Util::Debug("Bang!");
	FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
}

void AWeaponBase::ServerShootSecondary_Implementation()
{

}

bool AWeaponBase::CanShootPrimary()
{
	if (GetGameTimeSinceCreation() < FireRateCooldown)
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
			ServerShootPrimary();
			FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
		}
	}
}