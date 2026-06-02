// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialStreamingState.h"
#include "RealtimeMeshSpatialComponentLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialStreamingState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingManager();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_NoRegister();
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState();
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshSpatialCellState *************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSpatialCellState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSpatialCellState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSpatialCellState constinit property declarations *****
// ********** End ScriptStruct FRealtimeMeshSpatialCellState constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshSpatialCellState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState;
class UScriptStruct* FRealtimeMeshSpatialCellState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("RealtimeMeshSpatialCellState"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	&NewStructOps,
	"RealtimeMeshSpatialCellState",
	nullptr,
	0,
	sizeof(FRealtimeMeshSpatialCellState),
	alignof(FRealtimeMeshSpatialCellState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshSpatialCellState ***************************************

// ********** Begin Class URealtimeMeshSpatialStreamingManager *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager;
UClass* URealtimeMeshSpatialStreamingManager::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSpatialStreamingManager;
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSpatialStreamingManager"),
			Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSpatialStreamingManager,
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
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_NoRegister()
{
	return URealtimeMeshSpatialStreamingManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RealtimeMeshSpatialStreamingState.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHadStreamingChangesLastFrame_MetaData[] = {
		{ "Comment", "//UPROPERTY(Transient)\n//TMap<FRealtimeMeshSpatialComponentLocation, FRealtimeMeshSpatialStreamingCell> ActiveCells;\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
		{ "ToolTip", "UPROPERTY(Transient)\nTMap<FRealtimeMeshSpatialComponentLocation, FRealtimeMeshSpatialStreamingCell> ActiveCells;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoadingCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseChunkSize_MetaData[] = {
		{ "Comment", "/*UPROPERTY()\n\x09""float LoadingDistanceMultiplier = 1.25f;*/" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingState.h" },
		{ "ToolTip", "UPROPERTY()\n       float LoadingDistanceMultiplier = 1.25f;" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSpatialStreamingManager constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_State_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_State_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_State;
	static void NewProp_bHadStreamingChangesLastFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadStreamingChangesLastFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoadingCells;
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BaseChunkSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMeshSpatialStreamingManager constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSpatialStreamingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics

// ********** Begin Class URealtimeMeshSpatialStreamingManager Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State_ValueProp = { "State", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState, METADATA_PARAMS(0, nullptr) }; // 1118860020
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State_Key_KeyProp = { "State_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation, METADATA_PARAMS(0, nullptr) }; // 1495628176
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingManager, State), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 1495628176 1118860020
void Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bHadStreamingChangesLastFrame_SetBit(void* Obj)
{
	((URealtimeMeshSpatialStreamingManager*)Obj)->bHadStreamingChangesLastFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bHadStreamingChangesLastFrame = { "bHadStreamingChangesLastFrame", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URealtimeMeshSpatialStreamingManager), &Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bHadStreamingChangesLastFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHadStreamingChangesLastFrame_MetaData), NewProp_bHadStreamingChangesLastFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_NumLoadingCells = { "NumLoadingCells", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingManager, NumLoadingCells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoadingCells_MetaData), NewProp_NumLoadingCells_MetaData) };
void Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((URealtimeMeshSpatialStreamingManager*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URealtimeMeshSpatialStreamingManager), &Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
void Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((URealtimeMeshSpatialStreamingManager*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URealtimeMeshSpatialStreamingManager), &Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_BaseChunkSize = { "BaseChunkSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshSpatialStreamingManager, BaseChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseChunkSize_MetaData), NewProp_BaseChunkSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bHadStreamingChangesLastFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_NumLoadingCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::NewProp_BaseChunkSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMeshSpatialStreamingManager Property Definitions ******************
UObject* (*const Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::ClassParams = {
	&URealtimeMeshSpatialStreamingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::Class_MetaDataParams)
};
void URealtimeMeshSpatialStreamingManager::StaticRegisterNativesURealtimeMeshSpatialStreamingManager()
{
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingManager()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.OuterSingleton, Z_Construct_UClass_URealtimeMeshSpatialStreamingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager.OuterSingleton;
}
URealtimeMeshSpatialStreamingManager::URealtimeMeshSpatialStreamingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSpatialStreamingManager);
URealtimeMeshSpatialStreamingManager::~URealtimeMeshSpatialStreamingManager() {}
// ********** End Class URealtimeMeshSpatialStreamingManager ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshSpatialCellState::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshSpatialCellState_Statics::NewStructOps, TEXT("RealtimeMeshSpatialCellState"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialCellState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshSpatialCellState), 1118860020U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshSpatialStreamingManager, URealtimeMeshSpatialStreamingManager::StaticClass, TEXT("URealtimeMeshSpatialStreamingManager"), &Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSpatialStreamingManager), 2719601075U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_3307561565{
	TEXT("/Script/RealtimeMeshSpatial"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingState_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
