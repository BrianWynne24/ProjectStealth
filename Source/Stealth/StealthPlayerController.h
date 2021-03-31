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

	UFUNCTION(Client, Reliable)
	void ClientTeamSelectUI();

	/* Overrides */
	void OnRep_PlayerState() override;

	void BeginPlay() override;
};