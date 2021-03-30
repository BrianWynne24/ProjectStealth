// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Enumeration.h"
#include "GameFramework/Character.h"
#include "StealthPlayerState.h"
#include "StealthCharacter.generated.h"

UCLASS(config=Game)
class AStealthCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AStealthCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY()
	class USkeletalMesh* InitCharacterMesh;

	UPROPERTY(Replicated, ReplicatedUsing = OnRep_CharacterMesh)
	class USkeletalMesh* CharacterMesh;

	UPROPERTY()
	class UClass* AnimationClass;

	UPROPERTY(Replicated)
	class AWeaponBase* CurrentWeapon;

	UPROPERTY()
	class UClass* StartingWeaponClass;

	virtual void BeginPlay() override;

	UFUNCTION(Server, Reliable)
	void ServerBeginPlay();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	virtual void EquipWeapon(UClass* weaponClass) {}

	UFUNCTION(Server, Reliable)
	void ServerSetCharacterMesh();

	UFUNCTION()
	void OnRep_CharacterMesh();

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	virtual void MoveForward(float Value);

	/** Called for side to side input */
	virtual void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:

	FORCEINLINE class USkeletalMesh* GetSkeletalMesh() const { return InitCharacterMesh; }

	FORCEINLINE class USkeletalMesh* GetCharacterMesh() const { return CharacterMesh; }

	FORCEINLINE class AWeaponBase* GetCurrentWeapon() const { return CurrentWeapon; }

};

