// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthGameState() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameState_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
	STEALTH_API UClass* Z_Construct_UClass_APlayerSpawnPoint_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_EGameState();
// End Cross Module References
	DEFINE_FUNCTION(AStealthGameState::execGetPlayerSpawnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerSpawnPoint*>*)Z_Param__Result=P_THIS->GetPlayerSpawnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameState::execGetAvailableSpawnPoint)
	{
		P_GET_ENUM(ETeam,Z_Param_playerTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerSpawnPoint**)Z_Param__Result=P_THIS->GetAvailableSpawnPoint(ETeam(Z_Param_playerTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameState::execGetCharacterClass)
	{
		P_GET_ENUM(ETeam,Z_Param_playerTeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetCharacterClass(ETeam(Z_Param_playerTeam));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameState::execGetTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint32*)Z_Param__Result=P_THIS->GetTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthGameState::execGetCurrentGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameState*)Z_Param__Result=P_THIS->GetCurrentGameState();
		P_NATIVE_END;
	}
	void AStealthGameState::StaticRegisterNativesAStealthGameState()
	{
		UClass* Class = AStealthGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableSpawnPoint", &AStealthGameState::execGetAvailableSpawnPoint },
			{ "GetCharacterClass", &AStealthGameState::execGetCharacterClass },
			{ "GetCurrentGameState", &AStealthGameState::execGetCurrentGameState },
			{ "GetPlayerSpawnPoints", &AStealthGameState::execGetPlayerSpawnPoints },
			{ "GetTimeLeft", &AStealthGameState::execGetTimeLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics
	{
		struct StealthGameState_eventGetAvailableSpawnPoint_Parms
		{
			ETeam playerTeam;
			APlayerSpawnPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerTeam_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerTeam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetAvailableSpawnPoint_Parms, playerTeam), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetAvailableSpawnPoint_Parms, ReturnValue), Z_Construct_UClass_APlayerSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_playerTeam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_playerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameState, nullptr, "GetAvailableSpawnPoint", nullptr, nullptr, sizeof(StealthGameState_eventGetAvailableSpawnPoint_Parms), Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics
	{
		struct StealthGameState_eventGetCharacterClass_Parms
		{
			ETeam playerTeam;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerTeam_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerTeam;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetCharacterClass_Parms, playerTeam), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetCharacterClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_playerTeam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_playerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameState, nullptr, "GetCharacterClass", nullptr, nullptr, sizeof(StealthGameState_eventGetCharacterClass_Parms), Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameState_GetCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameState_GetCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics
	{
		struct StealthGameState_eventGetCurrentGameState_Parms
		{
			EGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetCurrentGameState_Parms, ReturnValue), Z_Construct_UEnum_Stealth_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameState, nullptr, "GetCurrentGameState", nullptr, nullptr, sizeof(StealthGameState_eventGetCurrentGameState_Parms), Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameState_GetCurrentGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameState_GetCurrentGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics
	{
		struct StealthGameState_eventGetPlayerSpawnPoints_Parms
		{
			TArray<APlayerSpawnPoint*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetPlayerSpawnPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameState, nullptr, "GetPlayerSpawnPoints", nullptr, nullptr, sizeof(StealthGameState_eventGetPlayerSpawnPoints_Parms), Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics
	{
		struct StealthGameState_eventGetTimeLeft_Parms
		{
			uint32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthGameState_eventGetTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthGameState, nullptr, "GetTimeLeft", nullptr, nullptr, sizeof(StealthGameState_eventGetTimeLeft_Parms), Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthGameState_GetTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthGameState_GetTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthGameState_NoRegister()
	{
		return AStealthGameState::StaticClass();
	}
	struct Z_Construct_UClass_AStealthGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerSpawnPoints;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TimeLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthGameState_GetAvailableSpawnPoint, "GetAvailableSpawnPoint" }, // 3792948507
		{ &Z_Construct_UFunction_AStealthGameState_GetCharacterClass, "GetCharacterClass" }, // 2838230371
		{ &Z_Construct_UFunction_AStealthGameState_GetCurrentGameState, "GetCurrentGameState" }, // 1992659051
		{ &Z_Construct_UFunction_AStealthGameState_GetPlayerSpawnPoints, "GetPlayerSpawnPoints" }, // 1290389369
		{ &Z_Construct_UFunction_AStealthGameState_GetTimeLeft, "GetTimeLeft" }, // 519794230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthGameState.h" },
		{ "ModuleRelativePath", "StealthGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints_Inner = { "PlayerSpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerSpawnPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints_MetaData[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints = { "PlayerSpawnPoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameState, PlayerSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameState, GameState), Z_Construct_UEnum_Stealth_EGameState, METADATA_PARAMS(Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthGameState_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "StealthGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AStealthGameState_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthGameState, TimeLeft), METADATA_PARAMS(Z_Construct_UClass_AStealthGameState_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameState_Statics::NewProp_TimeLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameState_Statics::NewProp_PlayerSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameState_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthGameState_Statics::NewProp_TimeLeft,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthGameState_Statics::ClassParams = {
		&AStealthGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStealthGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthGameState, 3873528849);
	template<> STEALTH_API UClass* StaticClass<AStealthGameState>()
	{
		return AStealthGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthGameState(Z_Construct_UClass_AStealthGameState, &AStealthGameState::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
