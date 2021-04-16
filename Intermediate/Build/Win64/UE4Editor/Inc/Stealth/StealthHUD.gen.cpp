// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthHUD() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_AStealthHUD_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_AStealthHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	DEFINE_FUNCTION(AStealthHUD::execGetScreenHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScreenHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStealthHUD::execGetScreenWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScreenWidth();
		P_NATIVE_END;
	}
	void AStealthHUD::StaticRegisterNativesAStealthHUD()
	{
		UClass* Class = AStealthHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScreenHeight", &AStealthHUD::execGetScreenHeight },
			{ "GetScreenWidth", &AStealthHUD::execGetScreenWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics
	{
		struct StealthHUD_eventGetScreenHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthHUD_eventGetScreenHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthHUD, nullptr, "GetScreenHeight", nullptr, nullptr, sizeof(StealthHUD_eventGetScreenHeight_Parms), Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthHUD_GetScreenHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthHUD_GetScreenHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics
	{
		struct StealthHUD_eventGetScreenWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StealthHUD_eventGetScreenWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStealthHUD, nullptr, "GetScreenWidth", nullptr, nullptr, sizeof(StealthHUD_eventGetScreenWidth_Parms), Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStealthHUD_GetScreenWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStealthHUD_GetScreenWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStealthHUD_NoRegister()
	{
		return AStealthHUD::StaticClass();
	}
	struct Z_Construct_UClass_AStealthHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStealthHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStealthHUD_GetScreenHeight, "GetScreenHeight" }, // 3452299068
		{ &Z_Construct_UFunction_AStealthHUD_GetScreenWidth, "GetScreenWidth" }, // 654132685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "StealthHUD.h" },
		{ "ModuleRelativePath", "StealthHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "StealthHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthHUD, SizeX), METADATA_PARAMS(Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "StealthHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStealthHUD, SizeY), METADATA_PARAMS(Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStealthHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStealthHUD_Statics::NewProp_SizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthHUD_Statics::ClassParams = {
		&AStealthHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStealthHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStealthHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStealthHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthHUD, 5984669);
	template<> STEALTH_API UClass* StaticClass<AStealthHUD>()
	{
		return AStealthHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthHUD(Z_Construct_UClass_AStealthHUD, &AStealthHUD::StaticClass, TEXT("/Script/Stealth"), TEXT("AStealthHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
