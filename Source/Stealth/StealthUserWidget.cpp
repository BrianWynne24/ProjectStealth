// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthUserWidget.h"
#include "Components/Button.h"
#include "StealthGameMode.h"
#include "Util.h"

void UStealthUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SpectatorBtn->OnClicked.AddDynamic(this, &UStealthUserWidget::SpectatorButtonClicked);
	SpyBtn->OnClicked.AddDynamic(this, &UStealthUserWidget::SpyButtonClicked);
	ArgusBtn->OnClicked.AddDynamic(this, &UStealthUserWidget::ArgusButtonClicked);
}

void UStealthUserWidget::SpectatorButtonClicked()
{
	this->JoinTeam(ETeam::TEAM_SPECTATOR);
}

void UStealthUserWidget::SpyButtonClicked()
{
	this->JoinTeam(ETeam::TEAM_SPY);
}

void UStealthUserWidget::ArgusButtonClicked()
{
	this->JoinTeam(ETeam::TEAM_ARGUS);
}

void UStealthUserWidget::JoinTeam(ETeam team)
{
	APlayerController* Player = GetOwningPlayer();
	AStealthGameMode* Gamemode = (AStealthGameMode*)GetWorld()->GetAuthGameMode();

	Gamemode->SetPlayerTeam(Player, team);
	RemoveFromViewport();
}