// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
class UGadgetBase;
class UObject;
#ifdef STEALTH_StealthCharacter_generated_h
#error "StealthCharacter.generated.h already included, missing '#pragma once' in StealthCharacter.h"
#endif
#define STEALTH_StealthCharacter_generated_h

#define Stealth_Source_Stealth_StealthCharacter_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_StealthCharacter_h_15_RPC_WRAPPERS \
	virtual void ServerSetCharacterMesh_Implementation(); \
	virtual void ServerBeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_CharacterMesh); \
	DECLARE_FUNCTION(execGetGadget); \
	DECLARE_FUNCTION(execServerAddGadget); \
	DECLARE_FUNCTION(execServerSetCharacterMesh); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execServerBeginPlay);


#define Stealth_Source_Stealth_StealthCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetCharacterMesh_Implementation(); \
	virtual void ServerBeginPlay_Implementation(); \
 \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon); \
	DECLARE_FUNCTION(execOnRep_CharacterMesh); \
	DECLARE_FUNCTION(execGetGadget); \
	DECLARE_FUNCTION(execServerAddGadget); \
	DECLARE_FUNCTION(execServerSetCharacterMesh); \
	DECLARE_FUNCTION(execEquipWeapon); \
	DECLARE_FUNCTION(execServerBeginPlay);


#define Stealth_Source_Stealth_StealthCharacter_h_15_EVENT_PARMS
#define Stealth_Source_Stealth_StealthCharacter_h_15_CALLBACK_WRAPPERS
#define Stealth_Source_Stealth_StealthCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend struct Z_Construct_UClass_AStealthCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterMesh=NETFIELD_REP_START, \
		CurrentWeapon, \
		Health, \
		Gadgets, \
		NETFIELD_REP_END=Gadgets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_StealthCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend struct Z_Construct_UClass_AStealthCharacter_Statics; \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterMesh=NETFIELD_REP_START, \
		CurrentWeapon, \
		Health, \
		Gadgets, \
		NETFIELD_REP_END=Gadgets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_StealthCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public:


#define Stealth_Source_Stealth_StealthCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthCharacter)


#define Stealth_Source_Stealth_StealthCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Gadgets() { return STRUCT_OFFSET(AStealthCharacter, Gadgets); } \
	FORCEINLINE static uint32 __PPO__GadgetSelectedIndex() { return STRUCT_OFFSET(AStealthCharacter, GadgetSelectedIndex); }


#define Stealth_Source_Stealth_StealthCharacter_h_12_PROLOG \
	Stealth_Source_Stealth_StealthCharacter_h_15_EVENT_PARMS


#define Stealth_Source_Stealth_StealthCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthCharacter_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthCharacter_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthCharacter_h_15_INCLASS \
	Stealth_Source_Stealth_StealthCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_StealthCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_StealthCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AStealthCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
