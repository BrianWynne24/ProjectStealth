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


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::LOBBY) \
	op(EGameState::PRE_GAME) \
	op(EGameState::ACTIVE) \
	op(EGameState::POST_GAME) 

enum class EGameState : uint8;
template<> STEALTH_API UEnum* StaticEnum<EGameState>();

#define FOREACH_ENUM_EGAMETYPE(op) \
	op(EGameType::DEATHMATCH) \
	op(EGameType::EXTRACTION) \
	op(EGameType::INFILTRATE) 

enum class EGameType : uint8;
template<> STEALTH_API UEnum* StaticEnum<EGameType>();

#define FOREACH_ENUM_ETEAM(op) \
	op(ETeam::UNASSIGNED) \
	op(ETeam::RANDOM) \
	op(ETeam::SPECTATOR) \
	op(ETeam::SPY) \
	op(ETeam::ARGUS) 

enum class ETeam : uint8;
template<> STEALTH_API UEnum* StaticEnum<ETeam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
