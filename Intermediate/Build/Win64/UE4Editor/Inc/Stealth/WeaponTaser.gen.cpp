// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/WeaponTaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTaser() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AWeaponTaser_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AWeaponTaser();
	STEALTH_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AWeaponTaser::StaticRegisterNativesAWeaponTaser()
	{
	}
	UClass* Z_Construct_UClass_AWeaponTaser_NoRegister()
	{
		return AWeaponTaser::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponTaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponTaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponTaser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponTaser.h" },
		{ "ModuleRelativePath", "WeaponTaser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponTaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponTaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponTaser_Statics::ClassParams = {
		&AWeaponTaser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponTaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponTaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponTaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponTaser, 1355706544);
	template<> STEALTH_API UClass* StaticClass<AWeaponTaser>()
	{
		return AWeaponTaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponTaser(Z_Construct_UClass_AWeaponTaser, &AWeaponTaser::StaticClass, TEXT("/Script/Stealth"), TEXT("AWeaponTaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponTaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
