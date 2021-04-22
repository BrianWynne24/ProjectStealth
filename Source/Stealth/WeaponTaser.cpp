// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponTaser.h"
#include "SpyCharacter.h"
#include "Util.h"

AWeaponTaser::AWeaponTaser()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewTPPSkeletalMesh(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/KA74U/SK_KA74U_Y"));
	if (NewTPPSkeletalMesh.Object != NULL)
		TPPWeaponObject = NewTPPSkeletalMesh.Object;

	WeaponName = "Taser";
	WeaponMode = EWeaponMode::SINGLE;
	FireRate = 0.5f;
}

void AWeaponTaser::ServerShootPrimary_Implementation(FVector endLoc)
{
	if (!CanShootPrimary())
		return;

	Util::Debug("Shoot");

	ASpyCharacter* playerOwner = (ASpyCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return;

	playerOwner->RemoveEnergy(20);

	FireRateCooldown = GetGameTimeSinceCreation() + FireRate;
}

bool AWeaponTaser::CanShootPrimary()
{
	if (FireRateCooldown > GetGameTimeSinceCreation())
		return false;

	ASpyCharacter* playerOwner = (ASpyCharacter*)GetOwner();
	if (playerOwner == nullptr)
		return false;

	if (playerOwner->GetEnergy() >= 20)
		return true;

	return false;
}