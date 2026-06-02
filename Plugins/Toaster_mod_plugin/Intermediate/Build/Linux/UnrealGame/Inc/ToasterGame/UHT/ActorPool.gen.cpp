// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/ActorPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor();
	TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool();
	TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	DEFINE_FUNCTION(APooledActor::execIsPooled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPooled();
		P_NATIVE_END;
	}
	static FName NAME_APooledActor_OnCreatedFromPool = FName(TEXT("OnCreatedFromPool"));
	void APooledActor::OnCreatedFromPool()
	{
		ProcessEvent(FindFunctionChecked(NAME_APooledActor_OnCreatedFromPool),NULL);
	}
	static FName NAME_APooledActor_OnReturnToPool = FName(TEXT("OnReturnToPool"));
	void APooledActor::OnReturnToPool()
	{
		ProcessEvent(FindFunctionChecked(NAME_APooledActor_OnReturnToPool),NULL);
	}
	void APooledActor::StaticRegisterNativesAPooledActor()
	{
		UClass* Class = APooledActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPooled", &APooledActor::execIsPooled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APooledActor_IsPooled_Statics
	{
		struct PooledActor_eventIsPooled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PooledActor_eventIsPooled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PooledActor_eventIsPooled_Parms), &Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APooledActor_IsPooled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_IsPooled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "IsPooled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PooledActor_eventIsPooled_Parms), Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APooledActor_IsPooled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsPooled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APooledActor_IsPooled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_IsPooled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "OnCreatedFromPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APooledActor_OnCreatedFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "OnReturnToPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APooledActor_OnReturnToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APooledActor);
	UClass* Z_Construct_UClass_APooledActor_NoRegister()
	{
		return APooledActor::StaticClass();
	}
	struct Z_Construct_UClass_APooledActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyActorPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPooled_MetaData[];
#endif
		static void NewProp_bPooled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPooled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APooledActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APooledActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APooledActor_IsPooled, "IsPooled" }, // 2997594293
		{ &Z_Construct_UFunction_APooledActor_OnCreatedFromPool, "OnCreatedFromPool" }, // 1777163919
		{ &Z_Construct_UFunction_APooledActor_OnReturnToPool, "OnReturnToPool" }, // 1844679865
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool = { "MyActorPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APooledActor, MyActorPool), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor = { "NextActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APooledActor, NextActor), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	void Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_SetBit(void* Obj)
	{
		((APooledActor*)Obj)->bPooled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled = { "bPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APooledActor), &Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APooledActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APooledActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APooledActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APooledActor_Statics::ClassParams = {
		&APooledActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APooledActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APooledActor()
	{
		if (!Z_Registration_Info_UClass_APooledActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APooledActor.OuterSingleton, Z_Construct_UClass_APooledActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APooledActor.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<APooledActor>()
	{
		return APooledActor::StaticClass();
	}
	APooledActor::APooledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APooledActor);
	APooledActor::~APooledActor() {}
	void UActorPool::StaticRegisterNativesUActorPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorPool);
	UClass* Z_Construct_UClass_UActorPool_NoRegister()
	{
		return UActorPool::StaticClass();
	}
	struct Z_Construct_UClass_UActorPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPool_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPool, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorPool_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList = { "FreeList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPool, FreeList), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList = { "ActiveList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorPool, ActiveList), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPool_Statics::ClassParams = {
		&UActorPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPool()
	{
		if (!Z_Registration_Info_UClass_UActorPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPool.OuterSingleton, Z_Construct_UClass_UActorPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorPool.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<UActorPool>()
	{
		return UActorPool::StaticClass();
	}
	UActorPool::UActorPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPool);
	UActorPool::~UActorPool() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APooledActor, APooledActor::StaticClass, TEXT("APooledActor"), &Z_Registration_Info_UClass_APooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APooledActor), 975025606U) },
		{ Z_Construct_UClass_UActorPool, UActorPool::StaticClass, TEXT("UActorPool"), &Z_Registration_Info_UClass_UActorPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPool), 496659220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_1120416394(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
