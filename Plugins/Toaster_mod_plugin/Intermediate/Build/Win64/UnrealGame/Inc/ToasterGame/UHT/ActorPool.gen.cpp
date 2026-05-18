// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActorPool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor();
TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool();
TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APooledActor Function IsPooled *******************************************
struct Z_Construct_UFunction_APooledActor_IsPooled_Statics
{
	struct PooledActor_eventIsPooled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPooled constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPooled constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPooled Property Definitions *****************************************
void Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PooledActor_eventIsPooled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PooledActor_eventIsPooled_Parms), &Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APooledActor_IsPooled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers) < 2048);
// ********** End Function IsPooled Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_IsPooled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "IsPooled", 	Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PooledActor_eventIsPooled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_IsPooled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APooledActor_IsPooled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APooledActor_IsPooled_Statics::PooledActor_eventIsPooled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APooledActor_IsPooled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_IsPooled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APooledActor::execIsPooled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPooled();
	P_NATIVE_END;
}
// ********** End Class APooledActor Function IsPooled *********************************************

// ********** Begin Class APooledActor Function OnCreatedFromPool **********************************
static FName NAME_APooledActor_OnCreatedFromPool = FName(TEXT("OnCreatedFromPool"));
void APooledActor::OnCreatedFromPool()
{
	UFunction* Func = FindFunctionChecked(NAME_APooledActor_OnCreatedFromPool);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCreatedFromPool constinit property declarations *********************
// ********** End Function OnCreatedFromPool constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "OnCreatedFromPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APooledActor_OnCreatedFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_OnCreatedFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APooledActor Function OnCreatedFromPool ************************************

// ********** Begin Class APooledActor Function OnReturnToPool *************************************
static FName NAME_APooledActor_OnReturnToPool = FName(TEXT("OnReturnToPool"));
void APooledActor::OnReturnToPool()
{
	UFunction* Func = FindFunctionChecked(NAME_APooledActor_OnReturnToPool);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnReturnToPool constinit property declarations ************************
// ********** End Function OnReturnToPool constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APooledActor, nullptr, "OnReturnToPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APooledActor_OnReturnToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APooledActor_OnReturnToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class APooledActor Function OnReturnToPool ***************************************

// ********** Begin Class APooledActor *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APooledActor;
UClass* APooledActor::GetPrivateStaticClass()
{
	using TClass = APooledActor;
	if (!Z_Registration_Info_UClass_APooledActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PooledActor"),
			Z_Registration_Info_UClass_APooledActor.InnerSingleton,
			StaticRegisterNativesAPooledActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APooledActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APooledActor_NoRegister()
{
	return APooledActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APooledActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPooledobject_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyActorPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPooled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APooledActor constinit property declarations *****************************
	static void NewProp_bPooledobject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPooledobject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActorPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextActor;
	static void NewProp_bPooled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPooled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APooledActor constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsPooled"), .Pointer = &APooledActor::execIsPooled },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APooledActor_IsPooled, "IsPooled" }, // 2865386304
		{ &Z_Construct_UFunction_APooledActor_OnCreatedFromPool, "OnCreatedFromPool" }, // 1067636664
		{ &Z_Construct_UFunction_APooledActor_OnReturnToPool, "OnReturnToPool" }, // 1324275824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APooledActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APooledActor_Statics

// ********** Begin Class APooledActor Property Definitions ****************************************
void Z_Construct_UClass_APooledActor_Statics::NewProp_bPooledobject_SetBit(void* Obj)
{
	((APooledActor*)Obj)->bPooledobject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_bPooledobject = { "bPooledobject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APooledActor), &Z_Construct_UClass_APooledActor_Statics::NewProp_bPooledobject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPooledobject_MetaData), NewProp_bPooledobject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool = { "MyActorPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APooledActor, MyActorPool), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyActorPool_MetaData), NewProp_MyActorPool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor = { "NextActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APooledActor, NextActor), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextActor_MetaData), NewProp_NextActor_MetaData) };
void Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_SetBit(void* Obj)
{
	((APooledActor*)Obj)->bPooled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled = { "bPooled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APooledActor), &Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPooled_MetaData), NewProp_bPooled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_bPooledobject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_MyActorPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_NextActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActor_Statics::NewProp_bPooled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::PropPointers) < 2048);
// ********** End Class APooledActor Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_APooledActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APooledActor_Statics::Class_MetaDataParams)
};
void APooledActor::StaticRegisterNativesAPooledActor()
{
	UClass* Class = APooledActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APooledActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_APooledActor()
{
	if (!Z_Registration_Info_UClass_APooledActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APooledActor.OuterSingleton, Z_Construct_UClass_APooledActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APooledActor.OuterSingleton;
}
APooledActor::APooledActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APooledActor);
APooledActor::~APooledActor() {}
// ********** End Class APooledActor ***************************************************************

// ********** Begin Class UActorPool ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActorPool;
UClass* UActorPool::GetPrivateStaticClass()
{
	using TClass = UActorPool;
	if (!Z_Registration_Info_UClass_UActorPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActorPool"),
			Z_Registration_Info_UClass_UActorPool.InnerSingleton,
			StaticRegisterNativesUActorPool,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UActorPool.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorPool_NoRegister()
{
	return UActorPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorPool.h" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveList_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActorPool constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreeList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActorPool constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActorPool_Statics

// ********** Begin Class UActorPool Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList = { "FreeList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, FreeList), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeList_MetaData), NewProp_FreeList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList = { "ActiveList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, ActiveList), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveList_MetaData), NewProp_ActiveList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_FreeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_ActiveList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers) < 2048);
// ********** End Class UActorPool Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UActorPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams)
};
void UActorPool::StaticRegisterNativesUActorPool()
{
}
UClass* Z_Construct_UClass_UActorPool()
{
	if (!Z_Registration_Info_UClass_UActorPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPool.OuterSingleton, Z_Construct_UClass_UActorPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPool.OuterSingleton;
}
UActorPool::UActorPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActorPool);
UActorPool::~UActorPool() {}
// ********** End Class UActorPool *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APooledActor, APooledActor::StaticClass, TEXT("APooledActor"), &Z_Registration_Info_UClass_APooledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APooledActor), 217363127U) },
		{ Z_Construct_UClass_UActorPool, UActorPool::StaticClass, TEXT("UActorPool"), &Z_Registration_Info_UClass_UActorPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPool), 68298100U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h__Script_ToasterGame_1501304046{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ActorPool_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
