// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_PlayerSpawnPoint_generated_h
#error "PlayerSpawnPoint.generated.h already included, missing '#pragma once' in PlayerSpawnPoint.h"
#endif
#define STEALTH_PlayerSpawnPoint_generated_h

#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_SPARSE_DATA
#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_RPC_WRAPPERS
#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerSpawnPoint(); \
	friend struct Z_Construct_UClass_APlayerSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(APlayerSpawnPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(APlayerSpawnPoint)


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerSpawnPoint(); \
	friend struct Z_Construct_UClass_APlayerSpawnPoint_Statics; \
public: \
	DECLARE_CLASS(APlayerSpawnPoint, ATargetPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(APlayerSpawnPoint)


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerSpawnPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerSpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSpawnPoint(APlayerSpawnPoint&&); \
	NO_API APlayerSpawnPoint(const APlayerSpawnPoint&); \
public:


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerSpawnPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSpawnPoint(APlayerSpawnPoint&&); \
	NO_API APlayerSpawnPoint(const APlayerSpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSpawnPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerSpawnPoint)


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Team() { return STRUCT_OFFSET(APlayerSpawnPoint, Team); } \
	FORCEINLINE static uint32 __PPO__LastUsed() { return STRUCT_OFFSET(APlayerSpawnPoint, LastUsed); }


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_13_PROLOG
#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_RPC_WRAPPERS \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_INCLASS \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_PlayerSpawnPoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_PlayerSpawnPoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class APlayerSpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_PlayerSpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
