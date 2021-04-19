// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_GadgetBase_generated_h
#error "GadgetBase.generated.h already included, missing '#pragma once' in GadgetBase.h"
#endif
#define STEALTH_GadgetBase_generated_h

#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execCanUse); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execGetGadgetName); \
	DECLARE_FUNCTION(execOnUse); \
	DECLARE_FUNCTION(execOnShoot);


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execCanUse); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execGetGadgetName); \
	DECLARE_FUNCTION(execOnUse); \
	DECLARE_FUNCTION(execOnShoot);


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGadgetBase(); \
	friend struct Z_Construct_UClass_UGadgetBase_Statics; \
public: \
	DECLARE_CLASS(UGadgetBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UGadgetBase)


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGadgetBase(); \
	friend struct Z_Construct_UClass_UGadgetBase_Statics; \
public: \
	DECLARE_CLASS(UGadgetBase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(UGadgetBase)


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGadgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGadgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGadgetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGadgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGadgetBase(UGadgetBase&&); \
	NO_API UGadgetBase(const UGadgetBase&); \
public:


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGadgetBase(UGadgetBase&&); \
	NO_API UGadgetBase(const UGadgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGadgetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGadgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGadgetBase)


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Name() { return STRUCT_OFFSET(UGadgetBase, Name); } \
	FORCEINLINE static uint32 __PPO__bCanUse() { return STRUCT_OFFSET(UGadgetBase, bCanUse); } \
	FORCEINLINE static uint32 __PPO__bCanShoot() { return STRUCT_OFFSET(UGadgetBase, bCanShoot); } \
	FORCEINLINE static uint32 __PPO__Quantity() { return STRUCT_OFFSET(UGadgetBase, Quantity); }


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_12_PROLOG
#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_INCLASS \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_Gadgets_GadgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class UGadgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_Gadgets_GadgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
