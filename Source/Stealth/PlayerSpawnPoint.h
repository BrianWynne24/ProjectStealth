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

	UPROPERTY()
		int32 LastUsed;

public:

	ETeam GetTeam();
	bool CanUse();
};
