// Fill out your copyright notice in the Description page of Project Settings.


#include "ArgusCharacter.h"
//#include "WeaponBase.h"
#include "WeaponRifle.h"
#include "Util.h"

AArgusCharacter::AArgusCharacter()
{
	/* Load our Skeleton for ARGUS */
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewCharacterMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	if (NewCharacterMesh.Object != NULL)
	{
		CharacterMesh = NewCharacterMesh.Object;
		Util::Debug("Assigned Skeleton - ARGUS");
	}

	StartingWeaponClass = AWeaponRifle::StaticClass();

	bUseControllerRotationYaw = true;
}

void AArgusCharacter::BeginPlay()
{
	Super::BeginPlay();

	USkeletalMeshComponent* skeletalMesh = GetMesh();
	skeletalMesh->SetOwnerNoSee(true);
}

void AArgusCharacter::EquipWeapon(UClass* weaponClass)
{
	if (CurrentWeapon != NULL)
		CurrentWeapon->Destroy();

	CurrentWeapon = (AWeaponBase*)GetWorld()->SpawnActor(weaponClass);
	CurrentWeapon->EquipToCharacter(this);
}