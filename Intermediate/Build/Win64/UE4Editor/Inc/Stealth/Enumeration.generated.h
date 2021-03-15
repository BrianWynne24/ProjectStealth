// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_Enumeration_generated_h
#error "Enumeration.generated.h already included, missing '#pragma once' in Enumeration.h"
#endif
#define STEALTH_Enumeration_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_Enumeration_h


#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::TEAM_SPECTATOR) \
	op(ETeam::TEAM_SPY) \
	op(ETeam::TEAM_ARGUS) \
	op(ETeam::TEAM_RANDOM) 

enum class ETeam : uint8;
template<> STEALTH_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
