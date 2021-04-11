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
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_EWeaponMode();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_EGameState();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_EGameType();
	STEALTH_API UEnum* Z_Construct_UEnum_Stealth_ETeam();
// End Cross Module References
	static UEnum* EWeaponMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_EWeaponMode, Z_Construct_UPackage__Script_Stealth(), TEXT("EWeaponMode"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<EWeaponMode>()
	{
		return EWeaponMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponMode(EWeaponMode_StaticEnum, TEXT("/Script/Stealth"), TEXT("EWeaponMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_EWeaponMode_Hash() { return 1641974240U; }
	UEnum* Z_Construct_UEnum_Stealth_EWeaponMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponMode"), 0, Get_Z_Construct_UEnum_Stealth_EWeaponMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponMode::SINGLE", (int64)EWeaponMode::SINGLE },
				{ "EWeaponMode::AUTOMATIC", (int64)EWeaponMode::AUTOMATIC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AUTOMATIC.Name", "EWeaponMode::AUTOMATIC" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Enumeration.h" },
				{ "SINGLE.Name", "EWeaponMode::SINGLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"EWeaponMode",
				"EWeaponMode",
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
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_EGameState, Z_Construct_UPackage__Script_Stealth(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/Stealth"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_EGameState_Hash() { return 1211205119U; }
	UEnum* Z_Construct_UEnum_Stealth_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_Stealth_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::LOBBY", (int64)EGameState::LOBBY },
				{ "EGameState::PRE_GAME", (int64)EGameState::PRE_GAME },
				{ "EGameState::ACTIVE", (int64)EGameState::ACTIVE },
				{ "EGameState::POST_GAME", (int64)EGameState::POST_GAME },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACTIVE.Name", "EGameState::ACTIVE" },
				{ "BlueprintType", "true" },
				{ "LOBBY.Name", "EGameState::LOBBY" },
				{ "ModuleRelativePath", "Enumeration.h" },
				{ "POST_GAME.Name", "EGameState::POST_GAME" },
				{ "PRE_GAME.Name", "EGameState::PRE_GAME" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"EGameState",
				"EGameState",
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
	static UEnum* EGameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Stealth_EGameType, Z_Construct_UPackage__Script_Stealth(), TEXT("EGameType"));
		}
		return Singleton;
	}
	template<> STEALTH_API UEnum* StaticEnum<EGameType>()
	{
		return EGameType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameType(EGameType_StaticEnum, TEXT("/Script/Stealth"), TEXT("EGameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Stealth_EGameType_Hash() { return 3414441940U; }
	UEnum* Z_Construct_UEnum_Stealth_EGameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Stealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameType"), 0, Get_Z_Construct_UEnum_Stealth_EGameType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameType::DEATHMATCH", (int64)EGameType::DEATHMATCH },
				{ "EGameType::EXTRACTION", (int64)EGameType::EXTRACTION },
				{ "EGameType::INFILTRATE", (int64)EGameType::INFILTRATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEATHMATCH.Name", "EGameType::DEATHMATCH" },
				{ "EXTRACTION.Name", "EGameType::EXTRACTION" },
				{ "INFILTRATE.Name", "EGameType::INFILTRATE" },
				{ "ModuleRelativePath", "Enumeration.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Stealth,
				nullptr,
				"EGameType",
				"EGameType",
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
	uint32 Get_Z_Construct_UEnum_Stealth_ETeam_Hash() { return 1752787549U; }
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
				{ "ETeam::UNASSIGNED", (int64)ETeam::UNASSIGNED },
				{ "ETeam::RANDOM", (int64)ETeam::RANDOM },
				{ "ETeam::SPECTATOR", (int64)ETeam::SPECTATOR },
				{ "ETeam::SPY", (int64)ETeam::SPY },
				{ "ETeam::ARGUS", (int64)ETeam::ARGUS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ARGUS.Name", "ETeam::ARGUS" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Enumeration.h" },
				{ "RANDOM.Name", "ETeam::RANDOM" },
				{ "SPECTATOR.Name", "ETeam::SPECTATOR" },
				{ "SPY.Name", "ETeam::SPY" },
				{ "UNASSIGNED.Name", "ETeam::UNASSIGNED" },
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
