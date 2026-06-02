// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialComponentLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialComponentLocation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt64Vector();
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshSpatialComponentLocation *****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshSpatialComponentLocation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshSpatialComponentLocation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialComponentLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialComponentLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialComponentLocation.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshSpatialComponentLocation constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshSpatialComponentLocation constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshSpatialComponentLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation;
class UScriptStruct* FRealtimeMeshSpatialComponentLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("RealtimeMeshSpatialComponentLocation"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshSpatialComponentLocation Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshSpatialComponentLocation, Location), Z_Construct_UScriptStruct_FInt64Vector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshSpatialComponentLocation, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::NewProp_LOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshSpatialComponentLocation Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	&NewStructOps,
	"RealtimeMeshSpatialComponentLocation",
	Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::PropPointers),
	sizeof(FRealtimeMeshSpatialComponentLocation),
	alignof(FRealtimeMeshSpatialComponentLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshSpatialComponentLocation *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialComponentLocation_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshSpatialComponentLocation::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshSpatialComponentLocation_Statics::NewStructOps, TEXT("RealtimeMeshSpatialComponentLocation"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshSpatialComponentLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshSpatialComponentLocation), 1495628176U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialComponentLocation_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialComponentLocation_h__Script_RealtimeMeshSpatial_3815578595{
	TEXT("/Script/RealtimeMeshSpatial"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialComponentLocation_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialComponentLocation_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
