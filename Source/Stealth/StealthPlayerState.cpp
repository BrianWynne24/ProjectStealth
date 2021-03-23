// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthPlayerState.h"
#include "StealthGameState.h"
#include "Blueprint/UserWidget.h"
#include "Util.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"

AStealthPlayerState::AStealthPlayerState()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> TeamSelectionUI(TEXT("/Game/Stealth/TeamSelectionUI"));
	if (TeamSelectionUI.Class != NULL)
		WidgetTeamSelect = TeamSelectionUI.Class;

	Team = ETeam::UNASSIGNED;

	bReplicates = true;
	bAlwaysRelevant = true;
}

void AStealthPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AStealthPlayerState, Team);
	DOREPLIFETIME(AStealthPlayerState, Lives);
	DOREPLIFETIME(AStealthPlayerState, Deaths);
	DOREPLIFETIME(AStealthPlayerState, Kills);
}

/*void AStealthPlayerState::SetTeam(ETeam playerTeam)
{
	Team = playerTeam;
}*/

void AStealthPlayerState::SetTeam_Implementation(ETeam playerTeam)
{
	//if (!HasAuthority())
		//return;

	Team = playerTeam;

	UWorld* World = GetWorld();
	AStealthGameState* gameState = (AStealthGameState*)World->GetGameState();
	
	APlayerSpawnPoint* spawnPoint = gameState->GetAvailableSpawnPoint(playerTeam);
	if (spawnPoint == NULL)
		return;

	UClass* teamClass = gameState->GetCharacterClass(playerTeam);
	if (teamClass == NULL)
		return;

	FVector curLocation = spawnPoint->GetActorLocation();
	FRotator curRotation = FRotator(0, 0, 0);

	APlayerController* Player = (APlayerController*)GetOwner();
	AStealthCharacter* newCharacter = World->SpawnActor<AStealthCharacter>(teamClass, curLocation, curRotation);
	if (newCharacter == NULL || Player == NULL)
		return;

	Player->UnPossess();
	newCharacter->SetOwner(Player);
	Player->Possess(newCharacter);

	spawnPoint->StartCooldown();
	//TODO: Delete old character
}

void AStealthPlayerState::PostActorCreated()
{
	Super::PostActorCreated();
}