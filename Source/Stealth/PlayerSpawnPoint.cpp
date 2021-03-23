// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSpawnPoint.h"
#include <Runtime\Engine\Public\Net\UnrealNetwork.h>

ETeam APlayerSpawnPoint::GetTeam()
{
	return Team;
}

bool APlayerSpawnPoint::CanUse()
{
	return (GetGameTimeSinceCreation() > LastUsed) ? true : false;
}

void APlayerSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerSpawnPoint, Team);
}

void APlayerSpawnPoint::StartCooldown()
{
	LastUsed = (GetGameTimeSinceCreation() + 3);
}