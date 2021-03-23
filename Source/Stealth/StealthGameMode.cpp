// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthGameState.h"
#include "StealthPlayerState.h"
#include "Util.h"
//#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	//DefaultPawnClass = AStealthCharacter::StaticClass();
	DefaultPawnClass = NULL;
	GameStateClass = AStealthGameState::StaticClass();
	PlayerStateClass = AStealthPlayerState::StaticClass();
	StealthCharacterClass = AStealthCharacter::StaticClass();
}

void AStealthGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UWorld* World = GetWorld();

	FVector curLocation = FVector(0, 0, 1000);
	FRotator curRotation = FRotator(0, 0, 0);

	AStealthCharacter* newPawn = World->SpawnActor<AStealthCharacter>(StealthCharacterClass, curLocation, curRotation);

	if (newPawn == NULL)
		return;

	newPawn->SetOwner(NewPlayer);
	newPawn->DisableComponentsSimulatePhysics();
	NewPlayer->Possess(newPawn);
}

void AStealthGameMode::StartPlay()
{
	Super::StartPlay();
}