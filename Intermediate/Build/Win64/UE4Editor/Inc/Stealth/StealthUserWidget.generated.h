// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef STEALTH_StealthUserWidget_generated_h
#error "StealthUserWidget.generated.h already included, missing '#pragma once' in StealthUserWidget.h"
#endif
#define STEALTH_StealthUserWidget_generated_h

#define Stealth_Source_Stealth_StealthUserWidget_h_16_SPARSE_DATA
#define Stealth_Source_Stealth_StealthUserWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoinTeam); \
	DECLARE_FUNCTION(execArgusButtonClicked); \
	DECLARE_FUNCTION(execSpectatorButtonClicked); \
	DECLARE_FUNCTION(execSpyButtonClicked);


#define Stealth_Source_Stealth_StealthUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinTeam); \
	DECLARE_FUNCTION(execArgusButtonClicked); \
	DECLARE_FUNCTION(execSpectatorButtonClicked); \
	DECLARE_FUNCTION(execSpyButtonClicked);


#define Stealth_Source_Stealth_StealthUserWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStealthUserWidget(); \
	friend struct Z_Construct_UClass_UStealthUserWidget_Statics; \
public: \
	DECLARE_CLASS(UStealthUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UStealthUserWidget)


#define Stealth_Source_Stealth_StealthUserWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStealthUserWidget(); \
	friend struct Z_Construct_UClass_UStealthUserWidget_Statics; \
public: \
	DECLARE_CLASS(UStealthUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UStealthUserWidget)


#define Stealth_Source_Stealth_StealthUserWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStealthUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStealthUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStealthUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStealthUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStealthUserWidget(UStealthUserWidget&&); \
	NO_API UStealthUserWidget(const UStealthUserWidget&); \
public:


#define Stealth_Source_Stealth_StealthUserWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStealthUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStealthUserWidget(UStealthUserWidget&&); \
	NO_API UStealthUserWidget(const UStealthUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStealthUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStealthUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStealthUserWidget)


#define Stealth_Source_Stealth_StealthUserWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_StealthUserWidget_h_13_PROLOG
#define Stealth_Source_Stealth_StealthUserWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthUserWidget_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_StealthUserWidget_h_16_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthUserWidget_h_16_INCLASS \
	Stealth_Source_Stealth_StealthUserWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthUserWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthUserWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthUserWidget_h_16_SPARSE_DATA \
	Stealth_Source_Stealth_StealthUserWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthUserWidget_h_16_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthUserWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class UStealthUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
