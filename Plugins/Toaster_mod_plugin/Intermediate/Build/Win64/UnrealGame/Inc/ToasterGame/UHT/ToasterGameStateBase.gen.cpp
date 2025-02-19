// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/ToasterGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterGameStateBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	TOASTERGAME_API UClass* Z_Construct_UClass_APooledActor_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameStateBase();
	TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameStateBase_NoRegister();
	TOASTERGAME_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
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
	void AToasterGameStateBase::StaticRegisterNativesAToasterGameStateBase()
	{
		UClass* Class = AToasterGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActorFromPool", &AToasterGameStateBase::execSpawnActorFromPool },
			{ "SpawnActorFromPoolDefer", &AToasterGameStateBase::execSpawnActorFromPoolDefer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics
	{
		struct ToasterGameStateBase_eventSpawnActorFromPool_Parms
		{
			TSubclassOf<APooledActor>  ActorClass;
			FTransform Transform;
			bool bReclaimIfEmpty;
			APooledActor* ReturnValue;
		};
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
	{
		((ToasterGameStateBase_eventSpawnActorFromPool_Parms*)Obj)->bReclaimIfEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToasterGameStateBase_eventSpawnActorFromPool_Parms), &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPool_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_bReclaimIfEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "CPP_Default_bReclaimIfEmpty", "true" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToasterGameStateBase, nullptr, "SpawnActorFromPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::ToasterGameStateBase_eventSpawnActorFromPool_Parms), Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics
	{
		struct ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms
		{
			TSubclassOf<APooledActor>  ActorClass;
			FTransform Transform;
			bool bReclaimIfEmpty;
			APooledActor* ReturnValue;
		};
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty_SetBit(void* Obj)
	{
		((ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms*)Obj)->bReclaimIfEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty = { "bReclaimIfEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms), &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms, ReturnValue), Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_bReclaimIfEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToasterGameStateBase, nullptr, "SpawnActorFromPoolDefer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::ToasterGameStateBase_eventSpawnActorFromPoolDefer_Parms), Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToasterGameStateBase);
	UClass* Z_Construct_UClass_AToasterGameStateBase_NoRegister()
	{
		return AToasterGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AToasterGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerActorPoolTypes_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ServerActorPoolTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerActorPoolTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ServerActorPoolTypes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClientActorPoolTypes_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClientActorPoolTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientActorPoolTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClientActorPoolTypes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerActorPools_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ServerActorPools_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerActorPools_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ServerActorPools;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientActorPools_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClientActorPools_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientActorPools_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClientActorPools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToasterGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AToasterGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPool, "SpawnActorFromPool" }, // 479967345
		{ &Z_Construct_UFunction_AToasterGameStateBase_SpawnActorFromPoolDefer, "SpawnActorFromPoolDefer" }, // 1028413483
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToasterGameStateBase.h" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_ValueProp = { "ServerActorPoolTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_Key_KeyProp = { "ServerActorPoolTypes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_MetaData[] = {
		{ "Category", "Actor Pools" },
		{ "Comment", "// Actors that are meant to be spawned on the server\n" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
		{ "ToolTip", "Actors that are meant to be spawned on the server" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes = { "ServerActorPoolTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToasterGameStateBase, ServerActorPoolTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPoolTypes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_ValueProp = { "ClientActorPoolTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_Key_KeyProp = { "ClientActorPoolTypes_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_MetaData[] = {
		{ "Category", "Actor Pools" },
		{ "Comment", "// Actors that are meant to be spawned on the client\n" },
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
		{ "ToolTip", "Actors that are meant to be spawned on the client" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes = { "ClientActorPoolTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToasterGameStateBase, ClientActorPoolTypes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPoolTypes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_ValueProp = { "ServerActorPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_Key_KeyProp = { "ServerActorPools_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools = { "ServerActorPools", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToasterGameStateBase, ServerActorPools), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ServerActorPools_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_ValueProp = { "ClientActorPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_Key_KeyProp = { "ClientActorPools_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APooledActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToasterGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools = { "ClientActorPools", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AToasterGameStateBase, ClientActorPools), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::NewProp_ClientActorPools_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToasterGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToasterGameStateBase>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_AToasterGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToasterGameStateBase()
	{
		if (!Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton, Z_Construct_UClass_AToasterGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToasterGameStateBase.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<AToasterGameStateBase>()
	{
		return AToasterGameStateBase::StaticClass();
	}
	AToasterGameStateBase::AToasterGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToasterGameStateBase);
	AToasterGameStateBase::~AToasterGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToasterGameStateBase, AToasterGameStateBase::StaticClass, TEXT("AToasterGameStateBase"), &Z_Registration_Info_UClass_AToasterGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToasterGameStateBase), 3538278635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_2396889818(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
