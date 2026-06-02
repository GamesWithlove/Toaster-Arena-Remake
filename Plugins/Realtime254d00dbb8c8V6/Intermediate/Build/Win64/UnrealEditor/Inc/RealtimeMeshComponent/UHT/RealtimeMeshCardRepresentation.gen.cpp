// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/RealtimeMeshCardRepresentation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshCardRepresentation() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentation ***********************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCardRepresentation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCardRepresentation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshCardRepresentation.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentation constinit property declarations ***
// ********** End ScriptStruct FRealtimeMeshCardRepresentation constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshCardRepresentation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation;
class UScriptStruct* FRealtimeMeshCardRepresentation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("RealtimeMeshCardRepresentation"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	&NewStructOps,
	"RealtimeMeshCardRepresentation",
	nullptr,
	0,
	sizeof(FRealtimeMeshCardRepresentation),
	alignof(FRealtimeMeshCardRepresentation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshCardRepresentation *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshCardRepresentation_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshCardRepresentation::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation_Statics::NewStructOps, TEXT("RealtimeMeshCardRepresentation"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshCardRepresentation), 3151730207U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshCardRepresentation_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshCardRepresentation_h__Script_RealtimeMeshComponent_3639379996{
	TEXT("/Script/RealtimeMeshComponent"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshCardRepresentation_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshCardRepresentation_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
