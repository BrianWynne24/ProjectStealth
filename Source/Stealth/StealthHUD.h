// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StealthHUD.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AStealthHUD : public AHUD
{
	GENERATED_BODY()

private:

	UPROPERTY()
	double SizeX;

	UPROPERTY()
	double SizeY;

protected:

	void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	float GetScreenWidth();

	UFUNCTION(BlueprintCallable)
	float GetScreenHeight();
	
};
