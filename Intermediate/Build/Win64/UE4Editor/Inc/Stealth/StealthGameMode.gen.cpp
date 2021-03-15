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
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
	STEALTH_API UClass* Z_Construct_UClass_APlayerSpawnPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStealthGameMode::execGetTeamCharacterClass)
	{
		P_GET_ENUM(ETeam,Z_Param_team);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetTeamCharacterClass(ETeam(Z_Param_team));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameMode::execGetSpawnPoint)
	{
		P_GET_ENUM(ETeam,Z_Param_team);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerSpawnPoint**)Z_Param__Result=P_THIS->GetSpawnPoint(ETeam(Z_Param_team));
		P_NATIVE_END;
	}
	void AStealthGameMode::StaticRegisterNativesAStealthGameMode()
	{
		UClass* Class = AStealthGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnPoint", &AStealthGameMode::execGetSpawnPoint },
			{ "GetTeamCharacterClass", &AStealthGameMode::execGetTeamCharacterClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics
	{
		struct StealthGameMode_eventGetSpawnPoint_Parms
		{
			ETeam team;
			APlayerSpawnPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_team_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_team;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_team = { "team", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameMode_eventGetSpawnPoint_Parms, team), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameMode_eventGetSpawnPoint_Parms, ReturnValue), Z_Construct_UClass_APlayerSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameMode, nullptr, "GetSpawnPoint", nullptr, nullptr, sizeof(StealthGameMode_eventGetSpawnPoint_Parms), Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics
	{
		struct StealthGameMode_eventGetTeamCharacterClass_Parms
		{
			ETeam team;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_team_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_team;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_team = { "team", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameMode_eventGetTeamCharacterClass_Parms, team), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameMode_eventGetTeamCharacterClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameMode, nullptr, "GetTeamCharacterClass", nullptr, nullptr, sizeof(StealthGameMode_eventGetTeamCharacterClass_Parms), Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamSelectionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TeamSelectionWidget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthGameMode_GetSpawnPoint, "GetSpawnPoint" }, // 2017602993
		{ &Z_Construct_UFunction_AStealthGameMode_GetTeamCharacterClass, "GetTeamCharacterClass" }, // 2404409566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthGameMode.h" },
		{ "ModuleRelativePath", "StealthGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameMode_Statics::NewProp_TeamSelectionWidget_MetaData[] = {
		{ "Comment", "/* Variables */" },
		{ "ModuleRelativePath", "StealthGameMode.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStealthGameMode_Statics::NewProp_TeamSelectionWidget = { "TeamSelectionWidget", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameMode, TeamSelectionWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStealthGameMode_Statics::NewProp_TeamSelectionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameMode_Statics::NewProp_TeamSelectionWidget_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "ModuleRelativePath", "StealthGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameMode, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameMode_Statics::NewProp_TeamSelectionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameMode_Statics::NewProp_SpawnPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameMode_Statics::ClassParams = {
		&AStealthGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AStealthGameMode, 3100094437);
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
