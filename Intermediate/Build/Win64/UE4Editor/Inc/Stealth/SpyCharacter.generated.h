// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_SpyCharacter_generated_h
#error "SpyCharacter.generated.h already included, missing '#pragma once' in SpyCharacter.h"
#endif
#define STEALTH_SpyCharacter_generated_h

#define Stealth_Source_Stealth_SpyCharacter_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS
#define Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpyCharacter(); \
	friend struct Z_Construct_UClass_ASpyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpyCharacter, AStealthCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(ASpyCharacter)


#define Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpyCharacter(); \
	friend struct Z_Construct_UClass_ASpyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpyCharacter, AStealthCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(ASpyCharacter)


#define Stealth_Source_Stealth_SpyCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpyCharacter(ASpyCharacter&&); \
	NO_API ASpyCharacter(const ASpyCharacter&); \
public:


#define Stealth_Source_Stealth_SpyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpyCharacter(ASpyCharacter&&); \
	NO_API ASpyCharacter(const ASpyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpyCharacter)


#define Stealth_Source_Stealth_SpyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASpyCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASpyCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__bHanging() { return STRUCT_OFFSET(ASpyCharacter, bHanging); }


#define Stealth_Source_Stealth_SpyCharacter_h_12_PROLOG
#define Stealth_Source_Stealth_SpyCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_SpyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_SpyCharacter_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS \
	Stealth_Source_Stealth_SpyCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_SpyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_SpyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_SpyCharacter_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_SpyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class ASpyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_SpyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
