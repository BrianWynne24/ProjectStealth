// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enumeration.h"
#include "WeaponBase.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:

	AWeaponBase();

	void BeginPlay();

	UFUNCTION()
	void ServerEquipToCharacter(AStealthCharacter* Character);

	UFUNCTION()
	void ClientAttach();

	UFUNCTION()
	void ShootPrimary();

	UFUNCTION()
	void StopPrimaryFire();

	UFUNCTION()
	void ShootSecondary();

	UFUNCTION()
	bool CanShootPrimary();

	UFUNCTION()
	bool CanShootSecondary();

	UFUNCTION(Server, Unreliable)
	void ServerShootPrimary();

	UFUNCTION(Server, Unreliable)
	void ServerShootSecondary();

	UPROPERTY()
	FString WeaponName;

	UPROPERTY()
	TEnumAsByte<EWeaponMode> WeaponMode;

	UPROPERTY()
	float FireRate;

	UPROPERTY()
	float FireRateCooldown;

	UPROPERTY()
	bool bPrimaryFiring;

	UPROPERTY(EditAnywhere)
	class USkeletalMesh* TPPWeaponObject;

	UPROPERTY(EditAnywhere)
	class USkeletalMesh* FPPWeaponObject;

	UPROPERTY()
	class USceneComponent* SceneComponent;

	UPROPERTY()
	class USkeletalMeshComponent* TPPWeaponComponent;

	UPROPERTY()
	class USkeletalMeshComponent* FPPWeaponComponent;

private:

	void Tick(float deltaSeconds);

public:

	FORCEINLINE EWeaponMode GetWeaponMode() const { return WeaponMode; }

};
