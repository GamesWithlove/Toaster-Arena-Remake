// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshDynamicMeshConverter.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshDynamicMeshConverter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDynamicMeshConverter();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStreamSetDynamicMeshConversionOptions ****************************
struct Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStreamSetDynamicMeshConversionOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreamSetDynamicMeshConversionOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantNormals_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantUVs_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantVertexColors_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantMaterialIDs_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSortPolyGroupsIfNecessary_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFastConvert_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreamSetDynamicMeshConversionOptions constinit property declarations 
	static void NewProp_bWantNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantNormals;
	static void NewProp_bWantTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTangents;
	static void NewProp_bWantUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantUVs;
	static void NewProp_bWantVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantVertexColors;
	static void NewProp_bWantMaterialIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantMaterialIDs;
	static void NewProp_bAutoSortPolyGroupsIfNecessary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSortPolyGroupsIfNecessary;
	static void NewProp_bShouldFastConvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFastConvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreamSetDynamicMeshConversionOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamSetDynamicMeshConversionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions;
class UScriptStruct* FStreamSetDynamicMeshConversionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("StreamSetDynamicMeshConversionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FStreamSetDynamicMeshConversionOptions Property Definitions *******
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantNormals_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bWantNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantNormals = { "bWantNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantNormals_MetaData), NewProp_bWantNormals_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bWantTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantTangents = { "bWantTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantTangents_MetaData), NewProp_bWantTangents_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bWantUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantUVs = { "bWantUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantUVs_MetaData), NewProp_bWantUVs_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bWantVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors = { "bWantVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantVertexColors_MetaData), NewProp_bWantVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantMaterialIDs_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bWantMaterialIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantMaterialIDs = { "bWantMaterialIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantMaterialIDs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantMaterialIDs_MetaData), NewProp_bWantMaterialIDs_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bAutoSortPolyGroupsIfNecessary_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bAutoSortPolyGroupsIfNecessary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bAutoSortPolyGroupsIfNecessary = { "bAutoSortPolyGroupsIfNecessary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bAutoSortPolyGroupsIfNecessary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSortPolyGroupsIfNecessary_MetaData), NewProp_bAutoSortPolyGroupsIfNecessary_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bShouldFastConvert_SetBit(void* Obj)
{
	((FStreamSetDynamicMeshConversionOptions*)Obj)->bShouldFastConvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bShouldFastConvert = { "bShouldFastConvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bShouldFastConvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFastConvert_MetaData), NewProp_bShouldFastConvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bWantMaterialIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bAutoSortPolyGroupsIfNecessary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewProp_bShouldFastConvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStreamSetDynamicMeshConversionOptions Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"StreamSetDynamicMeshConversionOptions",
	Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::PropPointers),
	sizeof(FStreamSetDynamicMeshConversionOptions),
	alignof(FStreamSetDynamicMeshConversionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.InnerSingleton, Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions.InnerSingleton);
}
// ********** End ScriptStruct FStreamSetDynamicMeshConversionOptions ******************************

// ********** Begin ScriptStruct FRealtimeMeshDynamicMeshConversionOptions *************************
struct Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshDynamicMeshConversionOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshDynamicMeshConversionOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroup_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantNormals_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantUVs_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantVertexColors_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantPolyGroups_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshDynamicMeshConversionOptions constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroup;
	static void NewProp_bWantNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantNormals;
	static void NewProp_bWantTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTangents;
	static void NewProp_bWantUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantUVs;
	static void NewProp_bWantVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantVertexColors;
	static void NewProp_bWantPolyGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantPolyGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshDynamicMeshConversionOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshDynamicMeshConversionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions;
class UScriptStruct* FRealtimeMeshDynamicMeshConversionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshDynamicMeshConversionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshDynamicMeshConversionOptions Property Definitions ****
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_SectionGroup = { "SectionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshDynamicMeshConversionOptions, SectionGroup), Z_Construct_UScriptStruct_FRealtimeMeshSectionGroupKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroup_MetaData), NewProp_SectionGroup_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantNormals_SetBit(void* Obj)
{
	((FRealtimeMeshDynamicMeshConversionOptions*)Obj)->bWantNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantNormals = { "bWantNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantNormals_MetaData), NewProp_bWantNormals_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit(void* Obj)
{
	((FRealtimeMeshDynamicMeshConversionOptions*)Obj)->bWantTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantTangents = { "bWantTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantTangents_MetaData), NewProp_bWantTangents_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit(void* Obj)
{
	((FRealtimeMeshDynamicMeshConversionOptions*)Obj)->bWantUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantUVs = { "bWantUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantUVs_MetaData), NewProp_bWantUVs_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit(void* Obj)
{
	((FRealtimeMeshDynamicMeshConversionOptions*)Obj)->bWantVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors = { "bWantVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantVertexColors_MetaData), NewProp_bWantVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit(void* Obj)
{
	((FRealtimeMeshDynamicMeshConversionOptions*)Obj)->bWantPolyGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantPolyGroups = { "bWantPolyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDynamicMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantPolyGroups_MetaData), NewProp_bWantPolyGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_SectionGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewProp_bWantPolyGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshDynamicMeshConversionOptions Property Definitions ******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshDynamicMeshConversionOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshDynamicMeshConversionOptions),
	alignof(FRealtimeMeshDynamicMeshConversionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshDynamicMeshConversionOptions ***************************

// ********** Begin Class URealtimeMeshDynamicMeshConverter Function CopyRealtimeMeshFromDynamicMesh 
struct Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics
{
	struct RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms
	{
		UDynamicMesh* FromDynamicMesh;
		URealtimeMeshSimple* ToRealtimeMesh;
		FRealtimeMeshDynamicMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		URealtimeMeshSimple* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Realtime Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyRealtimeMeshFromDynamicMesh constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToRealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyRealtimeMeshFromDynamicMesh constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyRealtimeMeshFromDynamicMesh Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_ToRealtimeMesh = { "ToRealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms, ToRealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 267922405
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_FromDynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_ToRealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyRealtimeMeshFromDynamicMesh Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDynamicMeshConverter, nullptr, "CopyRealtimeMeshFromDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshFromDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDynamicMeshConverter::execCopyRealtimeMeshFromDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_ToRealtimeMesh);
	P_GET_STRUCT(FRealtimeMeshDynamicMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshSimple**)Z_Param__Result=URealtimeMeshDynamicMeshConverter::CopyRealtimeMeshFromDynamicMesh(Z_Param_FromDynamicMesh,Z_Param_ToRealtimeMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDynamicMeshConverter Function CopyRealtimeMeshFromDynamicMesh *

// ********** Begin Class URealtimeMeshDynamicMeshConverter Function CopyRealtimeMeshToDynamicMesh *
struct Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics
{
	struct RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms
	{
		URealtimeMeshSimple* FromRealtimeMesh;
		UDynamicMesh* ToDynamicMesh;
		FRealtimeMeshDynamicMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyRealtimeMeshToDynamicMesh constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromRealtimeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyRealtimeMeshToDynamicMesh constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyRealtimeMeshToDynamicMesh Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_FromRealtimeMesh = { "FromRealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms, FromRealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 267922405
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_FromRealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_ToDynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyRealtimeMeshToDynamicMesh Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDynamicMeshConverter, nullptr, "CopyRealtimeMeshToDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyRealtimeMeshToDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDynamicMeshConverter::execCopyRealtimeMeshToDynamicMesh)
{
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_FromRealtimeMesh);
	P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
	P_GET_STRUCT(FRealtimeMeshDynamicMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=URealtimeMeshDynamicMeshConverter::CopyRealtimeMeshToDynamicMesh(Z_Param_FromRealtimeMesh,Z_Param_ToDynamicMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDynamicMeshConverter Function CopyRealtimeMeshToDynamicMesh ***

// ********** Begin Class URealtimeMeshDynamicMeshConverter Function CopyStreamSetFromDynamicMesh **
struct Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics
{
	struct RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms
	{
		UDynamicMesh* FromDynamicMesh;
		URealtimeMeshStreamSet* ToStreamSet;
		FStreamSetDynamicMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		URealtimeMeshStreamSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Stream Set" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyStreamSetFromDynamicMesh constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromDynamicMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyStreamSetFromDynamicMesh constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyStreamSetFromDynamicMesh Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_FromDynamicMesh = { "FromDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms, FromDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_ToStreamSet = { "ToStreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms, ToStreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 2392537343
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_FromDynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_ToStreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyStreamSetFromDynamicMesh Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDynamicMeshConverter, nullptr, "CopyStreamSetFromDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyStreamSetFromDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDynamicMeshConverter::execCopyStreamSetFromDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_FromDynamicMesh);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_ToStreamSet);
	P_GET_STRUCT(FStreamSetDynamicMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStreamSet**)Z_Param__Result=URealtimeMeshDynamicMeshConverter::CopyStreamSetFromDynamicMesh(Z_Param_FromDynamicMesh,Z_Param_ToStreamSet,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDynamicMeshConverter Function CopyStreamSetFromDynamicMesh ****

// ********** Begin Class URealtimeMeshDynamicMeshConverter Function CopyStreamSetToDynamicMesh ****
struct Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics
{
	struct RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms
	{
		URealtimeMeshStreamSet* FromStreamSet;
		UDynamicMesh* ToDynamicMesh;
		FStreamSetDynamicMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyStreamSetToDynamicMesh constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStreamSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyStreamSetToDynamicMesh constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyStreamSetToDynamicMesh Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_FromStreamSet = { "FromStreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms, FromStreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 2392537343
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_FromStreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_ToDynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyStreamSetToDynamicMesh Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDynamicMeshConverter, nullptr, "CopyStreamSetToDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::RealtimeMeshDynamicMeshConverter_eventCopyStreamSetToDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDynamicMeshConverter::execCopyStreamSetToDynamicMesh)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_FromStreamSet);
	P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
	P_GET_STRUCT(FStreamSetDynamicMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=URealtimeMeshDynamicMeshConverter::CopyStreamSetToDynamicMesh(Z_Param_FromStreamSet,Z_Param_ToDynamicMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDynamicMeshConverter Function CopyStreamSetToDynamicMesh ******

// ********** Begin Class URealtimeMeshDynamicMeshConverter ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter;
UClass* URealtimeMeshDynamicMeshConverter::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshDynamicMeshConverter;
	if (!Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshDynamicMeshConverter"),
			Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.InnerSingleton,
			StaticRegisterNativesURealtimeMeshDynamicMeshConverter,
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
	return Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_NoRegister()
{
	return URealtimeMeshDynamicMeshConverter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RealtimeMeshDynamicMeshConverter.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDynamicMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshDynamicMeshConverter constinit property declarations ********
// ********** End Class URealtimeMeshDynamicMeshConverter constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CopyRealtimeMeshFromDynamicMesh"), .Pointer = &URealtimeMeshDynamicMeshConverter::execCopyRealtimeMeshFromDynamicMesh },
		{ .NameUTF8 = UTF8TEXT("CopyRealtimeMeshToDynamicMesh"), .Pointer = &URealtimeMeshDynamicMeshConverter::execCopyRealtimeMeshToDynamicMesh },
		{ .NameUTF8 = UTF8TEXT("CopyStreamSetFromDynamicMesh"), .Pointer = &URealtimeMeshDynamicMeshConverter::execCopyStreamSetFromDynamicMesh },
		{ .NameUTF8 = UTF8TEXT("CopyStreamSetToDynamicMesh"), .Pointer = &URealtimeMeshDynamicMeshConverter::execCopyStreamSetToDynamicMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshFromDynamicMesh, "CopyRealtimeMeshFromDynamicMesh" }, // 3271545101
		{ &Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyRealtimeMeshToDynamicMesh, "CopyRealtimeMeshToDynamicMesh" }, // 3593622590
		{ &Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetFromDynamicMesh, "CopyStreamSetFromDynamicMesh" }, // 716428765
		{ &Z_Construct_UFunction_URealtimeMeshDynamicMeshConverter_CopyStreamSetToDynamicMesh, "CopyStreamSetToDynamicMesh" }, // 2786493276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshDynamicMeshConverter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::ClassParams = {
	&URealtimeMeshDynamicMeshConverter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::Class_MetaDataParams)
};
void URealtimeMeshDynamicMeshConverter::StaticRegisterNativesURealtimeMeshDynamicMeshConverter()
{
	UClass* Class = URealtimeMeshDynamicMeshConverter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshDynamicMeshConverter()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.OuterSingleton, Z_Construct_UClass_URealtimeMeshDynamicMeshConverter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter.OuterSingleton;
}
URealtimeMeshDynamicMeshConverter::URealtimeMeshDynamicMeshConverter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshDynamicMeshConverter);
URealtimeMeshDynamicMeshConverter::~URealtimeMeshDynamicMeshConverter() {}
// ********** End Class URealtimeMeshDynamicMeshConverter ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamSetDynamicMeshConversionOptions::StaticStruct, Z_Construct_UScriptStruct_FStreamSetDynamicMeshConversionOptions_Statics::NewStructOps, TEXT("StreamSetDynamicMeshConversionOptions"),&Z_Registration_Info_UScriptStruct_FStreamSetDynamicMeshConversionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamSetDynamicMeshConversionOptions), 2392537343U) },
		{ FRealtimeMeshDynamicMeshConversionOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions_Statics::NewStructOps, TEXT("RealtimeMeshDynamicMeshConversionOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshDynamicMeshConversionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshDynamicMeshConversionOptions), 267922405U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshDynamicMeshConverter, URealtimeMeshDynamicMeshConverter::StaticClass, TEXT("URealtimeMeshDynamicMeshConverter"), &Z_Registration_Info_UClass_URealtimeMeshDynamicMeshConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshDynamicMeshConverter), 3749936883U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_49902470{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshDynamicMeshConverter_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
