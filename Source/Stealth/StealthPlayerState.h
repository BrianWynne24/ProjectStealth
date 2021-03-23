// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Enumeration.h"
#include "StealthPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API AStealthPlayerState : public APlayerState
{
	GENERATED_BODY()
	
	AStealthPlayerState();

	void PostActorCreated();

public:

	UPROPERTY(Replicated, EditAnywhere, Category = "Team", meta = (Bitmask, BitmaskEnum = "ETeam"))
	TEnumAsByte<ETeam> Team;	

	UPROPERTY(Replicated)
	uint32 Lives;

	UPROPERTY(Replicated)
	uint32 Deaths;

	UPROPERTY(Replicated)
	uint32 Kills;

	UPROPERTY()
	TSubclassOf<UUserWidget> WidgetTeamSelect;

	UFUNCTION()
	ETeam GetTeam() { return Team; }

	UFUNCTION(Server, Reliable)
	void SetTeam(ETeam playerTeam);
	void SetTeam_Implementation(ETeam playerTeam);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	FORCEINLINE class TSubclassOf<UUserWidget> GetTeamSelectMenu() { return WidgetTeamSelect; }
};
