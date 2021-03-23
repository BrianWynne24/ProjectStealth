// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthUserWidget.h"
#include "Components/Button.h"
#include "StealthGameMode.h"
#include "StealthPlayerState.h"
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
	this->JoinTeam(ETeam::SPECTATOR);
}

void UStealthUserWidget::SpyButtonClicked()
{
	this->JoinTeam(ETeam::SPY);
}

void UStealthUserWidget::ArgusButtonClicked()
{
	this->JoinTeam(ETeam::ARGUS);
}

void UStealthUserWidget::JoinTeam(ETeam team)
{
	APlayerController* playerController = (APlayerController*)GetOwningPlayer();
	playerController->SetShowMouseCursor(false);

	AStealthPlayerState* PlayerState = (AStealthPlayerState*)GetOwningPlayerState();
	PlayerState->SetTeam(team);
	RemoveFromViewport();
}