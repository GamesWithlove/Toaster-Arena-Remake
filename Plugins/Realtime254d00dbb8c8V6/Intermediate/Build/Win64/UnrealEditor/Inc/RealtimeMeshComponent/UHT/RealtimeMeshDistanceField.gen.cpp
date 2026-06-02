// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/RealtimeMeshDistanceField.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshDistanceField() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceField();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshDistanceField ****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshDistanceField); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshDistanceField); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshDistanceField.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshDistanceField constinit property declarations ********
// ********** End ScriptStruct FRealtimeMeshDistanceField constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshDistanceField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField;
class UScriptStruct* FRealtimeMeshDistanceField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("RealtimeMeshDistanceField"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	&NewStructOps,
	"RealtimeMeshDistanceField",
	nullptr,
	0,
	sizeof(FRealtimeMeshDistanceField),
	alignof(FRealtimeMeshDistanceField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceField()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshDistanceField ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshDistanceField_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshDistanceField::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshDistanceField_Statics::NewStructOps, TEXT("RealtimeMeshDistanceField"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshDistanceField), 3782703035U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshDistanceField_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshDistanceField_h__Script_RealtimeMeshComponent_299573274{
	TEXT("/Script/RealtimeMeshComponent"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshDistanceField_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshDistanceField_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
