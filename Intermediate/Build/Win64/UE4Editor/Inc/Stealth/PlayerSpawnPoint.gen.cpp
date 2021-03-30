// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/PlayerSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSpawnPoint() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_APlayerSpawnPoint_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_APlayerSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
// End Cross Module References
	DEFINE_FUNCTION(APlayerSpawnPoint::execStartCooldown)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCooldown(Z_Param_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerSpawnPoint::execCanUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerSpawnPoint::execGetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetTeam();
		P_NATIVE_END;
	}
	void APlayerSpawnPoint::StaticRegisterNativesAPlayerSpawnPoint()
	{
		UClass* Class = APlayerSpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUse", &APlayerSpawnPoint::execCanUse },
			{ "GetTeam", &APlayerSpawnPoint::execGetTeam },
			{ "StartCooldown", &APlayerSpawnPoint::execStartCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics
	{
		struct PlayerSpawnPoint_eventCanUse_Parms
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
	void Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerSpawnPoint_eventCanUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerSpawnPoint_eventCanUse_Parms), &Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerSpawnPoint, nullptr, "CanUse", nullptr, nullptr, sizeof(PlayerSpawnPoint_eventCanUse_Parms), Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerSpawnPoint_CanUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerSpawnPoint_CanUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics
	{
		struct PlayerSpawnPoint_eventGetTeam_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerSpawnPoint_eventGetTeam_Parms, ReturnValue), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerSpawnPoint, nullptr, "GetTeam", nullptr, nullptr, sizeof(PlayerSpawnPoint_eventGetTeam_Parms), Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerSpawnPoint_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerSpawnPoint_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics
	{
		struct PlayerSpawnPoint_eventStartCooldown_Parms
		{
			uint32 length;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerSpawnPoint_eventStartCooldown_Parms, length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::NewProp_length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerSpawnPoint, nullptr, "StartCooldown", nullptr, nullptr, sizeof(PlayerSpawnPoint_eventStartCooldown_Parms), Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerSpawnPoint_NoRegister()
	{
		return APlayerSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_APlayerSpawnPoint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerSpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerSpawnPoint_CanUse, "CanUse" }, // 599119122
		{ &Z_Construct_UFunction_APlayerSpawnPoint_GetTeam, "GetTeam" }, // 68016994
		{ &Z_Construct_UFunction_APlayerSpawnPoint_StartCooldown, "StartCooldown" }, // 1962238163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerSpawnPoint.h" },
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "ETeam" },
		{ "Category", "Team" },
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000021, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSpawnPoint, Team), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData[] = {
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed = { "LastUsed", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSpawnPoint, LastUsed), METADATA_PARAMS(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerSpawnPoint_Statics::ClassParams = {
		&APlayerSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerSpawnPoint, 3091676622);
	template<> STEALTH_API UClass* StaticClass<APlayerSpawnPoint>()
	{
		return APlayerSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerSpawnPoint(Z_Construct_UClass_APlayerSpawnPoint, &APlayerSpawnPoint::StaticClass, TEXT("/Script/Stealth"), TEXT("APlayerSpawnPoint"), false, nullptr, nullptr, nullptr);

	void APlayerSpawnPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Team(TEXT("Team"));
		static const FName Name_LastUsed(TEXT("LastUsed"));

		const bool bIsValid = true
			&& Name_Team == ClassReps[(int32)ENetFields_Private::Team].Property->GetFName()
			&& Name_LastUsed == ClassReps[(int32)ENetFields_Private::LastUsed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerSpawnPoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
