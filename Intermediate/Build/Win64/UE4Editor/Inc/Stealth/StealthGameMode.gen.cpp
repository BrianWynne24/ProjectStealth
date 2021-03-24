// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthGameMode() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameMode_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStealthGameMode::execSpawnStealthPlayerPawn)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnStealthPlayerPawn(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	void AStealthGameMode::StaticRegisterNativesAStealthGameMode()
	{
		UClass* Class = AStealthGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnStealthPlayerPawn", &AStealthGameMode::execSpawnStealthPlayerPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics
	{
		struct StealthGameMode_eventSpawnStealthPlayerPawn_Parms
		{
			APlayerController* NewPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameMode_eventSpawnStealthPlayerPawn_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameMode, nullptr, "SpawnStealthPlayerPawn", nullptr, nullptr, sizeof(StealthGameMode_eventSpawnStealthPlayerPawn_Parms), Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthGameMode_NoRegister()
	{
		return AStealthGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStealthGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthGameMode_SpawnStealthPlayerPawn, "SpawnStealthPlayerPawn" }, // 2616532309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthGameMode.h" },
		{ "ModuleRelativePath", "StealthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameMode_Statics::ClassParams = {
		&AStealthGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthGameMode, 1684355751);
	template<> STEALTH_API UClass* StaticClass<AStealthGameMode>()
	{
		return AStealthGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthGameMode(Z_Construct_UClass_AStealthGameMode, &AStealthGameMode::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
