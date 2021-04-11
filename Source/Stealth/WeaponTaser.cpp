// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponTaser.h"

AWeaponTaser::AWeaponTaser()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewTPPSkeletalMesh(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/KA74U/SK_KA74U_X"));
	if (NewTPPSkeletalMesh.Object != NULL)
		TPPWeaponObject = NewTPPSkeletalMesh.Object;

	WeaponName = "Taser";
	WeaponMode = EWeaponMode::SINGLE;
	FireRate = 0.5f;
}