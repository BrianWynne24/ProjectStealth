// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthPlayerState.h"
#include "Blueprint/UserWidget.h"
#include "Util.h"
#include <Runtime\Engine\Public\Net\UnrealNetwork.h>

AStealthPlayerState::AStealthPlayerState()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> TeamSelectionUI(TEXT("/Game/Stealth/TeamSelectionUI"));
	if (TeamSelectionUI.Class != NULL)
		WidgetTeamSelect = TeamSelectionUI.Class;

	Team = ETeam::UNASSIGNED;
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
	Team = playerTeam;
}

void AStealthPlayerState::PostActorCreated()
{
	Super::PostActorCreated();
}