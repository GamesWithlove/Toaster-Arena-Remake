// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshStaticMeshConverter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshStaticMeshConverter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshStaticMeshConverter();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshStaticMeshConverter_NoRegister();
REALTIMEMESHEXT_API UEnum* Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions ****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCopyFromStaticMeshOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCopyFromStaticMeshOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBuildSettings_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequestTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRemoveDegenerates_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions constinit property declarations 
	static void NewProp_bApplyBuildSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBuildSettings;
	static void NewProp_bRequestTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestTangents;
	static void NewProp_bIgnoreRemoveDegenerates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRemoveDegenerates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshCopyFromStaticMeshOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions;
class UScriptStruct* FRealtimeMeshCopyFromStaticMeshOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshCopyFromStaticMeshOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions Property Definitions *******
void Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bApplyBuildSettings_SetBit(void* Obj)
{
	((FRealtimeMeshCopyFromStaticMeshOptions*)Obj)->bApplyBuildSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bApplyBuildSettings = { "bApplyBuildSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCopyFromStaticMeshOptions), &Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bApplyBuildSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyBuildSettings_MetaData), NewProp_bApplyBuildSettings_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bRequestTangents_SetBit(void* Obj)
{
	((FRealtimeMeshCopyFromStaticMeshOptions*)Obj)->bRequestTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bRequestTangents = { "bRequestTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCopyFromStaticMeshOptions), &Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bRequestTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequestTangents_MetaData), NewProp_bRequestTangents_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bIgnoreRemoveDegenerates_SetBit(void* Obj)
{
	((FRealtimeMeshCopyFromStaticMeshOptions*)Obj)->bIgnoreRemoveDegenerates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bIgnoreRemoveDegenerates = { "bIgnoreRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCopyFromStaticMeshOptions), &Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bIgnoreRemoveDegenerates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRemoveDegenerates_MetaData), NewProp_bIgnoreRemoveDegenerates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bApplyBuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bRequestTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewProp_bIgnoreRemoveDegenerates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshCopyFromStaticMeshOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshCopyFromStaticMeshOptions),
	alignof(FRealtimeMeshCopyFromStaticMeshOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions ******************************

// ********** Begin Enum ERealtimeMeshCopyStaticMeshLODType ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType;
static UEnum* ERealtimeMeshCopyStaticMeshLODType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("ERealtimeMeshCopyStaticMeshLODType"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.OuterSingleton;
}
template<> REALTIMEMESHEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCopyStaticMeshLODType>()
{
	return ERealtimeMeshCopyStaticMeshLODType_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiResSourceModel.Name", "ERealtimeMeshCopyStaticMeshLODType::HiResSourceModel" },
		{ "MaxAvailable.Name", "ERealtimeMeshCopyStaticMeshLODType::MaxAvailable" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
		{ "RenderData.Name", "ERealtimeMeshCopyStaticMeshLODType::RenderData" },
		{ "SourceModel.Name", "ERealtimeMeshCopyStaticMeshLODType::SourceModel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshCopyStaticMeshLODType::MaxAvailable", (int64)ERealtimeMeshCopyStaticMeshLODType::MaxAvailable },
		{ "ERealtimeMeshCopyStaticMeshLODType::HiResSourceModel", (int64)ERealtimeMeshCopyStaticMeshLODType::HiResSourceModel },
		{ "ERealtimeMeshCopyStaticMeshLODType::SourceModel", (int64)ERealtimeMeshCopyStaticMeshLODType::SourceModel },
		{ "ERealtimeMeshCopyStaticMeshLODType::RenderData", (int64)ERealtimeMeshCopyStaticMeshLODType::RenderData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	"ERealtimeMeshCopyStaticMeshLODType",
	"ERealtimeMeshCopyStaticMeshLODType",
	Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.InnerSingleton, Z_Construct_UEnum_RealtimeMeshExt_ERealtimeMeshCopyStaticMeshLODType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType.InnerSingleton;
}
// ********** End Enum ERealtimeMeshCopyStaticMeshLODType ******************************************

// ********** Begin ScriptStruct FStreamSetStaticMeshConversionOptions *****************************
struct Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStreamSetStaticMeshConversionOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreamSetStaticMeshConversionOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""ERealtimeMeshCopyStaticMeshLODType LODType = ERealtimeMeshCopyStaticMeshLODType::MaxAvailable;*/" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       ERealtimeMeshCopyStaticMeshLODType LODType = ERealtimeMeshCopyStaticMeshLODType::MaxAvailable;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""bool bApplyBuildSettings = true;\n\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""bool bIgnoreRemoveDegenerates = true;*/" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       bool bApplyBuildSettings = true;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       bool bIgnoreRemoveDegenerates = true;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantUVs_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantVertexColors_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantPolyGroups_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreamSetStaticMeshConversionOptions constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static void NewProp_bWantTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTangents;
	static void NewProp_bWantUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantUVs;
	static void NewProp_bWantVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantVertexColors;
	static void NewProp_bWantPolyGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantPolyGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreamSetStaticMeshConversionOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamSetStaticMeshConversionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions;
class UScriptStruct* FStreamSetStaticMeshConversionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("StreamSetStaticMeshConversionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FStreamSetStaticMeshConversionOptions Property Definitions ********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamSetStaticMeshConversionOptions, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit(void* Obj)
{
	((FStreamSetStaticMeshConversionOptions*)Obj)->bWantTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantTangents = { "bWantTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantTangents_MetaData), NewProp_bWantTangents_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit(void* Obj)
{
	((FStreamSetStaticMeshConversionOptions*)Obj)->bWantUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantUVs = { "bWantUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantUVs_MetaData), NewProp_bWantUVs_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit(void* Obj)
{
	((FStreamSetStaticMeshConversionOptions*)Obj)->bWantVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors = { "bWantVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantVertexColors_MetaData), NewProp_bWantVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit(void* Obj)
{
	((FStreamSetStaticMeshConversionOptions*)Obj)->bWantPolyGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups = { "bWantPolyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamSetStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantPolyGroups_MetaData), NewProp_bWantPolyGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStreamSetStaticMeshConversionOptions Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"StreamSetStaticMeshConversionOptions",
	Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::PropPointers),
	sizeof(FStreamSetStaticMeshConversionOptions),
	alignof(FStreamSetStaticMeshConversionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.InnerSingleton, Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions.InnerSingleton);
}
// ********** End ScriptStruct FStreamSetStaticMeshConversionOptions *******************************

// ********** Begin ScriptStruct FRealtimeMeshStaticMeshConversionOptions **************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshStaticMeshConversionOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshStaticMeshConversionOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLODIndex_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""ERealtimeMeshCopyStaticMeshLODType LODType = ERealtimeMeshCopyStaticMeshLODType::MaxAvailable;*/" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       ERealtimeMeshCopyStaticMeshLODType LODType = ERealtimeMeshCopyStaticMeshLODType::MaxAvailable;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODIndex_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantUVs_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantVertexColors_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantPolyGroups_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsMaterials_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsDistanceField_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsLumenCards_MetaData[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshStaticMeshConversionOptions constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLODIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODIndex;
	static void NewProp_bWantTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTangents;
	static void NewProp_bWantUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantUVs;
	static void NewProp_bWantVertexColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantVertexColors;
	static void NewProp_bWantPolyGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantPolyGroups;
	static void NewProp_bWantsMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsMaterials;
	static void NewProp_bWantsDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsDistanceField;
	static void NewProp_bWantsLumenCards_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsLumenCards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshStaticMeshConversionOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshStaticMeshConversionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions;
class UScriptStruct* FRealtimeMeshStaticMeshConversionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshStaticMeshConversionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshStaticMeshConversionOptions Property Definitions *****
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_MinLODIndex = { "MinLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStaticMeshConversionOptions, MinLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLODIndex_MetaData), NewProp_MinLODIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_MaxLODIndex = { "MaxLODIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStaticMeshConversionOptions, MaxLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODIndex_MetaData), NewProp_MaxLODIndex_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantTangents = { "bWantTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantTangents_MetaData), NewProp_bWantTangents_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantUVs = { "bWantUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantUVs_MetaData), NewProp_bWantUVs_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantVertexColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors = { "bWantVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantVertexColors_MetaData), NewProp_bWantVertexColors_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantPolyGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups = { "bWantPolyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantPolyGroups_MetaData), NewProp_bWantPolyGroups_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsMaterials_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantsMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsMaterials = { "bWantsMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsMaterials_MetaData), NewProp_bWantsMaterials_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsDistanceField_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantsDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsDistanceField = { "bWantsDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsDistanceField_MetaData), NewProp_bWantsDistanceField_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsLumenCards_SetBit(void* Obj)
{
	((FRealtimeMeshStaticMeshConversionOptions*)Obj)->bWantsLumenCards = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsLumenCards = { "bWantsLumenCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStaticMeshConversionOptions), &Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsLumenCards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsLumenCards_MetaData), NewProp_bWantsLumenCards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_MinLODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_MaxLODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantVertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantPolyGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsDistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewProp_bWantsLumenCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshStaticMeshConversionOptions Property Definitions *******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshStaticMeshConversionOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshStaticMeshConversionOptions),
	alignof(FRealtimeMeshStaticMeshConversionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshStaticMeshConversionOptions ****************************

// ********** Begin Class URealtimeMeshStaticMeshConverter Function CopyRealtimeMeshFromStaticMesh *
struct Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics
{
	struct RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms
	{
		UStaticMesh* FromStaticMeshAsset;
		URealtimeMeshSimple* ToRealtimeMesh;
		FRealtimeMeshStaticMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		URealtimeMeshSimple* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Realtime Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyRealtimeMeshFromStaticMesh constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStaticMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToRealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyRealtimeMeshFromStaticMesh constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyRealtimeMeshFromStaticMesh Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_FromStaticMeshAsset = { "FromStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms, FromStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_ToRealtimeMesh = { "ToRealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms, ToRealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 3284939165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_FromStaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_ToRealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyRealtimeMeshFromStaticMesh Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStaticMeshConverter, nullptr, "CopyRealtimeMeshFromStaticMesh", 	Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshFromStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStaticMeshConverter::execCopyRealtimeMeshFromStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_FromStaticMeshAsset);
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_ToRealtimeMesh);
	P_GET_STRUCT(FRealtimeMeshStaticMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshSimple**)Z_Param__Result=URealtimeMeshStaticMeshConverter::CopyRealtimeMeshFromStaticMesh(Z_Param_FromStaticMeshAsset,Z_Param_ToRealtimeMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStaticMeshConverter Function CopyRealtimeMeshFromStaticMesh ***

// ********** Begin Class URealtimeMeshStaticMeshConverter Function CopyRealtimeMeshToStaticMesh ***
struct Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics
{
	struct RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms
	{
		URealtimeMeshSimple* FromRealtimeMesh;
		UStaticMesh* ToStaticMeshAsset;
		FRealtimeMeshStaticMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Static Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyRealtimeMeshToStaticMesh constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromRealtimeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStaticMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyRealtimeMeshToStaticMesh constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyRealtimeMeshToStaticMesh Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_FromRealtimeMesh = { "FromRealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms, FromRealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_ToStaticMeshAsset = { "ToStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms, ToStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 3284939165
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_FromRealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_ToStaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyRealtimeMeshToStaticMesh Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStaticMeshConverter, nullptr, "CopyRealtimeMeshToStaticMesh", 	Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyRealtimeMeshToStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStaticMeshConverter::execCopyRealtimeMeshToStaticMesh)
{
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_FromRealtimeMesh);
	P_GET_OBJECT(UStaticMesh,Z_Param_ToStaticMeshAsset);
	P_GET_STRUCT(FRealtimeMeshStaticMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=URealtimeMeshStaticMeshConverter::CopyRealtimeMeshToStaticMesh(Z_Param_FromRealtimeMesh,Z_Param_ToStaticMeshAsset,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStaticMeshConverter Function CopyRealtimeMeshToStaticMesh *****

// ********** Begin Class URealtimeMeshStaticMeshConverter Function CopyStreamSetFromStaticMesh ****
struct Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics
{
	struct RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms
	{
		UStaticMesh* FromStaticMeshAsset;
		URealtimeMeshStreamSet* ToStreamSet;
		FStreamSetStaticMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		URealtimeMeshStreamSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Stream Set" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyStreamSetFromStaticMesh constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStaticMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyStreamSetFromStaticMesh constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyStreamSetFromStaticMesh Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_FromStaticMeshAsset = { "FromStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms, FromStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_ToStreamSet = { "ToStreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms, ToStreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms, Options), Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 1191330225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_FromStaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_ToStreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyStreamSetFromStaticMesh Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStaticMeshConverter, nullptr, "CopyStreamSetFromStaticMesh", 	Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyStreamSetFromStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStaticMeshConverter::execCopyStreamSetFromStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_FromStaticMeshAsset);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_ToStreamSet);
	P_GET_STRUCT(FStreamSetStaticMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStreamSet**)Z_Param__Result=URealtimeMeshStaticMeshConverter::CopyStreamSetFromStaticMesh(Z_Param_FromStaticMeshAsset,Z_Param_ToStreamSet,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStaticMeshConverter Function CopyStreamSetFromStaticMesh ******

// ********** Begin Class URealtimeMeshStaticMeshConverter Function CopyStreamSetToStaticMesh ******
struct Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics
{
	struct RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms
	{
		URealtimeMeshStreamSet* FromStreamSet;
		UStaticMesh* ToStaticMeshAsset;
		FStreamSetStaticMeshConversionOptions Options;
		ERealtimeMeshOutcomePins Outcome;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Conversion" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Static Mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyStreamSetToStaticMesh constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromStreamSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToStaticMeshAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyStreamSetToStaticMesh constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyStreamSetToStaticMesh Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_FromStreamSet = { "FromStreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms, FromStreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_ToStaticMeshAsset = { "ToStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms, ToStaticMeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms, Options), Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions, METADATA_PARAMS(0, nullptr) }; // 1191330225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms, Outcome), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_FromStreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_ToStaticMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Outcome_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_Outcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function CopyStreamSetToStaticMesh Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStaticMeshConverter, nullptr, "CopyStreamSetToStaticMesh", 	Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::RealtimeMeshStaticMeshConverter_eventCopyStreamSetToStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStaticMeshConverter::execCopyStreamSetToStaticMesh)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_FromStreamSet);
	P_GET_OBJECT(UStaticMesh,Z_Param_ToStaticMeshAsset);
	P_GET_STRUCT(FStreamSetStaticMeshConversionOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Outcome);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=URealtimeMeshStaticMeshConverter::CopyStreamSetToStaticMesh(Z_Param_FromStreamSet,Z_Param_ToStaticMeshAsset,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Outcome));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStaticMeshConverter Function CopyStreamSetToStaticMesh ********

// ********** Begin Class URealtimeMeshStaticMeshConverter *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter;
UClass* URealtimeMeshStaticMeshConverter::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshStaticMeshConverter;
	if (!Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshStaticMeshConverter"),
			Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.InnerSingleton,
			StaticRegisterNativesURealtimeMeshStaticMeshConverter,
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
	return Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshStaticMeshConverter_NoRegister()
{
	return URealtimeMeshStaticMeshConverter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RealtimeMeshStaticMeshConverter.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshStaticMeshConverter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshStaticMeshConverter constinit property declarations *********
// ********** End Class URealtimeMeshStaticMeshConverter constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CopyRealtimeMeshFromStaticMesh"), .Pointer = &URealtimeMeshStaticMeshConverter::execCopyRealtimeMeshFromStaticMesh },
		{ .NameUTF8 = UTF8TEXT("CopyRealtimeMeshToStaticMesh"), .Pointer = &URealtimeMeshStaticMeshConverter::execCopyRealtimeMeshToStaticMesh },
		{ .NameUTF8 = UTF8TEXT("CopyStreamSetFromStaticMesh"), .Pointer = &URealtimeMeshStaticMeshConverter::execCopyStreamSetFromStaticMesh },
		{ .NameUTF8 = UTF8TEXT("CopyStreamSetToStaticMesh"), .Pointer = &URealtimeMeshStaticMeshConverter::execCopyStreamSetToStaticMesh },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshFromStaticMesh, "CopyRealtimeMeshFromStaticMesh" }, // 4181554979
		{ &Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyRealtimeMeshToStaticMesh, "CopyRealtimeMeshToStaticMesh" }, // 1258466582
		{ &Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetFromStaticMesh, "CopyStreamSetFromStaticMesh" }, // 4243154296
		{ &Z_Construct_UFunction_URealtimeMeshStaticMeshConverter_CopyStreamSetToStaticMesh, "CopyStreamSetToStaticMesh" }, // 3914659065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshStaticMeshConverter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::ClassParams = {
	&URealtimeMeshStaticMeshConverter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::Class_MetaDataParams)
};
void URealtimeMeshStaticMeshConverter::StaticRegisterNativesURealtimeMeshStaticMeshConverter()
{
	UClass* Class = URealtimeMeshStaticMeshConverter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshStaticMeshConverter()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.OuterSingleton, Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter.OuterSingleton;
}
URealtimeMeshStaticMeshConverter::URealtimeMeshStaticMeshConverter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshStaticMeshConverter);
URealtimeMeshStaticMeshConverter::~URealtimeMeshStaticMeshConverter() {}
// ********** End Class URealtimeMeshStaticMeshConverter *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshCopyStaticMeshLODType_StaticEnum, TEXT("ERealtimeMeshCopyStaticMeshLODType"), &Z_Registration_Info_UEnum_ERealtimeMeshCopyStaticMeshLODType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 487964403U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshCopyFromStaticMeshOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics::NewStructOps, TEXT("RealtimeMeshCopyFromStaticMeshOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshCopyFromStaticMeshOptions), 1906184569U) },
		{ FStreamSetStaticMeshConversionOptions::StaticStruct, Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics::NewStructOps, TEXT("StreamSetStaticMeshConversionOptions"),&Z_Registration_Info_UScriptStruct_FStreamSetStaticMeshConversionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamSetStaticMeshConversionOptions), 1191330225U) },
		{ FRealtimeMeshStaticMeshConversionOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics::NewStructOps, TEXT("RealtimeMeshStaticMeshConversionOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshStaticMeshConversionOptions), 3284939165U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshStaticMeshConverter, URealtimeMeshStaticMeshConverter::StaticClass, TEXT("URealtimeMeshStaticMeshConverter"), &Z_Registration_Info_UClass_URealtimeMeshStaticMeshConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshStaticMeshConverter), 1487467808U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_2799137946{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h__Script_RealtimeMeshExt_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
