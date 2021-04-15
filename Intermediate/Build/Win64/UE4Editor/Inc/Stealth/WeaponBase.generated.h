// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AStealthCharacter;
#ifdef STEALTH_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define STEALTH_WeaponBase_generated_h

#define Stealth_Source_Stealth_WeaponBase_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_WeaponBase_h_15_RPC_WRAPPERS \
	virtual void ServerReload_Implementation(); \
	virtual void ServerShootSecondary_Implementation(); \
	virtual void MulticastShootPrimary_Implementation(); \
	virtual void ServerShootPrimary_Implementation(FVector endLoc); \
 \
	DECLARE_FUNCTION(execGetMagazineCount); \
	DECLARE_FUNCTION(execGetWeaponLocation); \
	DECLARE_FUNCTION(execOnRep_MagazineCount); \
	DECLARE_FUNCTION(execGetAimingLocation); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execServerShootSecondary); \
	DECLARE_FUNCTION(execMulticastShootPrimary); \
	DECLARE_FUNCTION(execClientShootPrimary); \
	DECLARE_FUNCTION(execServerShootPrimary); \
	DECLARE_FUNCTION(execCanShootSecondary); \
	DECLARE_FUNCTION(execCanShootPrimary); \
	DECLARE_FUNCTION(execShootSecondary); \
	DECLARE_FUNCTION(execStopPrimaryFire); \
	DECLARE_FUNCTION(execShootPrimary); \
	DECLARE_FUNCTION(execClientAttach); \
	DECLARE_FUNCTION(execServerEquipToCharacter);


#define Stealth_Source_Stealth_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerReload_Implementation(); \
	virtual void ServerShootSecondary_Implementation(); \
	virtual void MulticastShootPrimary_Implementation(); \
	virtual void ServerShootPrimary_Implementation(FVector endLoc); \
 \
	DECLARE_FUNCTION(execGetMagazineCount); \
	DECLARE_FUNCTION(execGetWeaponLocation); \
	DECLARE_FUNCTION(execOnRep_MagazineCount); \
	DECLARE_FUNCTION(execGetAimingLocation); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execServerShootSecondary); \
	DECLARE_FUNCTION(execMulticastShootPrimary); \
	DECLARE_FUNCTION(execClientShootPrimary); \
	DECLARE_FUNCTION(execServerShootPrimary); \
	DECLARE_FUNCTION(execCanShootSecondary); \
	DECLARE_FUNCTION(execCanShootPrimary); \
	DECLARE_FUNCTION(execShootSecondary); \
	DECLARE_FUNCTION(execStopPrimaryFire); \
	DECLARE_FUNCTION(execShootPrimary); \
	DECLARE_FUNCTION(execClientAttach); \
	DECLARE_FUNCTION(execServerEquipToCharacter);


#define Stealth_Source_Stealth_WeaponBase_h_15_EVENT_PARMS \
	struct WeaponBase_eventServerShootPrimary_Parms \
	{ \
		FVector endLoc; \
	};


#define Stealth_Source_Stealth_WeaponBase_h_15_CALLBACK_WRAPPERS
#define Stealth_Source_Stealth_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MagazineFullNum=NETFIELD_REP_START, \
		AmmoCount, \
		bUseAmmo, \
		bReloading, \
		MagazineCount, \
		NETFIELD_REP_END=MagazineCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_WeaponBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MagazineFullNum=NETFIELD_REP_START, \
		AmmoCount, \
		bUseAmmo, \
		bReloading, \
		MagazineCount, \
		NETFIELD_REP_END=MagazineCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define Stealth_Source_Stealth_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define Stealth_Source_Stealth_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Stealth_Source_Stealth_WeaponBase_h_12_PROLOG \
	Stealth_Source_Stealth_WeaponBase_h_15_EVENT_PARMS


#define Stealth_Source_Stealth_WeaponBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_WeaponBase_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_WeaponBase_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_WeaponBase_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_WeaponBase_h_15_INCLASS \
	Stealth_Source_Stealth_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_WeaponBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_WeaponBase_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_WeaponBase_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
