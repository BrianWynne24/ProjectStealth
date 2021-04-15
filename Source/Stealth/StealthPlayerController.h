// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "StealthPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AStealthPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY()
	class AHUD* CurrentHUD;

	UFUNCTION(Client, Reliable)
	void ClientTeamSelectUI();

	UFUNCTION(Client, Reliable)
	void SetClientHUD(class UClass* hudClass);

	UFUNCTION()
	void RemoveHUD();

	/* Overrides */
	void OnRep_PlayerState() override;

	void BeginPlay() override;
};
