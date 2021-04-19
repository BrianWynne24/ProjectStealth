// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/Gadgets/GadgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGadgetBase() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_UGadgetBase_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_UGadgetBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Stealth();
// End Cross Module References
	DEFINE_FUNCTION(UGadgetBase::execGetQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGadgetBase::execCanUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGadgetBase::execCanShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGadgetBase::execGetGadgetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGadgetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGadgetBase::execOnUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGadgetBase::execOnShoot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShoot(Z_Param_velForce);
		P_NATIVE_END;
	}
	void UGadgetBase::StaticRegisterNativesUGadgetBase()
	{
		UClass* Class = UGadgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanShoot", &UGadgetBase::execCanShoot },
			{ "CanUse", &UGadgetBase::execCanUse },
			{ "GetGadgetName", &UGadgetBase::execGetGadgetName },
			{ "GetQuantity", &UGadgetBase::execGetQuantity },
			{ "OnShoot", &UGadgetBase::execOnShoot },
			{ "OnUse", &UGadgetBase::execOnUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGadgetBase_CanShoot_Statics
	{
		struct GadgetBase_eventCanShoot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GadgetBase_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GadgetBase_eventCanShoot_Parms), &Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "CanShoot", nullptr, nullptr, sizeof(GadgetBase_eventCanShoot_Parms), Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_CanShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_CanShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGadgetBase_CanUse_Statics
	{
		struct GadgetBase_eventCanUse_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGadgetBase_CanUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GadgetBase_eventCanUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGadgetBase_CanUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GadgetBase_eventCanUse_Parms), &Z_Construct_UFunction_UGadgetBase_CanUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGadgetBase_CanUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGadgetBase_CanUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_CanUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_CanUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "CanUse", nullptr, nullptr, sizeof(GadgetBase_eventCanUse_Parms), Z_Construct_UFunction_UGadgetBase_CanUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_CanUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_CanUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_CanUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_CanUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_CanUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics
	{
		struct GadgetBase_eventGetGadgetName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GadgetBase_eventGetGadgetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "GetGadgetName", nullptr, nullptr, sizeof(GadgetBase_eventGetGadgetName_Parms), Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_GetGadgetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_GetGadgetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics
	{
		struct GadgetBase_eventGetQuantity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GadgetBase_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "GetQuantity", nullptr, nullptr, sizeof(GadgetBase_eventGetQuantity_Parms), Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGadgetBase_OnShoot_Statics
	{
		struct GadgetBase_eventOnShoot_Parms
		{
			float velForce;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::NewProp_velForce = { "velForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GadgetBase_eventOnShoot_Parms, velForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::NewProp_velForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "OnShoot", nullptr, nullptr, sizeof(GadgetBase_eventOnShoot_Parms), Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_OnShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_OnShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGadgetBase_OnUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGadgetBase_OnUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGadgetBase_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGadgetBase, nullptr, "OnUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGadgetBase_OnUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGadgetBase_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGadgetBase_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGadgetBase_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGadgetBase_NoRegister()
	{
		return UGadgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UGadgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanUse_MetaData[];
#endif
		static void NewProp_bCanUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGadgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGadgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGadgetBase_CanShoot, "CanShoot" }, // 228155802
		{ &Z_Construct_UFunction_UGadgetBase_CanUse, "CanUse" }, // 2358506599
		{ &Z_Construct_UFunction_UGadgetBase_GetGadgetName, "GetGadgetName" }, // 1460096974
		{ &Z_Construct_UFunction_UGadgetBase_GetQuantity, "GetQuantity" }, // 2161222691
		{ &Z_Construct_UFunction_UGadgetBase_OnShoot, "OnShoot" }, // 3125175840
		{ &Z_Construct_UFunction_UGadgetBase_OnUse, "OnUse" }, // 1220295470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gadgets/GadgetBase.h" },
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetBase_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGadgetBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGadgetBase, Name), METADATA_PARAMS(Z_Construct_UClass_UGadgetBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse_MetaData[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse_SetBit(void* Obj)
	{
		((UGadgetBase*)Obj)->bCanUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse = { "bCanUse", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGadgetBase), &Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((UGadgetBase*)Obj)->bCanShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGadgetBase), &Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGadgetBase_Statics::NewProp_Quantity_MetaData[] = {
		{ "ModuleRelativePath", "Gadgets/GadgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGadgetBase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGadgetBase, Quantity), nullptr, METADATA_PARAMS(Z_Construct_UClass_UGadgetBase_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGadgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGadgetBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGadgetBase_Statics::NewProp_bCanShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGadgetBase_Statics::NewProp_Quantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGadgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGadgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGadgetBase_Statics::ClassParams = {
		&UGadgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGadgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGadgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGadgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGadgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGadgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGadgetBase, 191766690);
	template<> STEALTH_API UClass* StaticClass<UGadgetBase>()
	{
		return UGadgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGadgetBase(Z_Construct_UClass_UGadgetBase, &UGadgetBase::StaticClass, TEXT("/Script/Stealth"), TEXT("UGadgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGadgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
