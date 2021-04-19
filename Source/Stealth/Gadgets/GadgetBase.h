// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GadgetBase.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API UGadgetBase : public UDataAsset
{
	GENERATED_BODY()

protected:

	UFUNCTION()
	virtual void OnShoot(float velForce);

	UFUNCTION()
	virtual void OnUse();

	UPROPERTY()
	FString Name;

	UPROPERTY()
	bool bCanUse;

	UPROPERTY()
	bool bCanShoot;

	UPROPERTY()
	uint8 Quantity;

public:

	UGadgetBase();

	UFUNCTION(BlueprintCallable)
	FString GetGadgetName() const { return Name; }

	UFUNCTION(BlueprintCallable)
	bool CanShoot() const { return bCanShoot; }

	UFUNCTION(BlueprintCallable)
	bool CanUse() const { return bCanUse; }

	UFUNCTION(BlueprintCallable)
	int GetQuantity() { return Quantity; }
};
