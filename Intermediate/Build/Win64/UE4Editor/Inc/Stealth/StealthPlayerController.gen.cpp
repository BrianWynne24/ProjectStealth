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
// End Cross Module References
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
	void AStealthPlayerController::StaticRegisterNativesAStealthPlayerController()
	{
		UClass* Class = AStealthPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientTeamSelectUI", &AStealthPlayerController::execClientTeamSelectUI },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthPlayerController_ClientTeamSelectUI, "ClientTeamSelectUI" }, // 2208810851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthPlayerController.h" },
		{ "ModuleRelativePath", "StealthPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthPlayerController_Statics::ClassParams = {
		&AStealthPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	IMPLEMENT_CLASS(AStealthPlayerController, 1137325567);
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
