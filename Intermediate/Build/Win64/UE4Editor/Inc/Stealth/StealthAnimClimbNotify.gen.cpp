// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/AnimStates/StealthAnimClimbNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthAnimClimbNotify() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UStealthAnimClimbNotify_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UStealthAnimClimbNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	void UStealthAnimClimbNotify::StaticRegisterNativesUStealthAnimClimbNotify()
	{
	}
	UClass* Z_Construct_UClass_UStealthAnimClimbNotify_NoRegister()
	{
		return UStealthAnimClimbNotify::StaticClass();
	}
	struct Z_Construct_UClass_UStealthAnimClimbNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStealthAnimClimbNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStealthAnimClimbNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimStates/StealthAnimClimbNotify.h" },
		{ "ModuleRelativePath", "AnimStates/StealthAnimClimbNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStealthAnimClimbNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStealthAnimClimbNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStealthAnimClimbNotify_Statics::ClassParams = {
		&UStealthAnimClimbNotify::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStealthAnimClimbNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStealthAnimClimbNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStealthAnimClimbNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStealthAnimClimbNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStealthAnimClimbNotify, 1582365718);
	template<> STEALTH_API UClass* StaticClass<UStealthAnimClimbNotify>()
	{
		return UStealthAnimClimbNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStealthAnimClimbNotify(Z_Construct_UClass_UStealthAnimClimbNotify, &UStealthAnimClimbNotify::StaticClass, TEXT("/Script/Stealth"), TEXT("UStealthAnimClimbNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStealthAnimClimbNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
