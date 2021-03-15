// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSpawnPoint.h"

ETeam APlayerSpawnPoint::GetTeam()
{
	return Team;
}

bool APlayerSpawnPoint::CanUse()
{
	return (GetGameTimeSinceCreation() > LastUsed) ? true : false;
}