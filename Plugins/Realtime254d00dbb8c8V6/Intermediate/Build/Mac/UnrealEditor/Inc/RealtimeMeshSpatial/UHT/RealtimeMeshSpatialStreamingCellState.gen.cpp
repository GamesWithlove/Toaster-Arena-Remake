// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialStreamingCellState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialStreamingCellState() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshSpatialStreamingCellState ****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSpatialStreamingCellState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSpatialStreamingCellState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingCellState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingCellState.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSpatialStreamingCellState constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshSpatialStreamingCellState constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshSpatialStreamingCellState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState;
class UScriptStruct* FRealtimeMeshSpatialStreamingCellState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("RealtimeMeshSpatialStreamingCellState"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshSpatialStreamingCellState Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshSpatialStreamingCellState, MeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshSpatialStreamingCellState Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	&NewStructOps,
	"RealtimeMeshSpatialStreamingCellState",
	Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::PropPointers),
	sizeof(FRealtimeMeshSpatialStreamingCellState),
	alignof(FRealtimeMeshSpatialStreamingCellState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshSpatialStreamingCellState ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingCellState_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshSpatialStreamingCellState::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshSpatialStreamingCellState_Statics::NewStructOps, TEXT("RealtimeMeshSpatialStreamingCellState"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialStreamingCellState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshSpatialStreamingCellState), 3617490854U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingCellState_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingCellState_h__Script_RealtimeMeshSpatial_3919969148{
	TEXT("/Script/RealtimeMeshSpatial"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingCellState_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingCellState_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
