// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSpawnPoint.h"
#include "Components/ArrowComponent.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"

APlayerSpawnPoint::APlayerSpawnPoint()
{
}

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

void APlayerSpawnPoint::StartCooldown(uint32 length)
{
	LastUsed = (GetGameTimeSinceCreation() + length);
}