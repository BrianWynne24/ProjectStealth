// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Enumeration.h"
#include "PlayerSpawnPoint.h"
#include "StealthCharacter.h"
#include "StealthGameMode.generated.h"

UCLASS(minimalapi)
class AStealthGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStealthGameMode();

	/* Variables */
	UPROPERTY()
	TSubclassOf<UUserWidget> TeamSelectionWidget;

	UPROPERTY()
	TArray<APlayerSpawnPoint*> SpawnPoints;

	/* Overrides */
	void PostLogin(APlayerController* NewPlayer);
	void StartPlay();

	/* New Methods */
	void SetPlayerTeam(APlayerController* Player, ETeam team);
	void SpawnPlayerCharacter(APlayerController* Player, ETeam team);

	UFUNCTION()
		APlayerSpawnPoint* GetSpawnPoint(ETeam team);

	UFUNCTION()
		UClass* GetTeamCharacterClass(ETeam team);
};



