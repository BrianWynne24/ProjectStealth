// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthGameState.h"
#include "StealthPlayerState.h"
#include "StealthCharacter.h"
#include "Util.h"
//#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	DefaultPawnClass = AStealthCharacter::StaticClass();
	GameStateClass = AStealthGameState::StaticClass();
	PlayerStateClass = AStealthPlayerState::StaticClass();
	/*DefaultPawnClass = NULL;
	GameStateClass = NULL;
	PlayerStateClass = NULL;*/
}

void AStealthGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	/*UWorld* World = GetWorld();

	AStealthGameState* gameState = World->SpawnActor<AStealthGameState>(AStealthGameState::StaticClass());
	gameState->SetOwner(NewPlayer);

	AStealthPlayerState* playerState = World->SpawnActor<AStealthPlayerState>(AStealthPlayerState::StaticClass());
	playerState->SetOwner(NewPlayer);
	NewPlayer->PlayerState = (APlayerState*)playerState;

	//SpawnPlayerPawn();
	FTimerDelegate timerDel;
	FTimerHandle timerHandle;

	timerDel.BindUFunction(this, FName("SpawnStealthPlayerPawn"), NewPlayer);
	World->GetTimerManager().SetTimer(timerHandle, timerDel, 2, false);*/
}

void AStealthGameMode::SpawnStealthPlayerPawn(APlayerController* NewPlayer)
{
	//Util::Debug("SpawnStealthPlayerPawn");

	UWorld* World = GetWorld();

	FVector curLocation = FVector(0, 0, 1000);
	FRotator curRotation = FRotator(0, 0, 0);

	AStealthCharacter* newPawn = World->SpawnActor<AStealthCharacter>(AStealthCharacter::StaticClass(), curLocation, curRotation);

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