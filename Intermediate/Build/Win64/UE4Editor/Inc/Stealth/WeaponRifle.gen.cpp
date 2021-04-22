// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/WeaponRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponRifle() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AWeaponRifle_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AWeaponRifle();
	STEALTH_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AWeaponRifle::StaticRegisterNativesAWeaponRifle()
	{
	}
	UClass* Z_Construct_UClass_AWeaponRifle_NoRegister()
	{
		return AWeaponRifle::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponRifle.h" },
		{ "ModuleRelativePath", "WeaponRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponRifle_Statics::ClassParams = {
		&AWeaponRifle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponRifle, 1302900507);
	template<> STEALTH_API UClass* StaticClass<AWeaponRifle>()
	{
		return AWeaponRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponRifle(Z_Construct_UClass_AWeaponRifle, &AWeaponRifle::StaticClass, TEXT("/Script/Stealth"), TEXT("AWeaponRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
