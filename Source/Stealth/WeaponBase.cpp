// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"

AWeaponBase::AWeaponBase()
{
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	if (TPPSkeletalMesh != NULL)
	{
		USkeletalMeshComponent* weaponMesh = GetSkeletalMeshComponent();
		weaponMesh->SetSkeletalMesh(TPPSkeletalMesh);
	}

	if (FPPSkeletalMesh != NULL)
	{
		USkeletalMeshComponent* weaponMesh = GetSkeletalMeshComponent();
		weaponMesh->SetSkeletalMesh(FPPSkeletalMesh);
	}

	SetActorEnableCollision(false);
}

void AWeaponBase::EquipToCharacter(AStealthCharacter* Character)
{
	FVector charLocation = Character->GetActorLocation();
	USkeletalMeshComponent* charachterMesh = Character->GetMesh();

	//SetActorLocation(charLocation);

	//SetActorRotation(FRotator(0, 270, 0));

	UCapsuleComponent* capsuleComp = Character->GetCapsuleComponent();
	float rootHeight = capsuleComp->GetScaledCapsuleHalfHeight();

	SetActorLocation(charLocation + FVector(0, 0, 35));

	FName sockName = TEXT("hand_WeaponSocket");
	//AttachToComponent(Character->GetMesh(), sockName, EAttachLocation::SnapToTarget, true);
	AttachToComponent(charachterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, sockName);
}

void AWeaponBase::SetTPPSkeletalMesh(USkeletalMesh* skeletalMesh)
{
	TPPSkeletalMesh = skeletalMesh;
}

void AWeaponBase::SetFPPSkeletalMesh(USkeletalMesh* skeletalMesh)
{
	FPPSkeletalMesh = skeletalMesh;
}