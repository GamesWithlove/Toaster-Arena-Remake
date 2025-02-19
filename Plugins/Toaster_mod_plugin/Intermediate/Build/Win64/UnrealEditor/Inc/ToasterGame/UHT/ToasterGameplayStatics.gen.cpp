// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/ToasterGameplayStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterGameplayStatics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_UToasterGameplayStatics();
	TOASTERGAME_API UClass* Z_Construct_UClass_UToasterGameplayStatics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	DEFINE_FUNCTION(UToasterGameplayStatics::execFinishSpawningPooledActor)
	{
		P_GET_OBJECT(APooledActor,Z_Param_PooledActor);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UToasterGameplayStatics::FinishSpawningPooledActor(Z_Param_PooledActor,Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToasterGameplayStatics::execSpawnPooledActorDefer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bReclaimIfEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APooledActor**)Z_Param__Result=UToasterGameplayStatics::SpawnPooledActorDefer(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Transform,Z_Param_bReclaimIfEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToasterGameplayStatics::execSpawnPooledActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bReclaimIfEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APooledActor**)Z_Param__Result=UToasterGameplayStatics::SpawnPooledActor(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Transform,Z_Param_bReclaimIfEmpty);
		P_NATIVE_END;
	}
	void UToasterGameplayStatics::StaticRegisterNativesUToasterGameplayStatics()
	{
		UClass* Class = UToasterGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishSpawningPooledActor", &UToasterGameplayStatics::execFinishSpawningPooledActor },
			{ "SpawnPooledActor", &UToasterGameplayStatics::execSpawnPooledActor },
			{ "SpawnPooledActorDefer", &UToasterGameplayStatics::execSpawnPooledActorDefer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics
	{
		struct ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms
		{
			APooledActor* PooledActor;
			AActor* Owner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_PooledActor = { "PooledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms, PooledActor), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_PooledActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "FinishSpawningPooledActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms), Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics
	{
		struct ToasterGameplayStatics_eventSpawnPooledActor_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<APooledActor>  ActorClass;
			FTransform Transform;
			bool bReclaimIfEmpty;
			APooledActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
	{
		((ToasterGameplayStatics_eventSpawnPooledActor_Parms*)Obj)->bReclaimIfEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToasterGameplayStatics_eventSpawnPooledActor_Parms), &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "SpawnPooledActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::ToasterGameplayStatics_eventSpawnPooledActor_Parms), Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics
	{
		struct ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<APooledActor>  ActorClass;
			FTransform Transform;
			bool bReclaimIfEmpty;
			APooledActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
	{
		((ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms*)Obj)->bReclaimIfEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms), &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "SpawnPooledActorDefer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms), Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToasterGameplayStatics);
	UClass* Z_Construct_UClass_UToasterGameplayStatics_NoRegister()
	{
		return UToasterGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UToasterGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToasterGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToasterGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor, "FinishSpawningPooledActor" }, // 1453317153
		{ &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor, "SpawnPooledActor" }, // 3984444080
		{ &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer, "SpawnPooledActorDefer" }, // 160474808
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToasterGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToasterGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToasterGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToasterGameplayStatics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToasterGameplayStatics_Statics::ClassParams = {
		&UToasterGameplayStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToasterGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToasterGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToasterGameplayStatics()
	{
		if (!Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton, Z_Construct_UClass_UToasterGameplayStatics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<UToasterGameplayStatics>()
	{
		return UToasterGameplayStatics::StaticClass();
	}
	UToasterGameplayStatics::UToasterGameplayStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToasterGameplayStatics);
	UToasterGameplayStatics::~UToasterGameplayStatics() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToasterGameplayStatics, UToasterGameplayStatics::StaticClass, TEXT("UToasterGameplayStatics"), &Z_Registration_Info_UClass_UToasterGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToasterGameplayStatics), 3117692145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_3521428897(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
