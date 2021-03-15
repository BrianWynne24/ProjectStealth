// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/Enumeration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumeration() {}
// Cross Module References
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	static UEnum* ETeam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_ETeam, Z_Construct_UPackage__Script_Stealth(), TEXT("ETeam"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeam(ETeam_StaticEnum, TEXT("/Script/Stealth"), TEXT("ETeam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_ETeam_Hash() { return 1392071072U; }
	UEnum* Z_Construct_UEnum_Stealth_ETeam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeam"), 0, Get_Z_Construct_UEnum_Stealth_ETeam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeam::TEAM_SPECTATOR", (int64)ETeam::TEAM_SPECTATOR },
				{ "ETeam::TEAM_SPY", (int64)ETeam::TEAM_SPY },
				{ "ETeam::TEAM_ARGUS", (int64)ETeam::TEAM_ARGUS },
				{ "ETeam::TEAM_RANDOM", (int64)ETeam::TEAM_RANDOM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Enumeration.h" },
				{ "TEAM_ARGUS.Name", "ETeam::TEAM_ARGUS" },
				{ "TEAM_RANDOM.Name", "ETeam::TEAM_RANDOM" },
				{ "TEAM_SPECTATOR.Name", "ETeam::TEAM_SPECTATOR" },
				{ "TEAM_SPY.Name", "ETeam::TEAM_SPY" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"ETeam",
				"ETeam",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
