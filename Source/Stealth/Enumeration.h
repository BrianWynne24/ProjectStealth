#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	UNASSIGNED,
	RANDOM,
	SPECTATOR,
	SPY,
	ARGUS
};

UENUM(BlueprintType)
enum class EGameType : uint8 
{
	DEATHMATCH,
	EXTRACTION,
	INFILTRATE
};

UENUM(BlueprintType)
enum class EGameState : uint8
{
	LOBBY,
	PRE_GAME,
	ACTIVE,
	POST_GAME
};
