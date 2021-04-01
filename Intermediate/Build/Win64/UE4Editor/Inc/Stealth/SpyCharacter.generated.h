// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef STEALTH_SpyCharacter_generated_h
#error "SpyCharacter.generated.h already included, missing '#pragma once' in SpyCharacter.h"
#endif
#define STEALTH_SpyCharacter_generated_h

#define Stealth_Source_Stealth_SpyCharacter_h_15_SPARSE_DATA
#define Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS \
	virtual void MulticastClimbUp_Implementation(); \
	virtual void ServerSwingRight_Implementation(bool bLeft); \
	virtual void ServerClimbRight_Implementation(bool bLeft); \
	virtual void ServerClimbUp_Implementation(); \
	virtual void ServerStopMovement_Implementation(); \
	virtual void ServerCancelHang_Implementation(); \
	virtual void ClientStartHang_Implementation(float newYaw); \
	virtual void ServerStartHang_Implementation(); \
	virtual void ServerClimbFinish_Implementation(); \
 \
	DECLARE_FUNCTION(execOnGround); \
	DECLARE_FUNCTION(execTraceHangSwingRight); \
	DECLARE_FUNCTION(execTraceHangMoveRight); \
	DECLARE_FUNCTION(execTraceClimbTop); \
	DECLARE_FUNCTION(execTraceClimbForward); \
	DECLARE_FUNCTION(execPerformLineTrace); \
	DECLARE_FUNCTION(execCanSwingRight); \
	DECLARE_FUNCTION(execCanClimbRight); \
	DECLARE_FUNCTION(execCanClimbUp); \
	DECLARE_FUNCTION(execMulticastClimbUp); \
	DECLARE_FUNCTION(execServerSwingRight); \
	DECLARE_FUNCTION(execServerClimbRight); \
	DECLARE_FUNCTION(execServerClimbUp); \
	DECLARE_FUNCTION(execCanHang); \
	DECLARE_FUNCTION(execStartHangCooldown); \
	DECLARE_FUNCTION(execTickHangTrace); \
	DECLARE_FUNCTION(execServerStopMovement); \
	DECLARE_FUNCTION(execServerCancelHang); \
	DECLARE_FUNCTION(execClientStartHang); \
	DECLARE_FUNCTION(execServerStartHang); \
	DECLARE_FUNCTION(execOnRep_Hanging); \
	DECLARE_FUNCTION(execServerClimbFinish);


#define Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastClimbUp_Implementation(); \
	virtual void ServerSwingRight_Implementation(bool bLeft); \
	virtual void ServerClimbRight_Implementation(bool bLeft); \
	virtual void ServerClimbUp_Implementation(); \
	virtual void ServerStopMovement_Implementation(); \
	virtual void ServerCancelHang_Implementation(); \
	virtual void ClientStartHang_Implementation(float newYaw); \
	virtual void ServerStartHang_Implementation(); \
	virtual void ServerClimbFinish_Implementation(); \
 \
	DECLARE_FUNCTION(execOnGround); \
	DECLARE_FUNCTION(execTraceHangSwingRight); \
	DECLARE_FUNCTION(execTraceHangMoveRight); \
	DECLARE_FUNCTION(execTraceClimbTop); \
	DECLARE_FUNCTION(execTraceClimbForward); \
	DECLARE_FUNCTION(execPerformLineTrace); \
	DECLARE_FUNCTION(execCanSwingRight); \
	DECLARE_FUNCTION(execCanClimbRight); \
	DECLARE_FUNCTION(execCanClimbUp); \
	DECLARE_FUNCTION(execMulticastClimbUp); \
	DECLARE_FUNCTION(execServerSwingRight); \
	DECLARE_FUNCTION(execServerClimbRight); \
	DECLARE_FUNCTION(execServerClimbUp); \
	DECLARE_FUNCTION(execCanHang); \
	DECLARE_FUNCTION(execStartHangCooldown); \
	DECLARE_FUNCTION(execTickHangTrace); \
	DECLARE_FUNCTION(execServerStopMovement); \
	DECLARE_FUNCTION(execServerCancelHang); \
	DECLARE_FUNCTION(execClientStartHang); \
	DECLARE_FUNCTION(execServerStartHang); \
	DECLARE_FUNCTION(execOnRep_Hanging); \
	DECLARE_FUNCTION(execServerClimbFinish);


#define Stealth_Source_Stealth_SpyCharacter_h_15_EVENT_PARMS \
	struct SpyCharacter_eventClientStartHang_Parms \
	{ \
		float newYaw; \
	}; \
	struct SpyCharacter_eventServerClimbRight_Parms \
	{ \
		bool bLeft; \
	}; \
	struct SpyCharacter_eventServerSwingRight_Parms \
	{ \
		bool bLeft; \
	};


#define Stealth_Source_Stealth_SpyCharacter_h_15_CALLBACK_WRAPPERS
#define Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpyCharacter(); \
	friend struct Z_Construct_UClass_ASpyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpyCharacter, AStealthCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(ASpyCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHanging=NETFIELD_REP_START, \
		bClimbing, \
		NETFIELD_REP_END=bClimbing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpyCharacter(); \
	friend struct Z_Construct_UClass_ASpyCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpyCharacter, AStealthCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(ASpyCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHanging=NETFIELD_REP_START, \
		bClimbing, \
		NETFIELD_REP_END=bClimbing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


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
	FORCEINLINE static uint32 __PPO__bHanging() { return STRUCT_OFFSET(ASpyCharacter, bHanging); } \
	FORCEINLINE static uint32 __PPO__bClimbing() { return STRUCT_OFFSET(ASpyCharacter, bClimbing); } \
	FORCEINLINE static uint32 __PPO__ClimbCooldown() { return STRUCT_OFFSET(ASpyCharacter, ClimbCooldown); } \
	FORCEINLINE static uint32 __PPO__NetStopMovementCooldown() { return STRUCT_OFFSET(ASpyCharacter, NetStopMovementCooldown); } \
	FORCEINLINE static uint32 __PPO__HangCooldown() { return STRUCT_OFFSET(ASpyCharacter, HangCooldown); } \
	FORCEINLINE static uint32 __PPO__AnimationHang() { return STRUCT_OFFSET(ASpyCharacter, AnimationHang); }


#define Stealth_Source_Stealth_SpyCharacter_h_12_PROLOG \
	Stealth_Source_Stealth_SpyCharacter_h_15_EVENT_PARMS


#define Stealth_Source_Stealth_SpyCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_SpyCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_SpyCharacter_h_15_SPARSE_DATA \
	Stealth_Source_Stealth_SpyCharacter_h_15_RPC_WRAPPERS \
	Stealth_Source_Stealth_SpyCharacter_h_15_CALLBACK_WRAPPERS \
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
	Stealth_Source_Stealth_SpyCharacter_h_15_CALLBACK_WRAPPERS \
	Stealth_Source_Stealth_SpyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_SpyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEALTH_API UClass* StaticClass<class ASpyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_SpyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
