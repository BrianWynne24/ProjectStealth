// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/SpyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpyCharacter() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_ASpyCharacter_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_ASpyCharacter();
	STEALTH_API UClass* Z_Construct_UClass_AStealthCharacter();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void ASpyCharacter::StaticRegisterNativesASpyCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASpyCharacter_NoRegister()
	{
		return ASpyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASpyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStealthCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpyCharacter.h" },
		{ "ModuleRelativePath", "SpyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpyCharacter_Statics::ClassParams = {
		&ASpyCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpyCharacter, 3768327336);
	template<> STEALTH_API UClass* StaticClass<ASpyCharacter>()
	{
		return ASpyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpyCharacter(Z_Construct_UClass_ASpyCharacter, &ASpyCharacter::StaticClass, TEXT("/Script/Stealth"), TEXT("ASpyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
