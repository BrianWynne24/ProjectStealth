// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STEALTH_StealthPlayerController_generated_h
#error "StealthPlayerController.generated.h already included, missing '#pragma once' in StealthPlayerController.h"
#endif
#define STEALTH_StealthPlayerController_generated_h

#define Stealth_Source_Stealth_StealthPlayerController_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_StealthPlayerController_h_15_RPC_WRAPPERS \
	virtual void SetClientHUD_Implementation(UClass* hudClass); \
	virtual void ClientTeamSelectUI_Implementation(); \
 \
	DECLARE_FUNCTION(execRemoveHUD); \
	DECLARE_FUNCTION(execSetClientHUD); \
	DECLARE_FUNCTION(execClientTeamSelectUI);


#define Stealth_Source_Stealth_StealthPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetClientHUD_Implementation(UClass* hudClass); \
	virtual void ClientTeamSelectUI_Implementation(); \
 \
	DECLARE_FUNCTION(execRemoveHUD); \
	DECLARE_FUNCTION(execSetClientHUD); \
	DECLARE_FUNCTION(execClientTeamSelectUI);


#define Stealth_Source_Stealth_StealthPlayerController_h_15_EVENT_PARMS \
	struct StealthPlayerController_eventSetClientHUD_Parms \
	{ \
		UClass* hudClass; \
	};


#define Stealth_Source_Stealth_StealthPlayerController_h_15_CALLBACK_WRAPPERS
#define Stealth_Source_Stealth_StealthPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthPlayerController(); \
	friend struct Z_Construct_UClass_AStealthPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStealthPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthPlayerController)


#define Stealth_Source_Stealth_StealthPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStealthPlayerController(); \
	friend struct Z_Construct_UClass_AStealthPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStealthPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthPlayerController)


#define Stealth_Source_Stealth_StealthPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthPlayerController(AStealthPlayerController&&); \
	NO_API AStealthPlayerController(const AStealthPlayerController&); \
public:


#define Stealth_Source_Stealth_StealthPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthPlayerController(AStealthPlayerController&&); \
	NO_API AStealthPlayerController(const AStealthPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthPlayerController)


#define Stealth_Source_Stealth_StealthPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_StealthPlayerController_h_12_PROLOG \
	Stealth_Source_Stealth_StealthPlayerController_h_15_EVENT_PARMS


#define Stealth_Source_Stealth_StealthPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthPlayerController_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthPlayerController_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_INCLASS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthPlayerController_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
