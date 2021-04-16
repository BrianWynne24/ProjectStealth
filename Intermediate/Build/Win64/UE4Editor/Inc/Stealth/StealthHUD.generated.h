// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_StealthHUD_generated_h
#error "StealthHUD.generated.h already included, missing '#pragma once' in StealthHUD.h"
#endif
#define STEALTH_StealthHUD_generated_h

#define Stealth_Source_Stealth_StealthHUD_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_StealthHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScreenHeight); \
	DECLARE_FUNCTION(execGetScreenWidth);


#define Stealth_Source_Stealth_StealthHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScreenHeight); \
	DECLARE_FUNCTION(execGetScreenWidth);


#define Stealth_Source_Stealth_StealthHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthHUD(); \
	friend struct Z_Construct_UClass_AStealthHUD_Statics; \
public: \
	DECLARE_CLASS(AStealthHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthHUD)


#define Stealth_Source_Stealth_StealthHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStealthHUD(); \
	friend struct Z_Construct_UClass_AStealthHUD_Statics; \
public: \
	DECLARE_CLASS(AStealthHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthHUD)


#define Stealth_Source_Stealth_StealthHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthHUD(AStealthHUD&&); \
	NO_API AStealthHUD(const AStealthHUD&); \
public:


#define Stealth_Source_Stealth_StealthHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthHUD(AStealthHUD&&); \
	NO_API AStealthHUD(const AStealthHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthHUD)


#define Stealth_Source_Stealth_StealthHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SizeX() { return STRUCT_OFFSET(AStealthHUD, SizeX); } \
	FORCEINLINE static uint32 __PPO__SizeY() { return STRUCT_OFFSET(AStealthHUD, SizeY); }


#define Stealth_Source_Stealth_StealthHUD_h_12_PROLOG
#define Stealth_Source_Stealth_StealthHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthHUD_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthHUD_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthHUD_h_15_INCLASS \
	Stealth_Source_Stealth_StealthHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthHUD_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthHUD_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
