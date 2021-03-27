// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthGameState.h"
#include "StealthPlayerState.h"
#include "StealthCharacter.h"
#include "StealthPlayerController.h"
#include "Util.h"
//#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	DefaultPawnClass = AStealthCharacter::StaticClass();
	GameStateClass = AStealthGameState::StaticClass();
	PlayerStateClass = AStealthPlayerState::StaticClass();
	PlayerControllerClass = AStealthPlayerController::StaticClass();
}

void AStealthGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

void AStealthGameMode::StartPlay()
{
	Super::StartPlay();
}