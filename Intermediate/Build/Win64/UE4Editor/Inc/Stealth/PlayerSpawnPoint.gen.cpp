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
	void APlayerSpawnPoint::StaticRegisterNativesAPlayerSpawnPoint()
	{
	}
	UClass* Z_Construct_UClass_APlayerSpawnPoint_NoRegister()
	{
		return APlayerSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_APlayerSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSpawnPoint, Team), Z_Construct_UEnum_Stealth_ETeam, METADATA_PARAMS(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData[] = {
		{ "ModuleRelativePath", "PlayerSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed = { "LastUsed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSpawnPoint, LastUsed), METADATA_PARAMS(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSpawnPoint_Statics::NewProp_LastUsed_MetaData)) };
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
		nullptr,
		Z_Construct_UClass_APlayerSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(APlayerSpawnPoint, 168889803);
	template<> STEALTH_API UClass* StaticClass<APlayerSpawnPoint>()
	{
		return APlayerSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerSpawnPoint(Z_Construct_UClass_APlayerSpawnPoint, &APlayerSpawnPoint::StaticClass, TEXT("/Script/Stealth"), TEXT("APlayerSpawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
