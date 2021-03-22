// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerSpawnPoint;
enum class ETeam : uint8;
class UObject;
enum class EGameState : uint8;
#ifdef STEALTH_StealthGameState_generated_h
#error "StealthGameState.generated.h already included, missing '#pragma once' in StealthGameState.h"
#endif
#define STEALTH_StealthGameState_generated_h

#define Stealth_Source_Stealth_StealthGameState_h_18_SPARSE_DATA
#define Stealth_Source_Stealth_StealthGameState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerSpawnPoints); \
	DECLARE_FUNCTION(execGetAvailableSpawnPoint); \
	DECLARE_FUNCTION(execGetCharacterClass); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execGetCurrentGameState);


#define Stealth_Source_Stealth_StealthGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerSpawnPoints); \
	DECLARE_FUNCTION(execGetAvailableSpawnPoint); \
	DECLARE_FUNCTION(execGetCharacterClass); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execGetCurrentGameState);


#define Stealth_Source_Stealth_StealthGameState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthGameState(); \
	friend struct Z_Construct_UClass_AStealthGameState_Statics; \
public: \
	DECLARE_CLASS(AStealthGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameState)


#define Stealth_Source_Stealth_StealthGameState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAStealthGameState(); \
	friend struct Z_Construct_UClass_AStealthGameState_Statics; \
public: \
	DECLARE_CLASS(AStealthGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthGameState)


#define Stealth_Source_Stealth_StealthGameState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameState(AStealthGameState&&); \
	NO_API AStealthGameState(const AStealthGameState&); \
public:


#define Stealth_Source_Stealth_StealthGameState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthGameState(AStealthGameState&&); \
	NO_API AStealthGameState(const AStealthGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthGameState)


#define Stealth_Source_Stealth_StealthGameState_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerSpawnPoints() { return STRUCT_OFFSET(AStealthGameState, PlayerSpawnPoints); } \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(AStealthGameState, GameState); } \
	FORCEINLINE static uint32 __PPO__TimeLeft() { return STRUCT_OFFSET(AStealthGameState, TimeLeft); }


#define Stealth_Source_Stealth_StealthGameState_h_15_PROLOG
#define Stealth_Source_Stealth_StealthGameState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthGameState_h_18_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthGameState_h_18_SPARSE_DATA \
	Stealth_Source_Stealth_StealthGameState_h_18_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthGameState_h_18_INCLASS \
	Stealth_Source_Stealth_StealthGameState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthGameState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthGameState_h_18_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthGameState_h_18_SPARSE_DATA \
	Stealth_Source_Stealth_StealthGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthGameState_h_18_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthGameState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
