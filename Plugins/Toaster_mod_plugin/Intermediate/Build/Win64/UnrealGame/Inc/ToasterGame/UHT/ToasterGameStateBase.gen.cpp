// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGameStateBase.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeToasterGameStateBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameStateBase();
TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameStateBase_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AToasterGameStateBase Function InitActorPools ****************************
struct Z_Construct_UFunction_AToasterGameStateBase_InitActorPools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitActorPools constinit property declarations ************************
// ********** End Function InitActorPools constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToasterGameStateBase_InitActorPools_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AToasterGameStateBase, nullptr, "InitActorPools", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_InitActorPools_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToasterGameStateBase_InitActorPools_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AToasterGameStateBase_InitActorPools()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToasterGameStateBase_InitActorPools_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToasterGameStateBase::execInitActorPools)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitActorPools();
	P_NATIVE_END;
}
// ********** End Class AToasterGameStateBase Function InitActorPools ******************************

// ********** Begin Class AToasterGameStateBase Function SpawnActorFromPool ************************
struct Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics
{
	struct ToasterGameStateBase_eventSpawnActorFromPool_Parms
	{
		TSubclassOf<APooledActor> ActorClass;
		FTransform Transform;
		bool bReclaimIfEmpty;
		APooledActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "CPP_Default_bReclaimIfEmpty", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorFromPool constinit property declarations ********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorFromPool constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorFromPool Property Definitions *******************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
{
	((ToasterGameStateBase_eventSpawnActorFromPool_Parms*)Obj)->bReclaimIfEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToasterGameStateBase_eventSpawnActorFromPool_Parms), &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers) < 2048);
// ********** End Function SpawnActorFromPool Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AToasterGameStateBase, nullptr, "SpawnActorFromPool", 	Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::ToasterGameStateBase_eventSpawnActorFromPool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::ToasterGameStateBase_eventSpawnActorFromPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToasterGameStateBase::execSpawnActorFromPool)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_bReclaimIfEmpty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APooledActor**)Z_Param__Result=P_THIS->SpawnActorFromPool(Z_Param_ActorClass,Z_Param_Transform,Z_Param_bReclaimIfEmpty);
	P_NATIVE_END;
}
// ********** End Class AToasterGameStateBase Function SpawnActorFromPool **************************

// ********** Begin Class AToasterGameStateBase Function SpawnActorFromPoolDefer *******************
struct Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics
{
	struct ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms
	{
		TSubclassOf<APooledActor> ActorClass;
		FTransform Transform;
		bool bReclaimIfEmpty;
		APooledActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnActorFromPoolDefer constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnActorFromPoolDefer constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnActorFromPoolDefer Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
{
	((ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms*)Obj)->bReclaimIfEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms), &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers) < 2048);
// ********** End Function SpawnActorFromPoolDefer Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AToasterGameStateBase, nullptr, "SpawnActorFromPoolDefer", 	Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AToasterGameStateBase::execSpawnActorFromPoolDefer)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_bReclaimIfEmpty);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APooledActor**)Z_Param__Result=P_THIS->SpawnActorFromPoolDefer(Z_Param_ActorClass,Z_Param_Transform,Z_Param_bReclaimIfEmpty);
	P_NATIVE_END;
}
// ********** End Class AToasterGameStateBase Function SpawnActorFromPoolDefer *********************

// ********** Begin Class AToasterGameStateBase ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AToasterGameStateBase;
UClass* AToasterGameStateBase::GetPrivateStaticClass()
{
	using TClass = AToasterGameStateBase;
	if (!Z_Registration_Info_UClass_AToasterGameStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ToasterGameStateBase"),
			Z_Registration_Info_UClass_AToasterGameStateBase.InnerSingleton,
			StaticRegisterNativesAToasterGameStateBase,
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
	return Z_Registration_Info_UClass_AToasterGameStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AToasterGameStateBase_NoRegister()
{
	return AToasterGameStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AToasterGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToasterGameStateBase.h" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerActorPoolTypes_MetaData[] = {
		{ "Category", "Actor Pools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actors that are meant to be spawned on the server\n" },
#endif
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors that are meant to be spawned on the server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientActorPoolTypes_MetaData[] = {
		{ "Category", "Actor Pools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actors that are meant to be spawned on the client\n" },
#endif
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actors that are meant to be spawned on the client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerActorPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientActorPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AToasterGameStateBase constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerActorPoolTypes_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ServerActorPoolTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ServerActorPoolTypes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientActorPoolTypes_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClientActorPoolTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClientActorPoolTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerActorPools_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ServerActorPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ServerActorPools;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientActorPools_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClientActorPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClientActorPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AToasterGameStateBase constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitActorPools"), .Pointer = &AToasterGameStateBase::execInitActorPools },
		{ .NameUTF8 = UTF8TEXT("SpawnActorFromPool"), .Pointer = &AToasterGameStateBase::execSpawnActorFromPool },
		{ .NameUTF8 = UTF8TEXT("SpawnActorFromPoolDefer"), .Pointer = &AToasterGameStateBase::execSpawnActorFromPoolDefer },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AToasterGameStateBase_InitActorPools, "InitActorPools" }, // 2368072850
		{ &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool, "SpawnActorFromPool" }, // 3820108558
		{ &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer, "SpawnActorFromPoolDefer" }, // 3452204926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToasterGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AToasterGameStateBase_Statics

// ********** Begin Class AToasterGameStateBase Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_ValueProp = { "ServerActorPoolTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_Key_KeyProp = { "ServerActorPoolTypes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes = { "ServerActorPoolTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToasterGameStateBase, ServerActorPoolTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerActorPoolTypes_MetaData), NewProp_ServerActorPoolTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_ValueProp = { "ClientActorPoolTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_Key_KeyProp = { "ClientActorPoolTypes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes = { "ClientActorPoolTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToasterGameStateBase, ClientActorPoolTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientActorPoolTypes_MetaData), NewProp_ClientActorPoolTypes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_ValueProp = { "ServerActorPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_Key_KeyProp = { "ServerActorPools_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools = { "ServerActorPools", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToasterGameStateBase, ServerActorPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerActorPools_MetaData), NewProp_ServerActorPools_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_ValueProp = { "ClientActorPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_Key_KeyProp = { "ClientActorPools_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools = { "ClientActorPools", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AToasterGameStateBase, ClientActorPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientActorPools_MetaData), NewProp_ClientActorPools_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToasterGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::PropPointers) < 2048);
// ********** End Class AToasterGameStateBase Property Definitions *********************************
UObject* (*const Z_Construct_UClass_AToasterGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToasterGameStateBase_Statics::ClassParams = {
	&AToasterGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AToasterGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AToasterGameStateBase_Statics::Class_MetaDataParams)
};
void AToasterGameStateBase::StaticRegisterNativesAToasterGameStateBase()
{
	UClass* Class = AToasterGameStateBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AToasterGameStateBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_AToasterGameStateBase()
{
	if (!Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton, Z_Construct_UClass_AToasterGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton;
}
AToasterGameStateBase::AToasterGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AToasterGameStateBase);
AToasterGameStateBase::~AToasterGameStateBase() {}
// ********** End Class AToasterGameStateBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToasterGameStateBase, AToasterGameStateBase::StaticClass, TEXT("AToasterGameStateBase"), &Z_Registration_Info_UClass_AToasterGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToasterGameStateBase), 2882692805U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h__Script_ToasterGame_51551295{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
