// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "Enumeration.h"
#include "PlayerSpawnPoint.generated.h"

/**
 * 
 */
UCLASS()
class STEALTH_API APlayerSpawnPoint : public ATargetPoint
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Team", meta = (Bitmask, BitmaskEnum = "ETeam"))
	TEnumAsByte<ETeam> Team;

	UPROPERTY(Replicated)
	int32 LastUsed;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

public:

	UFUNCTION()
	ETeam GetTeam();

	UFUNCTION()
	bool CanUse();

	UFUNCTION()
	void StartCooldown();
};
