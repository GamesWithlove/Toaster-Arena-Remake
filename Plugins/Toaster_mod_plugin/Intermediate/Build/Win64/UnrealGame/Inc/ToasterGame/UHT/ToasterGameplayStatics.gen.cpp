// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGameplayStatics.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeToasterGameplayStatics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
TOASTERGAME_API UClass* Z_Construct_UClass_UToasterGameplayStatics();
TOASTERGAME_API UClass* Z_Construct_UClass_UToasterGameplayStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UToasterGameplayStatics Function FinishSpawningPooledActor ***************
struct Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics
{
	struct ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms
	{
		APooledActor* PooledActor;
		AActor* Owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinishSpawningPooledActor constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PooledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinishSpawningPooledActor constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinishSpawningPooledActor Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_PooledActor = { "PooledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms, PooledActor), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_PooledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers) < 2048);
// ********** End Function FinishSpawningPooledActor Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "FinishSpawningPooledActor", 	Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::ToasterGameplayStatics_eventFinishSpawningPooledActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToasterGameplayStatics::execFinishSpawningPooledActor)
{
	P_GET_OBJECT(APooledActor,Z_Param_PooledActor);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	UToasterGameplayStatics::FinishSpawningPooledActor(Z_Param_PooledActor,Z_Param_Owner);
	P_NATIVE_END;
}
// ********** End Class UToasterGameplayStatics Function FinishSpawningPooledActor *****************

// ********** Begin Class UToasterGameplayStatics Function SpawnPooledActor ************************
struct Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics
{
	struct ToasterGameplayStatics_eventSpawnPooledActor_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<APooledActor> ActorClass;
		FTransform Transform;
		bool bReclaimIfEmpty;
		APooledActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnPooledActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnPooledActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnPooledActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
{
	((ToasterGameplayStatics_eventSpawnPooledActor_Parms*)Obj)->bReclaimIfEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToasterGameplayStatics_eventSpawnPooledActor_Parms), &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActor_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_bReclaimIfEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers) < 2048);
// ********** End Function SpawnPooledActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "SpawnPooledActor", 	Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::ToasterGameplayStatics_eventSpawnPooledActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::ToasterGameplayStatics_eventSpawnPooledActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UToasterGameplayStatics Function SpawnPooledActor **************************

// ********** Begin Class UToasterGameplayStatics Function SpawnPooledActorDefer *******************
struct Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics
{
	struct ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<APooledActor> ActorClass;
		FTransform Transform;
		bool bReclaimIfEmpty;
		APooledActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnPooledActorDefer constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bReclaimIfEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReclaimIfEmpty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnPooledActorDefer constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnPooledActorDefer Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
{
	((ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms*)Obj)->bReclaimIfEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms), &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_bReclaimIfEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers) < 2048);
// ********** End Function SpawnPooledActorDefer Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UToasterGameplayStatics, nullptr, "SpawnPooledActorDefer", 	Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::ToasterGameplayStatics_eventSpawnPooledActorDefer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer_Statics::FuncParams);
	}
	return ReturnFunction;
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
// ********** End Class UToasterGameplayStatics Function SpawnPooledActorDefer *********************

// ********** Begin Class UToasterGameplayStatics **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UToasterGameplayStatics;
UClass* UToasterGameplayStatics::GetPrivateStaticClass()
{
	using TClass = UToasterGameplayStatics;
	if (!Z_Registration_Info_UClass_UToasterGameplayStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ToasterGameplayStatics"),
			Z_Registration_Info_UClass_UToasterGameplayStatics.InnerSingleton,
			StaticRegisterNativesUToasterGameplayStatics,
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
	return Z_Registration_Info_UClass_UToasterGameplayStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UToasterGameplayStatics_NoRegister()
{
	return UToasterGameplayStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UToasterGameplayStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ToasterGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/ToasterGameplayStatics.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UToasterGameplayStatics constinit property declarations ******************
// ********** End Class UToasterGameplayStatics constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FinishSpawningPooledActor"), .Pointer = &UToasterGameplayStatics::execFinishSpawningPooledActor },
		{ .NameUTF8 = UTF8TEXT("SpawnPooledActor"), .Pointer = &UToasterGameplayStatics::execSpawnPooledActor },
		{ .NameUTF8 = UTF8TEXT("SpawnPooledActorDefer"), .Pointer = &UToasterGameplayStatics::execSpawnPooledActorDefer },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToasterGameplayStatics_FinishSpawningPooledActor, "FinishSpawningPooledActor" }, // 2550656226
		{ &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActor, "SpawnPooledActor" }, // 88187046
		{ &Z_Construct_UFunction_UToasterGameplayStatics_SpawnPooledActorDefer, "SpawnPooledActorDefer" }, // 2186145399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToasterGameplayStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UToasterGameplayStatics_Statics
UObject* (*const Z_Construct_UClass_UToasterGameplayStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToasterGameplayStatics_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToasterGameplayStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UToasterGameplayStatics_Statics::Class_MetaDataParams)
};
void UToasterGameplayStatics::StaticRegisterNativesUToasterGameplayStatics()
{
	UClass* Class = UToasterGameplayStatics::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UToasterGameplayStatics_Statics::Funcs));
}
UClass* Z_Construct_UClass_UToasterGameplayStatics()
{
	if (!Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton, Z_Construct_UClass_UToasterGameplayStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToasterGameplayStatics.OuterSingleton;
}
UToasterGameplayStatics::UToasterGameplayStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UToasterGameplayStatics);
UToasterGameplayStatics::~UToasterGameplayStatics() {}
// ********** End Class UToasterGameplayStatics ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h__Script_ToasterGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToasterGameplayStatics, UToasterGameplayStatics::StaticClass, TEXT("UToasterGameplayStatics"), &Z_Registration_Info_UClass_UToasterGameplayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToasterGameplayStatics), 2755991019U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h__Script_ToasterGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h__Script_ToasterGame_1796102862{
	TEXT("/Script/ToasterGame"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h__Script_ToasterGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameplayStatics_h__Script_ToasterGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
