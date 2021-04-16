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
	void ServerShootPrimary(FVector endLoc);

	UFUNCTION()
	void ClientShootPrimary();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShootPrimary();

	UFUNCTION(Server, Unreliable)
	void ServerShootSecondary();

	UFUNCTION()
	void Reload();

	UFUNCTION(Server, Reliable)
	void ServerReload();

	UFUNCTION()
	FVector GetAimingLocation();

	UPROPERTY()
	FString WeaponName;

	UPROPERTY()
	TEnumAsByte<EWeaponMode> WeaponMode;

	UPROPERTY()
	float FireRate;

	UPROPERTY(Replicated)
	uint16 MagazineFullNum;

	UPROPERTY(Replicated)
	uint32 AmmoCount;

	UPROPERTY(Replicated)
	bool bUseAmmo;

	UPROPERTY(ReplicatedUsing = OnRep_MagazineCount)
	uint16 MagazineCount;

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

	// RepNotify
	UFUNCTION()
	void OnRep_MagazineCount();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:

	void Tick(float deltaSeconds);

	UFUNCTION()
	FVector GetWeaponLocation();

public:

	// Blueprintys 
	UFUNCTION(BlueprintCallable)
	int GetMagazineCount();

	UFUNCTION(BlueprintCallable)
	int GetAmmoCount();

	FORCEINLINE EWeaponMode GetWeaponMode() const { return WeaponMode; }
};
