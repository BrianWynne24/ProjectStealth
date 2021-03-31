// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/SpyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpyCharacter() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_ASpyCharacter_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_ASpyCharacter();
	STEALTH_API UClass* Z_Construct_UClass_AStealthCharacter();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpyCharacter::execOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnGround();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execTraceHangMoveRight)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->TraceHangMoveRight(Z_Param_bLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execTraceClimbTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->TraceClimbTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execTraceClimbForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->TraceClimbForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execPerformLineTrace)
	{
		P_GET_STRUCT(FVector,Z_Param_startLoc);
		P_GET_STRUCT(FVector,Z_Param_endLoc);
		P_GET_PROPERTY(FNameProperty,Z_Param_traceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->PerformLineTrace(Z_Param_startLoc,Z_Param_endLoc,Z_Param_traceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execCanClimbRight)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanClimbRight(Z_Param_bLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execCanClimbUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanClimbUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execMulticastClimbUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastClimbUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerClimbRight)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClimbRight_Implementation(Z_Param_bLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerClimbUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClimbUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execCanHang)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHang();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execStartHangCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHangCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execTickHangTrace)
	{
		P_GET_UBOOL(Z_Param_bIsServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=P_THIS->TickHangTrace(Z_Param_bIsServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerStopMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStopMovement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerCancelHang)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCancelHang_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerStartHang)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartHang_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execOnRep_Hanging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Hanging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execServerClimbFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClimbFinish_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASpyCharacter_MulticastClimbUp = FName(TEXT("MulticastClimbUp"));
	void ASpyCharacter::MulticastClimbUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_MulticastClimbUp),NULL);
	}
	static FName NAME_ASpyCharacter_ServerCancelHang = FName(TEXT("ServerCancelHang"));
	void ASpyCharacter::ServerCancelHang()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerCancelHang),NULL);
	}
	static FName NAME_ASpyCharacter_ServerClimbFinish = FName(TEXT("ServerClimbFinish"));
	void ASpyCharacter::ServerClimbFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerClimbFinish),NULL);
	}
	static FName NAME_ASpyCharacter_ServerClimbRight = FName(TEXT("ServerClimbRight"));
	void ASpyCharacter::ServerClimbRight(bool bLeft)
	{
		SpyCharacter_eventServerClimbRight_Parms Parms;
		Parms.bLeft=bLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerClimbRight),&Parms);
	}
	static FName NAME_ASpyCharacter_ServerClimbUp = FName(TEXT("ServerClimbUp"));
	void ASpyCharacter::ServerClimbUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerClimbUp),NULL);
	}
	static FName NAME_ASpyCharacter_ServerStartHang = FName(TEXT("ServerStartHang"));
	void ASpyCharacter::ServerStartHang()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerStartHang),NULL);
	}
	static FName NAME_ASpyCharacter_ServerStopMovement = FName(TEXT("ServerStopMovement"));
	void ASpyCharacter::ServerStopMovement()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerStopMovement),NULL);
	}
	void ASpyCharacter::StaticRegisterNativesASpyCharacter()
	{
		UClass* Class = ASpyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanClimbRight", &ASpyCharacter::execCanClimbRight },
			{ "CanClimbUp", &ASpyCharacter::execCanClimbUp },
			{ "CanHang", &ASpyCharacter::execCanHang },
			{ "MulticastClimbUp", &ASpyCharacter::execMulticastClimbUp },
			{ "OnGround", &ASpyCharacter::execOnGround },
			{ "OnRep_Hanging", &ASpyCharacter::execOnRep_Hanging },
			{ "PerformLineTrace", &ASpyCharacter::execPerformLineTrace },
			{ "ServerCancelHang", &ASpyCharacter::execServerCancelHang },
			{ "ServerClimbFinish", &ASpyCharacter::execServerClimbFinish },
			{ "ServerClimbRight", &ASpyCharacter::execServerClimbRight },
			{ "ServerClimbUp", &ASpyCharacter::execServerClimbUp },
			{ "ServerStartHang", &ASpyCharacter::execServerStartHang },
			{ "ServerStopMovement", &ASpyCharacter::execServerStopMovement },
			{ "StartHangCooldown", &ASpyCharacter::execStartHangCooldown },
			{ "TickHangTrace", &ASpyCharacter::execTickHangTrace },
			{ "TraceClimbForward", &ASpyCharacter::execTraceClimbForward },
			{ "TraceClimbTop", &ASpyCharacter::execTraceClimbTop },
			{ "TraceHangMoveRight", &ASpyCharacter::execTraceHangMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics
	{
		struct SpyCharacter_eventCanClimbRight_Parms
		{
			bool bLeft;
			bool ReturnValue;
		};
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((SpyCharacter_eventCanClimbRight_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventCanClimbRight_Parms), &Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpyCharacter_eventCanClimbRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventCanClimbRight_Parms), &Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "CanClimbRight", nullptr, nullptr, sizeof(SpyCharacter_eventCanClimbRight_Parms), Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_CanClimbRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_CanClimbRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics
	{
		struct SpyCharacter_eventCanClimbUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpyCharacter_eventCanClimbUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventCanClimbUp_Parms), &Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "CanClimbUp", nullptr, nullptr, sizeof(SpyCharacter_eventCanClimbUp_Parms), Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_CanClimbUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_CanClimbUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_CanHang_Statics
	{
		struct SpyCharacter_eventCanHang_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpyCharacter_eventCanHang_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventCanHang_Parms), &Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "CanHang", nullptr, nullptr, sizeof(SpyCharacter_eventCanHang_Parms), Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_CanHang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_CanHang_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "MulticastClimbUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_OnGround_Statics
	{
		struct SpyCharacter_eventOnGround_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpyCharacter_eventOnGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventOnGround_Parms), &Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "OnGround", nullptr, nullptr, sizeof(SpyCharacter_eventOnGround_Parms), Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_OnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_OnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "OnRep_Hanging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics
	{
		struct SpyCharacter_eventPerformLineTrace_Parms
		{
			FVector startLoc;
			FVector endLoc;
			FName traceName;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endLoc;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_traceName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_startLoc = { "startLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, startLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_endLoc = { "endLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, endLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_traceName = { "traceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, traceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_startLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_endLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_traceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "PerformLineTrace", nullptr, nullptr, sizeof(SpyCharacter_eventPerformLineTrace_Parms), Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_PerformLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerCancelHang", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerCancelHang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerCancelHang_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerClimbFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics
	{
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((SpyCharacter_eventServerClimbRight_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventServerClimbRight_Parms), &Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::NewProp_bLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerClimbRight", nullptr, nullptr, sizeof(SpyCharacter_eventServerClimbRight_Parms), Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerClimbRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerClimbRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerClimbUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerClimbUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerClimbUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerStartHang", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerStartHang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerStartHang_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "ServerStopMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_ServerStopMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_ServerStopMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "StartHangCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_StartHangCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_StartHangCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics
	{
		struct SpyCharacter_eventTickHangTrace_Parms
		{
			bool bIsServer;
			TArray<FHitResult> ReturnValue;
		};
		static void NewProp_bIsServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_bIsServer_SetBit(void* Obj)
	{
		((SpyCharacter_eventTickHangTrace_Parms*)Obj)->bIsServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_bIsServer = { "bIsServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventTickHangTrace_Parms), &Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventTickHangTrace_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_bIsServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(NetMulticast, Reliable)\n\x09void MulticastStartHang(FVector forwardHit, FVector upperHit);\n\n\x09UFUNCTION(NetMulticast, Reliable)\n\x09void MulticastCancelHang();*/" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
		{ "ToolTip", "UFUNCTION(NetMulticast, Reliable)\n       void MulticastStartHang(FVector forwardHit, FVector upperHit);\n\n       UFUNCTION(NetMulticast, Reliable)\n       void MulticastCancelHang();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "TickHangTrace", nullptr, nullptr, sizeof(SpyCharacter_eventTickHangTrace_Parms), Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_TickHangTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics
	{
		struct SpyCharacter_eventTraceClimbForward_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventTraceClimbForward_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "TraceClimbForward", nullptr, nullptr, sizeof(SpyCharacter_eventTraceClimbForward_Parms), Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_TraceClimbForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_TraceClimbForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics
	{
		struct SpyCharacter_eventTraceClimbTop_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventTraceClimbTop_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "TraceClimbTop", nullptr, nullptr, sizeof(SpyCharacter_eventTraceClimbTop_Parms), Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_TraceClimbTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_TraceClimbTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics
	{
		struct SpyCharacter_eventTraceHangMoveRight_Parms
		{
			bool bLeft;
			FHitResult ReturnValue;
		};
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((SpyCharacter_eventTraceHangMoveRight_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpyCharacter_eventTraceHangMoveRight_Parms), &Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventTraceHangMoveRight_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "TraceHangMoveRight", nullptr, nullptr, sizeof(SpyCharacter_eventTraceHangMoveRight_Parms), Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpyCharacter_NoRegister()
	{
		return ASpyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASpyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHanging_MetaData[];
#endif
		static void NewProp_bHanging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHanging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClimbing_MetaData[];
#endif
		static void NewProp_bClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClimbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ClimbCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetStopMovementCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetStopMovementCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HangCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HangCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationHang_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationHang;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStealthCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpyCharacter_CanClimbRight, "CanClimbRight" }, // 1512732208
		{ &Z_Construct_UFunction_ASpyCharacter_CanClimbUp, "CanClimbUp" }, // 1534762384
		{ &Z_Construct_UFunction_ASpyCharacter_CanHang, "CanHang" }, // 1491335431
		{ &Z_Construct_UFunction_ASpyCharacter_MulticastClimbUp, "MulticastClimbUp" }, // 2015842220
		{ &Z_Construct_UFunction_ASpyCharacter_OnGround, "OnGround" }, // 3218753052
		{ &Z_Construct_UFunction_ASpyCharacter_OnRep_Hanging, "OnRep_Hanging" }, // 1429620377
		{ &Z_Construct_UFunction_ASpyCharacter_PerformLineTrace, "PerformLineTrace" }, // 2917440841
		{ &Z_Construct_UFunction_ASpyCharacter_ServerCancelHang, "ServerCancelHang" }, // 696899862
		{ &Z_Construct_UFunction_ASpyCharacter_ServerClimbFinish, "ServerClimbFinish" }, // 1783069565
		{ &Z_Construct_UFunction_ASpyCharacter_ServerClimbRight, "ServerClimbRight" }, // 36368132
		{ &Z_Construct_UFunction_ASpyCharacter_ServerClimbUp, "ServerClimbUp" }, // 2994272222
		{ &Z_Construct_UFunction_ASpyCharacter_ServerStartHang, "ServerStartHang" }, // 1987140113
		{ &Z_Construct_UFunction_ASpyCharacter_ServerStopMovement, "ServerStopMovement" }, // 2420557626
		{ &Z_Construct_UFunction_ASpyCharacter_StartHangCooldown, "StartHangCooldown" }, // 1543046441
		{ &Z_Construct_UFunction_ASpyCharacter_TickHangTrace, "TickHangTrace" }, // 1255633411
		{ &Z_Construct_UFunction_ASpyCharacter_TraceClimbForward, "TraceClimbForward" }, // 633302541
		{ &Z_Construct_UFunction_ASpyCharacter_TraceClimbTop, "TraceClimbTop" }, // 710037057
		{ &Z_Construct_UFunction_ASpyCharacter_TraceHangMoveRight, "TraceHangMoveRight" }, // 1524747079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpyCharacter.h" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_MetaData[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_SetBit(void* Obj)
	{
		((ASpyCharacter*)Obj)->bHanging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging = { "bHanging", "OnRep_Hanging", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpyCharacter), &Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing_MetaData[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing_SetBit(void* Obj)
	{
		((ASpyCharacter*)Obj)->bClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing = { "bClimbing", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpyCharacter), &Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_ClimbCooldown_MetaData[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_ClimbCooldown = { "ClimbCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, ClimbCooldown), METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_ClimbCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_ClimbCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_NetStopMovementCooldown_MetaData[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_NetStopMovementCooldown = { "NetStopMovementCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, NetStopMovementCooldown), METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_NetStopMovementCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_NetStopMovementCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown_MetaData[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown = { "HangCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, HangCooldown), METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_AnimationHang_MetaData[] = {
		{ "Category", "SpyCharacter" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_AnimationHang = { "AnimationHang", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpyCharacter, AnimationHang), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_AnimationHang_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_AnimationHang_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bClimbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_ClimbCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_NetStopMovementCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpyCharacter_Statics::NewProp_AnimationHang,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpyCharacter_Statics::ClassParams = {
		&ASpyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpyCharacter, 3348934519);
	template<> STEALTH_API UClass* StaticClass<ASpyCharacter>()
	{
		return ASpyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpyCharacter(Z_Construct_UClass_ASpyCharacter, &ASpyCharacter::StaticClass, TEXT("/Script/Stealth"), TEXT("ASpyCharacter"), false, nullptr, nullptr, nullptr);

	void ASpyCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHanging(TEXT("bHanging"));
		static const FName Name_bClimbing(TEXT("bClimbing"));

		const bool bIsValid = true
			&& Name_bHanging == ClassReps[(int32)ENetFields_Private::bHanging].Property->GetFName()
			&& Name_bClimbing == ClassReps[(int32)ENetFields_Private::bClimbing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpyCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
