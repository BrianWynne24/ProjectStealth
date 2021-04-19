// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/Gadgets/GadgetFrag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGadgetFrag() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UGadgetFrag_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UGadgetFrag();
	STEALTH_API UClass* Z_Construct_UClass_UGadgetBase();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UGadgetFrag::StaticRegisterNativesUGadgetFrag()
	{
	}
	UClass* Z_Construct_UClass_UGadgetFrag_NoRegister()
	{
		return UGadgetFrag::StaticClass();
	}
	struct Z_Construct_UClass_UGadgetFrag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGadgetFrag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGadgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetFrag_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gadgets/GadgetFrag.h" },
		{ "ModuleRelativePath", "Gadgets/GadgetFrag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGadgetFrag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGadgetFrag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGadgetFrag_Statics::ClassParams = {
		&UGadgetFrag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGadgetFrag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetFrag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGadgetFrag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGadgetFrag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGadgetFrag, 52308393);
	template<> STEALTH_API UClass* StaticClass<UGadgetFrag>()
	{
		return UGadgetFrag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGadgetFrag(Z_Construct_UClass_UGadgetFrag, &UGadgetFrag::StaticClass, TEXT("/Script/Stealth"), TEXT("UGadgetFrag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGadgetFrag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
