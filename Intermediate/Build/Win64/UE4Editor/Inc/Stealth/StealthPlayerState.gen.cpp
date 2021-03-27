// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthPlayerState() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthPlayerState_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStealthPlayerState::execGetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthPlayerState::execSetTeam)
	{
		P_GET_ENUM(ETeam,Z_Param_playerTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeam_Implementation(ETeam(Z_Param_playerTeam));
		P_NATIVE_END;
	}
	static FName NAME_AStealthPlayerState_SetTeam = FName(TEXT("SetTeam"));
	void AStealthPlayerState::SetTeam(ETeam playerTeam)
	{
		StealthPlayerState_eventSetTeam_Parms Parms;
		Parms.playerTeam=playerTeam;
		ProcessEvent(FindFunctionChecked(NAME_AStealthPlayerState_SetTeam),&Parms);
	}
	void AStealthPlayerState::StaticRegisterNativesAStealthPlayerState()
	{
		UClass* Class = AStealthPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTeam", &AStealthPlayerState::execGetTeam },
			{ "SetTeam", &AStealthPlayerState::execSetTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics
	{
		struct StealthPlayerState_eventGetTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthPlayerState_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthPlayerState, nullptr, "GetTeam", nullptr, nullptr, sizeof(StealthPlayerState_eventGetTeam_Parms), Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthPlayerState_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthPlayerState_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerTeam_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerTeam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthPlayerState_eventSetTeam_Parms, playerTeam), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::NewProp_playerTeam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::NewProp_playerTeam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthPlayerState, nullptr, "SetTeam", nullptr, nullptr, sizeof(StealthPlayerState_eventSetTeam_Parms), Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthPlayerState_SetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthPlayerState_SetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthPlayerState_NoRegister()
	{
		return AStealthPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AStealthPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Deaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTeamSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetTeamSelect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthPlayerState_GetTeam, "GetTeam" }, // 1614610490
		{ &Z_Construct_UFunction_AStealthPlayerState_SetTeam, "SetTeam" }, // 1268923621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthPlayerState.h" },
		{ "ModuleRelativePath", "StealthPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ETeam" },
		{ "Category", "Team" },
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000021, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerState, Team), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Lives_MetaData[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerState, Lives), METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Deaths_MetaData[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Deaths = { "Deaths", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerState, Deaths), METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Deaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Deaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Kills_MetaData[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Kills = { "Kills", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerState, Kills), METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Kills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_WidgetTeamSelect_MetaData[] = {
		{ "ModuleRelativePath", "StealthPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_WidgetTeamSelect = { "WidgetTeamSelect", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthPlayerState, WidgetTeamSelect), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_WidgetTeamSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_WidgetTeamSelect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Lives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Deaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthPlayerState_Statics::NewProp_WidgetTeamSelect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthPlayerState_Statics::ClassParams = {
		&AStealthPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthPlayerState, 4060915338);
	template<> STEALTH_API UClass* StaticClass<AStealthPlayerState>()
	{
		return AStealthPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthPlayerState(Z_Construct_UClass_AStealthPlayerState, &AStealthPlayerState::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthPlayerState"), false, nullptr, nullptr, nullptr);

	void AStealthPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Team(TEXT("Team"));
		static const FName Name_Lives(TEXT("Lives"));
		static const FName Name_Deaths(TEXT("Deaths"));
		static const FName Name_Kills(TEXT("Kills"));

		const bool bIsValid = true
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName()
			&& Name_Lives == ClassReps[(int32)ENetFields_Private::Lives].Property->GetFName()
			&& Name_Deaths == ClassReps[(int32)ENetFields_Private::Deaths].Property->GetFName()
			&& Name_Kills == ClassReps[(int32)ENetFields_Private::Kills].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AStealthPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
