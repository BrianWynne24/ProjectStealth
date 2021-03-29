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
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->PerformLineTrace(Z_Param_startLoc,Z_Param_endLoc);
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
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickHangTrace(Z_Param_deltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execMulticastCancelHang)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCancelHang_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpyCharacter::execMulticastStartHang)
	{
		P_GET_STRUCT(FVector,Z_Param_forwardHit);
		P_GET_STRUCT(FVector,Z_Param_upperHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStartHang_Implementation(Z_Param_forwardHit,Z_Param_upperHit);
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
	static FName NAME_ASpyCharacter_MulticastCancelHang = FName(TEXT("MulticastCancelHang"));
	void ASpyCharacter::MulticastCancelHang()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_MulticastCancelHang),NULL);
	}
	static FName NAME_ASpyCharacter_MulticastStartHang = FName(TEXT("MulticastStartHang"));
	void ASpyCharacter::MulticastStartHang(FVector forwardHit, FVector upperHit)
	{
		SpyCharacter_eventMulticastStartHang_Parms Parms;
		Parms.forwardHit=forwardHit;
		Parms.upperHit=upperHit;
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_MulticastStartHang),&Parms);
	}
	static FName NAME_ASpyCharacter_ServerCancelHang = FName(TEXT("ServerCancelHang"));
	void ASpyCharacter::ServerCancelHang()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerCancelHang),NULL);
	}
	static FName NAME_ASpyCharacter_ServerStartHang = FName(TEXT("ServerStartHang"));
	void ASpyCharacter::ServerStartHang()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpyCharacter_ServerStartHang),NULL);
	}
	void ASpyCharacter::StaticRegisterNativesASpyCharacter()
	{
		UClass* Class = ASpyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanHang", &ASpyCharacter::execCanHang },
			{ "MulticastCancelHang", &ASpyCharacter::execMulticastCancelHang },
			{ "MulticastStartHang", &ASpyCharacter::execMulticastStartHang },
			{ "OnGround", &ASpyCharacter::execOnGround },
			{ "PerformLineTrace", &ASpyCharacter::execPerformLineTrace },
			{ "ServerCancelHang", &ASpyCharacter::execServerCancelHang },
			{ "ServerStartHang", &ASpyCharacter::execServerStartHang },
			{ "StartHangCooldown", &ASpyCharacter::execStartHangCooldown },
			{ "TickHangTrace", &ASpyCharacter::execTickHangTrace },
			{ "TraceClimbForward", &ASpyCharacter::execTraceClimbForward },
			{ "TraceClimbTop", &ASpyCharacter::execTraceClimbTop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	struct Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "MulticastCancelHang", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_forwardHit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_upperHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::NewProp_forwardHit = { "forwardHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventMulticastStartHang_Parms, forwardHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::NewProp_upperHit = { "upperHit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventMulticastStartHang_Parms, upperHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::NewProp_forwardHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::NewProp_upperHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpyCharacter, nullptr, "MulticastStartHang", nullptr, nullptr, sizeof(SpyCharacter_eventMulticastStartHang_Parms), Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpyCharacter_MulticastStartHang()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpyCharacter_MulticastStartHang_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics
	{
		struct SpyCharacter_eventPerformLineTrace_Parms
		{
			FVector startLoc;
			FVector endLoc;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endLoc;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_startLoc = { "startLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, startLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_endLoc = { "endLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, endLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventPerformLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_startLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_PerformLineTrace_Statics::NewProp_endLoc,
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
			float deltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_deltaSeconds = { "deltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpyCharacter_eventTickHangTrace_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::NewProp_deltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpyCharacter_TickHangTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpyCharacter.h" },
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
		{ &Z_Construct_UFunction_ASpyCharacter_CanHang, "CanHang" }, // 1491335431
		{ &Z_Construct_UFunction_ASpyCharacter_MulticastCancelHang, "MulticastCancelHang" }, // 1511301542
		{ &Z_Construct_UFunction_ASpyCharacter_MulticastStartHang, "MulticastStartHang" }, // 3131019653
		{ &Z_Construct_UFunction_ASpyCharacter_OnGround, "OnGround" }, // 3218753052
		{ &Z_Construct_UFunction_ASpyCharacter_PerformLineTrace, "PerformLineTrace" }, // 1228934580
		{ &Z_Construct_UFunction_ASpyCharacter_ServerCancelHang, "ServerCancelHang" }, // 696899862
		{ &Z_Construct_UFunction_ASpyCharacter_ServerStartHang, "ServerStartHang" }, // 1987140113
		{ &Z_Construct_UFunction_ASpyCharacter_StartHangCooldown, "StartHangCooldown" }, // 1543046441
		{ &Z_Construct_UFunction_ASpyCharacter_TickHangTrace, "TickHangTrace" }, // 2608807544
		{ &Z_Construct_UFunction_ASpyCharacter_TraceClimbForward, "TraceClimbForward" }, // 633302541
		{ &Z_Construct_UFunction_ASpyCharacter_TraceClimbTop, "TraceClimbTop" }, // 710037057
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging = { "bHanging", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpyCharacter), &Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::NewProp_bHanging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::NewProp_HangCooldown_MetaData[] = {
		{ "Comment", "/*UFUNCTION()\n\x09void OnRep_Hanging();*/" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
		{ "ToolTip", "UFUNCTION()\n       void OnRep_Hanging();" },
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
	IMPLEMENT_CLASS(ASpyCharacter, 255201730);
	template<> STEALTH_API UClass* StaticClass<ASpyCharacter>()
	{
		return ASpyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpyCharacter(Z_Construct_UClass_ASpyCharacter, &ASpyCharacter::StaticClass, TEXT("/Script/Stealth"), TEXT("ASpyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
