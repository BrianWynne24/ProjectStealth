#pragma once

#include "CoreMinimal.h"

UENUM(EditAnywhere, meta = (Bitflags))
enum class ETeam : uint8
{
	TEAM_SPECTATOR,
	TEAM_SPY,
	TEAM_ARGUS,
	TEAM_RANDOM
};
