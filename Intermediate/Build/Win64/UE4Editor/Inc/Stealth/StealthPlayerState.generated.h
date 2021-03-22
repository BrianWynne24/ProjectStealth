// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef STEALTH_StealthPlayerState_generated_h
#error "StealthPlayerState.generated.h already included, missing '#pragma once' in StealthPlayerState.h"
#endif
#define STEALTH_StealthPlayerState_generated_h

#define Stealth_Source_Stealth_StealthPlayerState_h_16_SPARSE_DATA
#define Stealth_Source_Stealth_StealthPlayerState_h_16_RPC_WRAPPERS \
	virtual void SetTeam_Implementation(ETeam playerTeam); \
 \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execGetTeam);


#define Stealth_Source_Stealth_StealthPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execGetTeam);


#define Stealth_Source_Stealth_StealthPlayerState_h_16_EVENT_PARMS \
	struct StealthPlayerState_eventSetTeam_Parms \
	{ \
		ETeam playerTeam; \
	};


#define Stealth_Source_Stealth_StealthPlayerState_h_16_CALLBACK_WRAPPERS
#define Stealth_Source_Stealth_StealthPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthPlayerState(); \
	friend struct Z_Construct_UClass_AStealthPlayerState_Statics; \
public: \
	DECLARE_CLASS(AStealthPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		Lives, \
		Deaths, \
		Kills, \
		NETFIELD_REP_END=Kills	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_StealthPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAStealthPlayerState(); \
	friend struct Z_Construct_UClass_AStealthPlayerState_Statics; \
public: \
	DECLARE_CLASS(AStealthPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Team=NETFIELD_REP_START, \
		Lives, \
		Deaths, \
		Kills, \
		NETFIELD_REP_END=Kills	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_StealthPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthPlayerState(AStealthPlayerState&&); \
	NO_API AStealthPlayerState(const AStealthPlayerState&); \
public:


#define Stealth_Source_Stealth_StealthPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthPlayerState(AStealthPlayerState&&); \
	NO_API AStealthPlayerState(const AStealthPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthPlayerState)


#define Stealth_Source_Stealth_StealthPlayerState_h_16_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_StealthPlayerState_h_13_PROLOG \
	Stealth_Source_Stealth_StealthPlayerState_h_16_EVENT_PARMS


#define Stealth_Source_Stealth_StealthPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthPlayerState_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_StealthPlayerState_h_16_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_INCLASS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthPlayerState_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_StealthPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
