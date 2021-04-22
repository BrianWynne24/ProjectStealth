// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "WeaponTaser.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AWeaponTaser : public AWeaponBase
{
	GENERATED_BODY()

public:

	AWeaponTaser();

	void ServerShootPrimary_Implementation(FVector endLoc);

	bool CanShootPrimary();
	
};
