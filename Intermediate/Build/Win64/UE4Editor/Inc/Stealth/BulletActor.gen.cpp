// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stealth/BulletActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletActor() {}
// Cross Module References
	STEALTH_API UClass* Z_Construct_UClass_ABulletActor_NoRegister();
	STEALTH_API UClass* Z_Construct_UClass_ABulletActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Stealth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABulletActor::execSetEndLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_endLoc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndLocation(Z_Param_endLoc);
		P_NATIVE_END;
	}
	void ABulletActor::StaticRegisterNativesABulletActor()
	{
		UClass* Class = ABulletActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEndLocation", &ABulletActor::execSetEndLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics
	{
		struct BulletActor_eventSetEndLocation_Parms
		{
			FVector endLoc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::NewProp_endLoc = { "endLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BulletActor_eventSetEndLocation_Parms, endLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::NewProp_endLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABulletActor, nullptr, "SetEndLocation", nullptr, nullptr, sizeof(BulletActor_eventSetEndLocation_Parms), Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABulletActor_SetEndLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABulletActor_SetEndLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABulletActor_NoRegister()
	{
		return ABulletActor::StaticClass();
	}
	struct Z_Construct_UClass_ABulletActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HomningComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HomningComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Stealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABulletActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABulletActor_SetEndLocation, "SetEndLocation" }, // 1196818350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BulletActor.h" },
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEffect_MetaData[] = {
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEffect = { "BulletEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, BulletEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEmitter_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEmitter = { "BulletEmitter", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, BulletEmitter), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_LifeTime_MetaData[] = {
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, LifeTime), METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_LifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	void Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((ABulletActor*)Obj)->bIsAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABulletActor), &Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, MovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_hitLocation_MetaData[] = {
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_hitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_hitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_HomningComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BulletActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_HomningComponent = { "HomningComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABulletActor, HomningComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::NewProp_HomningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_HomningComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_BulletEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_bIsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_HomningComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABulletActor_Statics::ClassParams = {
		&ABulletActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABulletActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABulletActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABulletActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABulletActor, 2137503098);
	template<> STEALTH_API UClass* StaticClass<ABulletActor>()
	{
		return ABulletActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABulletActor(Z_Construct_UClass_ABulletActor, &ABulletActor::StaticClass, TEXT("/Script/Stealth"), TEXT("ABulletActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
