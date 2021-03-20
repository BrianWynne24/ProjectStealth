// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponRifle.h"

AWeaponRifle::AWeaponRifle()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewFPPSkeletalMesh(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/Ka47/SK_KA47"));
	if (NewFPPSkeletalMesh.Object != NULL)
		FPPSkeletalMesh = NewFPPSkeletalMesh.Object;
}