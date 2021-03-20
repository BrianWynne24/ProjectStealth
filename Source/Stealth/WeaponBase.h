// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StealthCharacter.h"
#include "Animation/SkeletalMeshActor.h"
#include "WeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AWeaponBase : public ASkeletalMeshActor
{
	GENERATED_BODY()

public:

	AWeaponBase();

	void BeginPlay();

	UFUNCTION()
	void EquipToCharacter(AStealthCharacter* Character);

	void SetTPPSkeletalMesh(USkeletalMesh* skeletalMesh);
	void SetFPPSkeletalMesh(USkeletalMesh* skeletalMesh);

	UPROPERTY()
		class USkeletalMesh* TPPSkeletalMesh;

	UPROPERTY()
		class USkeletalMesh* FPPSkeletalMesh;

public:

	FORCEINLINE class USkeletalMesh* GetTPPSkeletalMesh() const { return TPPSkeletalMesh; }
	FORCEINLINE class USkeletalMesh* GetFPPSkeletalMesh() const { return FPPSkeletalMesh; }
};
