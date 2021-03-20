#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	TEAM_SPECTATOR,
	TEAM_SPY,
	TEAM_ARGUS,
	TEAM_RANDOM
};

UENUM(BlueprintType)
enum class EGameType : uint8 
{
	GAMEMODE_DEATHMATCH,
	GAMEMODE_EXTRACTION,
	GAMEMODE_INFILTRATE
};
