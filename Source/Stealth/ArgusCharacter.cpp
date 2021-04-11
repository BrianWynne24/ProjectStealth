// Fill out your copyright notice in the Description page of Project Settings.


#include "ArgusCharacter.h"
//#include "WeaponBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WeaponRifle.h"
#include "Util.h"

AArgusCharacter::AArgusCharacter()
{
	/* Load our Skeleton for ARGUS */
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewCharacterMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	if (NewCharacterMesh.Object != NULL)
		InitCharacterMesh = NewCharacterMesh.Object;

	StartingWeaponClass = AWeaponRifle::StaticClass();

	ViewCamera->bUsePawnControlRotation = true;

	UCharacterMovementComponent* movementComp = GetCharacterMovement();
	movementComp->MaxWalkSpeed = 350.f;
	movementComp->bUseControllerDesiredRotation = true;
	movementComp->bOrientRotationToMovement = false;
}

void AArgusCharacter::BeginPlay()
{
	Super::BeginPlay();

	USkeletalMeshComponent* skeletalMesh = GetMesh();
	skeletalMesh->SetOwnerNoSee(true);

	// Snaps camera to Head while in FPP
	ViewCamera->AttachToComponent(skeletalMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("fpp_cameraSocket"));

	ServerEquipWeapon(StartingWeaponClass);
}

void AArgusCharacter::ServerEquipWeapon_Implementation(UClass* weaponClass)
{
	if (CurrentWeapon != nullptr)
		CurrentWeapon->Destroy();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;

	//CurrentWeapon = (AWeaponRifle*)GetWorld()->SpawnActor(weaponClass);
	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(weaponClass, spawnParams);
	CurrentWeapon->ServerEquipToCharacter(this);
}