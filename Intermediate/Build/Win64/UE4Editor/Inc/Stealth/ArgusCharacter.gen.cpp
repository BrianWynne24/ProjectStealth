// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/ArgusCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArgusCharacter() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AArgusCharacter_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AArgusCharacter();
	STEALTH_API UClass* Z_Construct_UClass_AStealthCharacter();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void AArgusCharacter::StaticRegisterNativesAArgusCharacter()
	{
	}
	UClass* Z_Construct_UClass_AArgusCharacter_NoRegister()
	{
		return AArgusCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArgusCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArgusCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStealthCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArgusCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArgusCharacter.h" },
		{ "ModuleRelativePath", "ArgusCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArgusCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArgusCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArgusCharacter_Statics::ClassParams = {
		&AArgusCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AArgusCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArgusCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArgusCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArgusCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArgusCharacter, 3056343321);
	template<> STEALTH_API UClass* StaticClass<AArgusCharacter>()
	{
		return AArgusCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArgusCharacter(Z_Construct_UClass_AArgusCharacter, &AArgusCharacter::StaticClass, TEXT("/Script/Stealth"), TEXT("AArgusCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArgusCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
