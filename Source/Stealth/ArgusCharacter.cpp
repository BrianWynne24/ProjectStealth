// Fill out your copyright notice in the Description page of Project Settings.


#include "ArgusCharacter.h"
//#include "WeaponBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WeaponRifle.h"
#include "GameFramework/HUD.h"
#include "Util.h"

AArgusCharacter::AArgusCharacter()
{
	/* Load our Skeleton for ARGUS */
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> NewCharacterMesh(TEXT("/Game/Mannequin/Character/Mesh/SK_Mannequin"));
	if (NewCharacterMesh.Object != NULL)
		InitCharacterMesh = NewCharacterMesh.Object;

	static ConstructorHelpers::FClassFinder<AHUD> NewHUD(TEXT("/Game/Stealth/Argus/UI/HUDArgus"));
	if (NewHUD.Class != NULL)
		HUDClass = NewHUD.Class;

	StartingWeaponClass = AWeaponRifle::StaticClass();

	ViewCamera->bUsePawnControlRotation = true;

	UCharacterMovementComponent* movementComp = GetCharacterMovement();
	movementComp->MaxWalkSpeed = 350.f;
	movementComp->bUseControllerDesiredRotation = true;
	movementComp->bOrientRotationToMovement = false;
}

void AArgusCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AArgusCharacter::ReloadWeapon);
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

	CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(weaponClass, spawnParams);
}

void AArgusCharacter::ReloadWeapon()
{
	if (GetCurrentWeapon() == nullptr)
		return;

	GetCurrentWeapon()->Reload();
}