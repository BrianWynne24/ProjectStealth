// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StealthCharacter.h"
#include "StealthGameMode.generated.h"

UCLASS(minimalapi)
class AStealthGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStealthGameMode();

	UPROPERTY()
	class UClass* StealthCharacterClass;

	/* Overrides */
	void PostLogin(APlayerController* NewPlayer);
	void StartPlay();
};



