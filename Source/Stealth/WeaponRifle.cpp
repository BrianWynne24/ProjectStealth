// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponRifle.h"
#include "Util.h"

AWeaponRifle::AWeaponRifle()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewFPPSkeletalMesh(TEXT("/Game/FirstPerson/FPWeapon/Mesh/SK_FPGun"));
	if (NewFPPSkeletalMesh.Object != NULL)
		FPPWeaponObject = NewFPPSkeletalMesh.Object;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewTPPSkeletalMesh(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SK_KA47"));
	if (NewTPPSkeletalMesh.Object != NULL)
		TPPWeaponObject = NewTPPSkeletalMesh.Object;

	WeaponName = "Rifle";

	WeaponMode = EWeaponMode::AUTOMATIC;
	FireRate = 0.1f;
}