// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthPlayerController.h"
#include "StealthPlayerState.h"
#include "Blueprint/UserWidget.h"
#include "Util.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"

void AStealthPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if ((GetNetMode() == NM_ListenServer && HasAuthority()) || GetNetMode() == NM_Standalone)
		ClientTeamSelectUI();
}

void AStealthPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	ClientTeamSelectUI();
}

void AStealthPlayerController::ClientTeamSelectUI_Implementation()
{
	AStealthPlayerState* playerState = (AStealthPlayerState*)PlayerState;
	if (playerState == NULL)
		return;

	if (playerState->GetTeam() == ETeam::UNASSIGNED)
	{
		UUserWidget* teamSelectUI = CreateWidget<UUserWidget>(this, playerState->GetTeamSelectMenu());
		teamSelectUI->SetOwningPlayer(this);
		teamSelectUI->AddToViewport();

		SetShowMouseCursor(true);
	}
}

void AStealthPlayerController::SetClientHUD_Implementation(class UClass* hudClass)
{
	if (hudClass == nullptr)
		return;

	UWorld* World = GetWorld();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;

	AHUD* newHUD = World->SpawnActor<AHUD>(hudClass, spawnParams);
	CurrentHUD = newHUD;
}

void AStealthPlayerController::RemoveHUD()
{
	if (CurrentHUD != nullptr)
		CurrentHUD->Destroy();

	CurrentHUD = nullptr;
}