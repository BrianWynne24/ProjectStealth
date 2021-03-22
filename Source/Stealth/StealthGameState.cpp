// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthGameState.h"
#include "ArgusCharacter.h"
#include "SpyCharacter.h"
#include "EngineUtils.h"
#include "Util.h"

void AStealthGameState::BeginPlay()
{
	Super::BeginPlay();
	PlayerSpawnPoints = GetPlayerSpawnPoints();
}

TArray<APlayerSpawnPoint*> AStealthGameState::GetPlayerSpawnPoints()
{
	TArray<APlayerSpawnPoint*> spawnPoints;

	for (TActorIterator<APlayerSpawnPoint> pointIt(GetWorld()); pointIt; ++pointIt)
	{
		APlayerSpawnPoint* spawnPoint = *pointIt;
		spawnPoints.Add(spawnPoint);
	}

	return spawnPoints;
}

APlayerSpawnPoint* AStealthGameState::GetAvailableSpawnPoint(ETeam playerTeam)
{
	for (int i = 0; i < PlayerSpawnPoints.Num(); i++)
	{
		APlayerSpawnPoint* spawnPoint = PlayerSpawnPoints[i];
		if (spawnPoint->GetTeam() == playerTeam && spawnPoint->CanUse())
			return spawnPoint;
	}

	return NULL;
}

UClass* AStealthGameState::GetCharacterClass(ETeam playerTeam)
{
	UClass* teamClass = NULL;

	switch (playerTeam)
	{
	case (ETeam::ARGUS):
		teamClass = AArgusCharacter::StaticClass();
		break;
	case (ETeam::SPY):
		teamClass = ASpyCharacter::StaticClass();
		break;
	}

	return teamClass;
}