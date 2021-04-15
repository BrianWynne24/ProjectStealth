// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthPlayerController() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthPlayerController_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStealthPlayerController::execRemoveHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthPlayerController::execSetClientHUD)
	{
		P_GET_OBJECT(UClass,Z_Param_hudClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClientHUD_Implementation(Z_Param_hudClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthPlayerController::execClientTeamSelectUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTeamSelectUI_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AStealthPlayerController_ClientTeamSelectUI = FName(TEXT("ClientTeamSelectUI"));
	void AStealthPlayerController::ClientTeamSelectUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AStealthPlayerController_ClientTeamSelectUI),NULL);
	}
	static FName NAME_AStealthPlayerController_SetClientHUD = FName(TEXT("SetClientHUD"));
	void AStealthPlayerController::SetClientHUD(UClass* hudClass)
	{
		StealthPlayerController_eventSetClientHUD_Parms Parms;
		Parms.hudClass=hudClass;
		ProcessEvent(FindFunctionChecked(NAME_AStealthPlayerController_SetClientHUD),&Parms);
	}
	void AStealthPlayerController::StaticRegisterNativesAStealthPlayerController()
	{
		UClass* Class = AStealthPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientTeamSelectUI", &AStealthPlayerController::execClientTeamSelectUI },
			{ "RemoveHUD", &AStealthPlayerController::execRemoveHUD },
			{ "SetClientHUD", &AStealthPlayerController::execSetClientHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthPlayerController, nullptr, "ClientTeamSelectUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthPlayerController, nullptr, "RemoveHUD", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthPlayerController_RemoveHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthPlayerController_RemoveHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_hudClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::NewProp_hudClass = { "hudClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthPlayerController_eventSetClientHUD_Parms, hudClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::NewProp_hudClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthPlayerController, nullptr, "SetClientHUD", nullptr, nullptr, sizeof(StealthPlayerController_eventSetClientHUD_Parms), Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthPlayerController_SetClientHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthPlayerController_SetClientHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthPlayerController_NoRegister()
	{
		return AStealthPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AStealthPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI, "ClientTeamSelectUI" }, // 2208810851
		{ &Z_Construct_UFunction_AStealthPlayerController_RemoveHUD, "RemoveHUD" }, // 12625140
		{ &Z_Construct_UFunction_AStealthPlayerController_SetClientHUD, "SetClientHUD" }, // 2445038583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthPlayerController.h" },
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerController_Statics::NewProp_CurrentHUD_MetaData[] = {
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthPlayerController_Statics::NewProp_CurrentHUD = { "CurrentHUD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerController, CurrentHUD), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerController_Statics::NewProp_CurrentHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerController_Statics::NewProp_CurrentHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerController_Statics::NewProp_CurrentHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthPlayerController_Statics::ClassParams = {
		&AStealthPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthPlayerController, 1617763400);
	template<> STEALTH_API UClass* StaticClass<AStealthPlayerController>()
	{
		return AStealthPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthPlayerController(Z_Construct_UClass_AStealthPlayerController, &AStealthPlayerController::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
