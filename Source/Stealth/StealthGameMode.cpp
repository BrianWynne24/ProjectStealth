// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthGameMode.h"
#include "StealthCharacter.h"
#include "Util.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "ArgusCharacter.h"
#include "SpyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthGameMode::AStealthGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Stealth/Spy/Player/SpyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("SpySpawned"));
		Util::Debug("Test");
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	else
		Util::Debug("Negative");*/

	static ConstructorHelpers::FClassFinder<UUserWidget> TeamSelectionUI(TEXT("/Game/Stealth/TeamSelectionUI"));
	if (TeamSelectionUI.Class != NULL)
		TeamSelectionWidget = TeamSelectionUI.Class;
}

void AStealthGameMode::PostLogin(APlayerController *NewPlayer)
{
	if (TeamSelectionWidget != NULL)
	{
		UUserWidget* teamSelectWidget = CreateWidget<UUserWidget>(NewPlayer, TeamSelectionWidget);
		teamSelectWidget->AddToViewport();
	}

	Super::PostLogin(NewPlayer);
}

void AStealthGameMode::StartPlay()
{
	for (TActorIterator<APlayerSpawnPoint> pointIt(GetWorld()); pointIt; ++pointIt)
	{
		APlayerSpawnPoint* spawnPoint = *pointIt;
		SpawnPoints.Add(spawnPoint);
	}

	Super::StartPlay();
}

void AStealthGameMode::SetPlayerTeam(APlayerController* Player, ETeam team)
{
	SpawnPlayerCharacter(Player, team);
}

APlayerSpawnPoint* AStealthGameMode::GetSpawnPoint(ETeam team)
{
	for (int i = 0; i < SpawnPoints.Num(); i++)
	{
		APlayerSpawnPoint* spawnPoint = SpawnPoints[i];
		if (spawnPoint->GetTeam() == team && spawnPoint->CanUse())
			return spawnPoint;
	}

	return NULL;
}

void AStealthGameMode::SpawnPlayerCharacter(APlayerController* Player, ETeam team)
{
	APlayerSpawnPoint* spawnPoint = GetSpawnPoint(team);
	if (spawnPoint == NULL)
		return;

	FVector curLocation = spawnPoint->GetActorLocation();
	FRotator curRotation = FRotator(0, 0, 0);

	UWorld* World = GetWorld();
	UClass* TeamClass = GetTeamCharacterClass(team);

	if (TeamClass == NULL)
		return;

	AStealthCharacter* Character = World->SpawnActor<AStealthCharacter>(TeamClass, curLocation, curRotation);
	if (Character != NULL)
	{
		Player->UnPossess();
		Character->SetOwner(Player);
		Player->Possess(Character);

		Util::Debug("Character");
	}
}

UClass* AStealthGameMode::GetTeamCharacterClass(ETeam team)
{
	UClass* teamClass = NULL;

	switch (team)
	{
		case (ETeam::TEAM_ARGUS):
			teamClass = AArgusCharacter::StaticClass();
			break;
		case (ETeam::TEAM_SPY):
			teamClass = ASpyCharacter::StaticClass();
			break;
	}

	return teamClass;
}