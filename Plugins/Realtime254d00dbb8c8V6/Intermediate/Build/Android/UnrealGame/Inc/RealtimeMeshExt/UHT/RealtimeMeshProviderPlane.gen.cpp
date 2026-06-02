// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/RealtimeMeshProviderPlane.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshProviderPlane() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt64Vector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshProviderPlaneParams **********************************
struct Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshProviderPlaneParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshProviderPlaneParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshProviderPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshProviderPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshProviderPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshProviderPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshProviderPlane.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshProviderPlaneParams constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshProviderPlaneParams constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshProviderPlaneParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams;
class UScriptStruct* FRealtimeMeshProviderPlaneParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshProviderPlaneParams"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshProviderPlaneParams Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellLocation = { "CellLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshProviderPlaneParams, CellLocation), Z_Construct_UScriptStruct_FInt64Vector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellLocation_MetaData), NewProp_CellLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshProviderPlaneParams, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshProviderPlaneParams, CellSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshProviderPlaneParams, CellHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellHeight_MetaData), NewProp_CellHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewProp_CellHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshProviderPlaneParams Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshProviderPlaneParams",
	Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::PropPointers),
	sizeof(FRealtimeMeshProviderPlaneParams),
	alignof(FRealtimeMeshProviderPlaneParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshProviderPlaneParams ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshProviderPlane_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshProviderPlaneParams::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshProviderPlaneParams_Statics::NewStructOps, TEXT("RealtimeMeshProviderPlaneParams"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshProviderPlaneParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshProviderPlaneParams), 912484415U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshProviderPlane_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshProviderPlane_h__Script_RealtimeMeshExt_3858398883{
	TEXT("/Script/RealtimeMeshExt"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshProviderPlane_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshProviderPlane_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
