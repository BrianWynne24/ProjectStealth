// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthPlayerState.h"
#include "StealthGameState.h"
#include "StealthPlayerController.h"
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

void AStealthPlayerState::SetTeam_Implementation(ETeam playerTeam)
{
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

	APawn* oldCharacter = (APawn*)GetPawn();
	if (oldCharacter != NULL)
		World->DestroyActor(oldCharacter);

	AStealthPlayerController* Player = (AStealthPlayerController*)GetOwner();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = Player;

	AStealthCharacter* newCharacter = World->SpawnActor<AStealthCharacter>(teamClass, curLocation, curRotation, spawnParams);
	if (newCharacter == nullptr || Player == nullptr)
		return;

	UClass* hudClass = newCharacter->GetHUDClass();
	if (hudClass == nullptr)
		Util::Debug("Invalid HUD");

	//Player->UnPossess();
	Player->Possess(newCharacter);
	Player->SetClientHUD(newCharacter->GetHUDClass());
	spawnPoint->StartCooldown(0);
}

void AStealthPlayerState::PostActorCreated()
{
	Super::PostActorCreated();
}