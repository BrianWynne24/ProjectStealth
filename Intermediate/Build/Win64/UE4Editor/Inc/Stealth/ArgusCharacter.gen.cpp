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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AArgusCharacter::execReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArgusCharacter::execServerEquipWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_weaponClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipWeapon_Implementation(Z_Param_weaponClass);
		P_NATIVE_END;
	}
	static FName NAME_AArgusCharacter_ServerEquipWeapon = FName(TEXT("ServerEquipWeapon"));
	void AArgusCharacter::ServerEquipWeapon(UClass* weaponClass)
	{
		ArgusCharacter_eventServerEquipWeapon_Parms Parms;
		Parms.weaponClass=weaponClass;
		ProcessEvent(FindFunctionChecked(NAME_AArgusCharacter_ServerEquipWeapon),&Parms);
	}
	void AArgusCharacter::StaticRegisterNativesAArgusCharacter()
	{
		UClass* Class = AArgusCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReloadWeapon", &AArgusCharacter::execReloadWeapon },
			{ "ServerEquipWeapon", &AArgusCharacter::execServerEquipWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArgusCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArgusCharacter, nullptr, "ReloadWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArgusCharacter_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArgusCharacter_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::NewProp_weaponClass = { "weaponClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArgusCharacter_eventServerEquipWeapon_Parms, weaponClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::NewProp_weaponClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArgusCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArgusCharacter, nullptr, "ServerEquipWeapon", nullptr, nullptr, sizeof(ArgusCharacter_eventServerEquipWeapon_Parms), Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArgusCharacter_NoRegister()
	{
		return AArgusCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArgusCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AArgusCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArgusCharacter_ReloadWeapon, "ReloadWeapon" }, // 1067027677
		{ &Z_Construct_UFunction_AArgusCharacter_ServerEquipWeapon, "ServerEquipWeapon" }, // 3301431893
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AArgusCharacter, 1170177896);
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
