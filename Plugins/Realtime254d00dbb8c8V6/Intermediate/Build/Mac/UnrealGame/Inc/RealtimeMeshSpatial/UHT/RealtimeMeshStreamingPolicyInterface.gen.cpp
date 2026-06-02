// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spatial/RealtimeMeshStreamingPolicyInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshStreamingPolicyInterface() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D();
REALTIMEMESHSPATIAL_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid3D *************
struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid3D); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshFactoryInitializationParamsSpatialGrid3D); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Spatial/RealtimeMeshStreamingPolicyInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid3D constinit property declarations 
// ********** End ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid3D constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshFactoryInitializationParamsSpatialGrid3D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D;
class UScriptStruct* FRealtimeMeshFactoryInitializationParamsSpatialGrid3D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("RealtimeMeshFactoryInitializationParamsSpatialGrid3D"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	&NewStructOps,
	"RealtimeMeshFactoryInitializationParamsSpatialGrid3D",
	nullptr,
	0,
	sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid3D),
	alignof(FRealtimeMeshFactoryInitializationParamsSpatialGrid3D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid3D ***************

// ********** Begin ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid2D *************
struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid2D); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshFactoryInitializationParamsSpatialGrid2D); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/Spatial/RealtimeMeshStreamingPolicyInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid2D constinit property declarations 
// ********** End ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid2D constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshFactoryInitializationParamsSpatialGrid2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D;
class UScriptStruct* FRealtimeMeshFactoryInitializationParamsSpatialGrid2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshSpatial(), TEXT("RealtimeMeshFactoryInitializationParamsSpatialGrid2D"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
	nullptr,
	&NewStructOps,
	"RealtimeMeshFactoryInitializationParamsSpatialGrid2D",
	nullptr,
	0,
	sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid2D),
	alignof(FRealtimeMeshFactoryInitializationParamsSpatialGrid2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshFactoryInitializationParamsSpatialGrid2D ***************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_Interface_Spatial_RealtimeMeshStreamingPolicyInterface_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshFactoryInitializationParamsSpatialGrid3D::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D_Statics::NewStructOps, TEXT("RealtimeMeshFactoryInitializationParamsSpatialGrid3D"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid3D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid3D), 375802335U) },
		{ FRealtimeMeshFactoryInitializationParamsSpatialGrid2D::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D_Statics::NewStructOps, TEXT("RealtimeMeshFactoryInitializationParamsSpatialGrid2D"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshFactoryInitializationParamsSpatialGrid2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshFactoryInitializationParamsSpatialGrid2D), 843987905U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_Interface_Spatial_RealtimeMeshStreamingPolicyInterface_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_Interface_Spatial_RealtimeMeshStreamingPolicyInterface_h__Script_RealtimeMeshSpatial_600733471{
	TEXT("/Script/RealtimeMeshSpatial"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_Interface_Spatial_RealtimeMeshStreamingPolicyInterface_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshSpatial_Public_Interface_Spatial_RealtimeMeshStreamingPolicyInterface_h__Script_RealtimeMeshSpatial_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
