// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/StealthUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthUserWidget() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UStealthUserWidget_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UStealthUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStealthUserWidget::execArgusButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ArgusButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStealthUserWidget::execSpectatorButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpectatorButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStealthUserWidget::execSpyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpyButtonClicked();
		P_NATIVE_END;
	}
	void UStealthUserWidget::StaticRegisterNativesUStealthUserWidget()
	{
		UClass* Class = UStealthUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArgusButtonClicked", &UStealthUserWidget::execArgusButtonClicked },
			{ "SpectatorButtonClicked", &UStealthUserWidget::execSpectatorButtonClicked },
			{ "SpyButtonClicked", &UStealthUserWidget::execSpyButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStealthUserWidget, nullptr, "ArgusButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStealthUserWidget, nullptr, "SpectatorButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStealthUserWidget, nullptr, "SpyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStealthUserWidget_NoRegister()
	{
		return UStealthUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStealthUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectatorBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpyBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpyBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgusBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArgusBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStealthUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStealthUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStealthUserWidget_ArgusButtonClicked, "ArgusButtonClicked" }, // 2111641875
		{ &Z_Construct_UFunction_UStealthUserWidget_SpectatorButtonClicked, "SpectatorButtonClicked" }, // 1534893928
		{ &Z_Construct_UFunction_UStealthUserWidget_SpyButtonClicked, "SpyButtonClicked" }, // 3969808160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStealthUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StealthUserWidget.h" },
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpectatorBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpectatorBtn = { "SpectatorBtn", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStealthUserWidget, SpectatorBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpectatorBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpectatorBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpyBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpyBtn = { "SpyBtn", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStealthUserWidget, SpyBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpyBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpyBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_ArgusBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StealthUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_ArgusBtn = { "ArgusBtn", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStealthUserWidget, ArgusBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_ArgusBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_ArgusBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStealthUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpectatorBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_SpyBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthUserWidget_Statics::NewProp_ArgusBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStealthUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStealthUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStealthUserWidget_Statics::ClassParams = {
		&UStealthUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStealthUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStealthUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStealthUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStealthUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStealthUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStealthUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStealthUserWidget, 2336514821);
	template<> STEALTH_API UClass* StaticClass<UStealthUserWidget>()
	{
		return UStealthUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStealthUserWidget(Z_Construct_UClass_UStealthUserWidget, &UStealthUserWidget::StaticClass, TEXT("/Script/Stealth"), TEXT("UStealthUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStealthUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
