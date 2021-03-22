// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PlayerSpawnPoint.h"
#include "StealthCharacter.h"
#include "Enumeration.h"
#include "StealthGameState.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AStealthGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:

	void BeginPlay();

	UFUNCTION()
	EGameState GetCurrentGameState() { return GameState; }

	UFUNCTION()
	uint32 GetTimeLeft() { return TimeLeft; }

	UFUNCTION()
	UClass* GetCharacterClass(ETeam playerTeam);

	UFUNCTION()
	APlayerSpawnPoint* GetAvailableSpawnPoint(ETeam playerTeam);

private:

	UPROPERTY()
	TArray<APlayerSpawnPoint*> PlayerSpawnPoints;

	UPROPERTY()
	TEnumAsByte<EGameState> GameState;

	UPROPERTY()
	uint32 TimeLeft;

	UFUNCTION()
	TArray<APlayerSpawnPoint*> GetPlayerSpawnPoints();
};
