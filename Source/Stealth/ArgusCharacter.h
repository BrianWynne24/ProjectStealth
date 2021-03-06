// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StealthCharacter.h"
#include "ArgusCharacter.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AArgusCharacter : public AStealthCharacter
{
	GENERATED_BODY()

public:

	AArgusCharacter();

	void BeginPlay();

	UFUNCTION(Server, Reliable)
	void ServerEquipWeapon(UClass* weaponClass);

private:

	UFUNCTION()
	void ReloadWeapon();

protected:

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
