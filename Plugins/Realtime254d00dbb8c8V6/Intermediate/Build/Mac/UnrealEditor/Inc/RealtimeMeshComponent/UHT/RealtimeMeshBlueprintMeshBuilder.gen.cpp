// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "RealtimeMeshNoExportTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshBlueprintMeshBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStream();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStream_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamPool();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamPool_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamUtils();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamUtils_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamKey();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERealtimeMeshSimpleStreamType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType;
static UEnum* ERealtimeMeshSimpleStreamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshSimpleStreamType"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSimpleStreamType>()
{
	return ERealtimeMeshSimpleStreamType_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * The data type of a stream for the blueprint interface\n */" },
		{ "Float.Name", "ERealtimeMeshSimpleStreamType::Float" },
		{ "HalfVector2.Name", "ERealtimeMeshSimpleStreamType::HalfVector2" },
		{ "Int16.Name", "ERealtimeMeshSimpleStreamType::Int16" },
		{ "Int32.Name", "ERealtimeMeshSimpleStreamType::Int32" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "PackedNormal.Name", "ERealtimeMeshSimpleStreamType::PackedNormal" },
		{ "PackedRGBA16N.Name", "ERealtimeMeshSimpleStreamType::PackedRGBA16N" },
		{ "ToolTip", "* The data type of a stream for the blueprint interface" },
		{ "Triangle16.Name", "ERealtimeMeshSimpleStreamType::Triangle16" },
		{ "Triangle32.Name", "ERealtimeMeshSimpleStreamType::Triangle32" },
		{ "UInt16.Name", "ERealtimeMeshSimpleStreamType::UInt16" },
		{ "UInt32.Name", "ERealtimeMeshSimpleStreamType::UInt32" },
		{ "Unknown.Name", "ERealtimeMeshSimpleStreamType::Unknown" },
		{ "Vector2.Name", "ERealtimeMeshSimpleStreamType::Vector2" },
		{ "Vector3.Name", "ERealtimeMeshSimpleStreamType::Vector3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshSimpleStreamType::Unknown", (int64)ERealtimeMeshSimpleStreamType::Unknown },
		{ "ERealtimeMeshSimpleStreamType::Int16", (int64)ERealtimeMeshSimpleStreamType::Int16 },
		{ "ERealtimeMeshSimpleStreamType::UInt16", (int64)ERealtimeMeshSimpleStreamType::UInt16 },
		{ "ERealtimeMeshSimpleStreamType::Int32", (int64)ERealtimeMeshSimpleStreamType::Int32 },
		{ "ERealtimeMeshSimpleStreamType::UInt32", (int64)ERealtimeMeshSimpleStreamType::UInt32 },
		{ "ERealtimeMeshSimpleStreamType::Float", (int64)ERealtimeMeshSimpleStreamType::Float },
		{ "ERealtimeMeshSimpleStreamType::Vector2", (int64)ERealtimeMeshSimpleStreamType::Vector2 },
		{ "ERealtimeMeshSimpleStreamType::Vector3", (int64)ERealtimeMeshSimpleStreamType::Vector3 },
		{ "ERealtimeMeshSimpleStreamType::HalfVector2", (int64)ERealtimeMeshSimpleStreamType::HalfVector2 },
		{ "ERealtimeMeshSimpleStreamType::PackedNormal", (int64)ERealtimeMeshSimpleStreamType::PackedNormal },
		{ "ERealtimeMeshSimpleStreamType::PackedRGBA16N", (int64)ERealtimeMeshSimpleStreamType::PackedRGBA16N },
		{ "ERealtimeMeshSimpleStreamType::Triangle16", (int64)ERealtimeMeshSimpleStreamType::Triangle16 },
		{ "ERealtimeMeshSimpleStreamType::Triangle32", (int64)ERealtimeMeshSimpleStreamType::Triangle32 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshSimpleStreamType",
	"ERealtimeMeshSimpleStreamType",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType.InnerSingleton;
}
// ********** End Enum ERealtimeMeshSimpleStreamType ***********************************************

// ********** Begin ScriptStruct FRealtimeMeshBasicVertex ******************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshBasicVertex); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshBasicVertex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Binormal_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshBasicVertex constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshBasicVertex constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshBasicVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex;
class UScriptStruct* FRealtimeMeshBasicVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("RealtimeMeshBasicVertex"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshBasicVertex Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Binormal = { "Binormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, Binormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Binormal_MetaData), NewProp_Binormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshBasicVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Binormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewProp_UV3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshBasicVertex Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	&NewStructOps,
	"RealtimeMeshBasicVertex",
	Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::PropPointers),
	sizeof(FRealtimeMeshBasicVertex),
	alignof(FRealtimeMeshBasicVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshBasicVertex ********************************************

// ********** Begin Enum ERealtimeMeshSimpleStreamConfig *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig;
static UEnum* ERealtimeMeshSimpleStreamConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("ERealtimeMeshSimpleStreamConfig"));
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.OuterSingleton;
}
template<> REALTIMEMESHCOMPONENT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshSimpleStreamConfig>()
{
	return ERealtimeMeshSimpleStreamConfig_StaticEnum();
}
struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HighPrecision.Name", "ERealtimeMeshSimpleStreamConfig::HighPrecision" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "None.Name", "ERealtimeMeshSimpleStreamConfig::None" },
		{ "Normal.Name", "ERealtimeMeshSimpleStreamConfig::Normal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERealtimeMeshSimpleStreamConfig::None", (int64)ERealtimeMeshSimpleStreamConfig::None },
		{ "ERealtimeMeshSimpleStreamConfig::Normal", (int64)ERealtimeMeshSimpleStreamConfig::Normal },
		{ "ERealtimeMeshSimpleStreamConfig::HighPrecision", (int64)ERealtimeMeshSimpleStreamConfig::HighPrecision },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	"ERealtimeMeshSimpleStreamConfig",
	"ERealtimeMeshSimpleStreamConfig",
	Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig()
{
	if (!Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.InnerSingleton, Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig.InnerSingleton;
}
// ********** End Enum ERealtimeMeshSimpleStreamConfig *********************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamRowPtr *****************************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshStreamRowPtr); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshStreamRowPtr); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshStreamRowPtr constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshStreamRowPtr constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshStreamRowPtr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr;
class UScriptStruct* FRealtimeMeshStreamRowPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("RealtimeMeshStreamRowPtr"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshStreamRowPtr Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamRowPtr, Stream), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamRowPtr, RowIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowIndex_MetaData), NewProp_RowIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::NewProp_RowIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshStreamRowPtr Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	&NewStructOps,
	"RealtimeMeshStreamRowPtr",
	Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::PropPointers),
	sizeof(FRealtimeMeshStreamRowPtr),
	alignof(FRealtimeMeshStreamRowPtr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshStreamRowPtr *******************************************

// ********** Begin Class URealtimeMeshStream Function AddFloat ************************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics
{
	struct RealtimeMeshStream_eventAddFloat_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		float NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFloat constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFloat Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddFloat_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddFloat_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddFloat_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::PropPointers) < 2048);
// ********** End Function AddFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddFloat", 	Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::RealtimeMeshStream_eventAddFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::RealtimeMeshStream_eventAddFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddFloat)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddFloat(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddFloat **************************************

// ********** Begin Class URealtimeMeshStream Function AddInt **************************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics
{
	struct RealtimeMeshStream_eventAddInt_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddInt constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddInt constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddInt Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddInt_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddInt_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddInt_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::PropPointers) < 2048);
// ********** End Function AddInt Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddInt", 	Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::RealtimeMeshStream_eventAddInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::RealtimeMeshStream_eventAddInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddInt)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddInt(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddInt ****************************************

// ********** Begin Class URealtimeMeshStream Function AddUninitialized ****************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics
{
	struct RealtimeMeshStream_eventAddUninitialized_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 NumToAdd;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddUninitialized constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddUninitialized constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddUninitialized Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddUninitialized_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddUninitialized_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_NumToAdd = { "NumToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddUninitialized_Parms, NumToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddUninitialized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_NumToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::PropPointers) < 2048);
// ********** End Function AddUninitialized Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddUninitialized", 	Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::RealtimeMeshStream_eventAddUninitialized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::RealtimeMeshStream_eventAddUninitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddUninitialized)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddUninitialized(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NumToAdd);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddUninitialized ******************************

// ********** Begin Class URealtimeMeshStream Function AddVector2 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics
{
	struct RealtimeMeshStream_eventAddVector2_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		FVector2D NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddVector2 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVector2 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVector2 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector2_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector2_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector2_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::PropPointers) < 2048);
// ********** End Function AddVector2 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddVector2", 	Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::RealtimeMeshStream_eventAddVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::RealtimeMeshStream_eventAddVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddVector2)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_STRUCT(FVector2D,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddVector2(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddVector2 ************************************

// ********** Begin Class URealtimeMeshStream Function AddVector3 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics
{
	struct RealtimeMeshStream_eventAddVector3_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		FVector NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddVector3 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVector3 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVector3 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector3_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector3_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector3_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector3_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::PropPointers) < 2048);
// ********** End Function AddVector3 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddVector3", 	Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::RealtimeMeshStream_eventAddVector3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::RealtimeMeshStream_eventAddVector3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddVector3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddVector3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddVector3)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_STRUCT(FVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddVector3(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddVector3 ************************************

// ********** Begin Class URealtimeMeshStream Function AddVector4 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics
{
	struct RealtimeMeshStream_eventAddVector4_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		FVector4 NewValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddVector4 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVector4 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVector4 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector4_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector4_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector4_Parms, NewValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddVector4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::PropPointers) < 2048);
// ********** End Function AddVector4 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddVector4", 	Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::RealtimeMeshStream_eventAddVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::RealtimeMeshStream_eventAddVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddVector4)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_STRUCT(FVector4,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddVector4(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddVector4 ************************************

// ********** Begin Class URealtimeMeshStream Function AddZeroed ***********************************
struct Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics
{
	struct RealtimeMeshStream_eventAddZeroed_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 NumToAdd;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddZeroed constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddZeroed constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddZeroed Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddZeroed_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddZeroed_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_NumToAdd = { "NumToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddZeroed_Parms, NumToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventAddZeroed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_NumToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::PropPointers) < 2048);
// ********** End Function AddZeroed Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "AddZeroed", 	Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::RealtimeMeshStream_eventAddZeroed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::RealtimeMeshStream_eventAddZeroed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_AddZeroed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_AddZeroed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execAddZeroed)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddZeroed(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_NumToAdd);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function AddZeroed *************************************

// ********** Begin Class URealtimeMeshStream Function EditRow *************************************
struct Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics
{
	struct RealtimeMeshStream_eventEditRow_Parms
	{
		URealtimeMeshStream* Builder;
		int32 Index;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EditRow constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EditRow constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EditRow Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventEditRow_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventEditRow_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventEditRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::PropPointers) < 2048);
// ********** End Function EditRow Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "EditRow", 	Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::RealtimeMeshStream_eventEditRow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::RealtimeMeshStream_eventEditRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_EditRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_EditRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execEditRow)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=P_THIS->EditRow(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function EditRow ***************************************

// ********** Begin Class URealtimeMeshStream Function Empty ***************************************
struct Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics
{
	struct RealtimeMeshStream_eventEmpty_Parms
	{
		URealtimeMeshStream* Builder;
		int32 ExpectedSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_ExpectedSize", "0" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Empty constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Empty constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Empty Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventEmpty_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::NewProp_ExpectedSize = { "ExpectedSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventEmpty_Parms, ExpectedSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::NewProp_ExpectedSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::PropPointers) < 2048);
// ********** End Function Empty Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "Empty", 	Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::RealtimeMeshStream_eventEmpty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::RealtimeMeshStream_eventEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_Empty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_Empty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execEmpty)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Empty(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_ExpectedSize);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function Empty *****************************************

// ********** Begin Class URealtimeMeshStream Function GetFloat ************************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics
{
	struct RealtimeMeshStream_eventGetFloat_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloat Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetFloat_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetFloat_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::PropPointers) < 2048);
// ********** End Function GetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetFloat", 	Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::RealtimeMeshStream_eventGetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::RealtimeMeshStream_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetFloat)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloat(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetFloat **************************************

// ********** Begin Class URealtimeMeshStream Function GetInt **************************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics
{
	struct RealtimeMeshStream_eventGetInt_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInt constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInt constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInt Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetInt_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetInt_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::PropPointers) < 2048);
// ********** End Function GetInt Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetInt", 	Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::RealtimeMeshStream_eventGetInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::RealtimeMeshStream_eventGetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetInt)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInt(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetInt ****************************************

// ********** Begin Class URealtimeMeshStream Function GetNum **************************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics
{
	struct RealtimeMeshStream_eventGetNum_Parms
	{
		URealtimeMeshStream* Builder;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNum constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNum constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNum Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetNum_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::PropPointers) < 2048);
// ********** End Function GetNum Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetNum", 	Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::RealtimeMeshStream_eventGetNum_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::RealtimeMeshStream_eventGetNum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetNum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetNum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetNum)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNum(P_ARG_GC_BARRIER(Z_Param_Out_Builder));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetNum ****************************************

// ********** Begin Class URealtimeMeshStream Function GetVector2 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics
{
	struct RealtimeMeshStream_eventGetVector2_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector2 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector2 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector2 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector2_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector2_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector2_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector2_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::PropPointers) < 2048);
// ********** End Function GetVector2 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetVector2", 	Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::RealtimeMeshStream_eventGetVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::RealtimeMeshStream_eventGetVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetVector2)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetVector2(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetVector2 ************************************

// ********** Begin Class URealtimeMeshStream Function GetVector3 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics
{
	struct RealtimeMeshStream_eventGetVector3_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector3 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector3 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector3 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector3_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector3_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector3_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector3_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::PropPointers) < 2048);
// ********** End Function GetVector3 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetVector3", 	Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::RealtimeMeshStream_eventGetVector3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::RealtimeMeshStream_eventGetVector3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetVector3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetVector3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetVector3)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVector3(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetVector3 ************************************

// ********** Begin Class URealtimeMeshStream Function GetVector4 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics
{
	struct RealtimeMeshStream_eventGetVector4_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector4 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector4 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector4 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector4_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector4_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector4_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventGetVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::PropPointers) < 2048);
// ********** End Function GetVector4 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "GetVector4", 	Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::RealtimeMeshStream_eventGetVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::RealtimeMeshStream_eventGetVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_GetVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_GetVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execGetVector4)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=P_THIS->GetVector4(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function GetVector4 ************************************

// ********** Begin Class URealtimeMeshStream Function IsEmpty *************************************
struct Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics
{
	struct RealtimeMeshStream_eventIsEmpty_Parms
	{
		URealtimeMeshStream* Builder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsEmpty constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEmpty constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEmpty Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventIsEmpty_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshStream_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshStream_eventIsEmpty_Parms), &Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::PropPointers) < 2048);
// ********** End Function IsEmpty Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "IsEmpty", 	Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::RealtimeMeshStream_eventIsEmpty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::RealtimeMeshStream_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execIsEmpty)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty(P_ARG_GC_BARRIER(Z_Param_Out_Builder));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function IsEmpty ***************************************

// ********** Begin Class URealtimeMeshStream Function IsIndexValid ********************************
struct Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics
{
	struct RealtimeMeshStream_eventIsIndexValid_Parms
	{
		URealtimeMeshStream* Builder;
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsIndexValid constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsIndexValid constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsIndexValid Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventIsIndexValid_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventIsIndexValid_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshStream_eventIsIndexValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshStream_eventIsIndexValid_Parms), &Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::PropPointers) < 2048);
// ********** End Function IsIndexValid Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "IsIndexValid", 	Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::RealtimeMeshStream_eventIsIndexValid_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::RealtimeMeshStream_eventIsIndexValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execIsIndexValid)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIndexValid(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function IsIndexValid **********************************

// ********** Begin Class URealtimeMeshStream Function Reserve *************************************
struct Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics
{
	struct RealtimeMeshStream_eventReserve_Parms
	{
		URealtimeMeshStream* Builder;
		int32 ExpectedSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Reserve constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Reserve constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Reserve Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventReserve_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::NewProp_ExpectedSize = { "ExpectedSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventReserve_Parms, ExpectedSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::NewProp_ExpectedSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::PropPointers) < 2048);
// ********** End Function Reserve Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "Reserve", 	Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::RealtimeMeshStream_eventReserve_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::RealtimeMeshStream_eventReserve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_Reserve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_Reserve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execReserve)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reserve(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_ExpectedSize);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function Reserve ***************************************

// ********** Begin Class URealtimeMeshStream Function SetFloat ************************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics
{
	struct RealtimeMeshStream_eventSetFloat_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFloat Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetFloat_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetFloat_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetFloat_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::PropPointers) < 2048);
// ********** End Function SetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetFloat", 	Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::RealtimeMeshStream_eventSetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::RealtimeMeshStream_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetFloat)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloat(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetFloat **************************************

// ********** Begin Class URealtimeMeshStream Function SetInt **************************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics
{
	struct RealtimeMeshStream_eventSetInt_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInt constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInt constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInt Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetInt_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetInt_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetInt_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::PropPointers) < 2048);
// ********** End Function SetInt Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetInt", 	Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::RealtimeMeshStream_eventSetInt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::RealtimeMeshStream_eventSetInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetInt)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInt(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetInt ****************************************

// ********** Begin Class URealtimeMeshStream Function SetNumUninitialized *************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics
{
	struct RealtimeMeshStream_eventSetNumUninitialized_Parms
	{
		URealtimeMeshStream* Builder;
		int32 NewNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNumUninitialized constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNumUninitialized constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNumUninitialized Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetNumUninitialized_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetNumUninitialized_Parms, NewNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::NewProp_NewNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::PropPointers) < 2048);
// ********** End Function SetNumUninitialized Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetNumUninitialized", 	Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::RealtimeMeshStream_eventSetNumUninitialized_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::RealtimeMeshStream_eventSetNumUninitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetNumUninitialized)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumUninitialized(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_NewNum);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetNumUninitialized ***************************

// ********** Begin Class URealtimeMeshStream Function SetNumZeroed ********************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics
{
	struct RealtimeMeshStream_eventSetNumZeroed_Parms
	{
		URealtimeMeshStream* Builder;
		int32 NewNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNumZeroed constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNumZeroed constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNumZeroed Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetNumZeroed_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::NewProp_NewNum = { "NewNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetNumZeroed_Parms, NewNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::NewProp_NewNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::PropPointers) < 2048);
// ********** End Function SetNumZeroed Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetNumZeroed", 	Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::RealtimeMeshStream_eventSetNumZeroed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::RealtimeMeshStream_eventSetNumZeroed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetNumZeroed)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumZeroed(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_NewNum);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetNumZeroed **********************************

// ********** Begin Class URealtimeMeshStream Function SetVector2 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics
{
	struct RealtimeMeshStream_eventSetVector2_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector2D NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector2 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector2 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector2 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector2_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector2_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector2_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector2_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::PropPointers) < 2048);
// ********** End Function SetVector2 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetVector2", 	Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::RealtimeMeshStream_eventSetVector2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::RealtimeMeshStream_eventSetVector2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetVector2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetVector2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetVector2)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector2D,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVector2(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetVector2 ************************************

// ********** Begin Class URealtimeMeshStream Function SetVector3 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics
{
	struct RealtimeMeshStream_eventSetVector3_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector3 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector3 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector3 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector3_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector3_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector3_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector3_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::PropPointers) < 2048);
// ********** End Function SetVector3 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetVector3", 	Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::RealtimeMeshStream_eventSetVector3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::RealtimeMeshStream_eventSetVector3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetVector3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetVector3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetVector3)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVector3(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetVector3 ************************************

// ********** Begin Class URealtimeMeshStream Function SetVector4 **********************************
struct Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics
{
	struct RealtimeMeshStream_eventSetVector4_Parms
	{
		URealtimeMeshStream* Builder;
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		FVector4 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector4 constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector4 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector4 Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector4_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector4_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector4_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventSetVector4_Parms, NewValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::PropPointers) < 2048);
// ********** End Function SetVector4 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "SetVector4", 	Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::RealtimeMeshStream_eventSetVector4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::RealtimeMeshStream_eventSetVector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_SetVector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_SetVector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execSetVector4)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector4,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVector4(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Row,Z_Param_Index,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function SetVector4 ************************************

// ********** Begin Class URealtimeMeshStream Function Shrink **************************************
struct Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics
{
	struct RealtimeMeshStream_eventShrink_Parms
	{
		URealtimeMeshStream* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Shrink constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Shrink constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Shrink Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStream_eventShrink_Parms, Builder), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::PropPointers) < 2048);
// ********** End Function Shrink Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStream, nullptr, "Shrink", 	Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::RealtimeMeshStream_eventShrink_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::RealtimeMeshStream_eventShrink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStream_Shrink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStream_Shrink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStream::execShrink)
{
	P_GET_OBJECT_REF(URealtimeMeshStream,Z_Param_Out_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Shrink(P_ARG_GC_BARRIER(Z_Param_Out_Builder));
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStream Function Shrink ****************************************

// ********** Begin Class URealtimeMeshStream ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshStream;
UClass* URealtimeMeshStream::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshStream;
	if (!Z_Registration_Info_UClass_URealtimeMeshStream.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshStream"),
			Z_Registration_Info_UClass_URealtimeMeshStream.InnerSingleton,
			StaticRegisterNativesURealtimeMeshStream,
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
	return Z_Registration_Info_UClass_URealtimeMeshStream.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshStream_NoRegister()
{
	return URealtimeMeshStream::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshStream constinit property declarations **********************
// ********** End Class URealtimeMeshStream constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddFloat"), .Pointer = &URealtimeMeshStream::execAddFloat },
		{ .NameUTF8 = UTF8TEXT("AddInt"), .Pointer = &URealtimeMeshStream::execAddInt },
		{ .NameUTF8 = UTF8TEXT("AddUninitialized"), .Pointer = &URealtimeMeshStream::execAddUninitialized },
		{ .NameUTF8 = UTF8TEXT("AddVector2"), .Pointer = &URealtimeMeshStream::execAddVector2 },
		{ .NameUTF8 = UTF8TEXT("AddVector3"), .Pointer = &URealtimeMeshStream::execAddVector3 },
		{ .NameUTF8 = UTF8TEXT("AddVector4"), .Pointer = &URealtimeMeshStream::execAddVector4 },
		{ .NameUTF8 = UTF8TEXT("AddZeroed"), .Pointer = &URealtimeMeshStream::execAddZeroed },
		{ .NameUTF8 = UTF8TEXT("EditRow"), .Pointer = &URealtimeMeshStream::execEditRow },
		{ .NameUTF8 = UTF8TEXT("Empty"), .Pointer = &URealtimeMeshStream::execEmpty },
		{ .NameUTF8 = UTF8TEXT("GetFloat"), .Pointer = &URealtimeMeshStream::execGetFloat },
		{ .NameUTF8 = UTF8TEXT("GetInt"), .Pointer = &URealtimeMeshStream::execGetInt },
		{ .NameUTF8 = UTF8TEXT("GetNum"), .Pointer = &URealtimeMeshStream::execGetNum },
		{ .NameUTF8 = UTF8TEXT("GetVector2"), .Pointer = &URealtimeMeshStream::execGetVector2 },
		{ .NameUTF8 = UTF8TEXT("GetVector3"), .Pointer = &URealtimeMeshStream::execGetVector3 },
		{ .NameUTF8 = UTF8TEXT("GetVector4"), .Pointer = &URealtimeMeshStream::execGetVector4 },
		{ .NameUTF8 = UTF8TEXT("IsEmpty"), .Pointer = &URealtimeMeshStream::execIsEmpty },
		{ .NameUTF8 = UTF8TEXT("IsIndexValid"), .Pointer = &URealtimeMeshStream::execIsIndexValid },
		{ .NameUTF8 = UTF8TEXT("Reserve"), .Pointer = &URealtimeMeshStream::execReserve },
		{ .NameUTF8 = UTF8TEXT("SetFloat"), .Pointer = &URealtimeMeshStream::execSetFloat },
		{ .NameUTF8 = UTF8TEXT("SetInt"), .Pointer = &URealtimeMeshStream::execSetInt },
		{ .NameUTF8 = UTF8TEXT("SetNumUninitialized"), .Pointer = &URealtimeMeshStream::execSetNumUninitialized },
		{ .NameUTF8 = UTF8TEXT("SetNumZeroed"), .Pointer = &URealtimeMeshStream::execSetNumZeroed },
		{ .NameUTF8 = UTF8TEXT("SetVector2"), .Pointer = &URealtimeMeshStream::execSetVector2 },
		{ .NameUTF8 = UTF8TEXT("SetVector3"), .Pointer = &URealtimeMeshStream::execSetVector3 },
		{ .NameUTF8 = UTF8TEXT("SetVector4"), .Pointer = &URealtimeMeshStream::execSetVector4 },
		{ .NameUTF8 = UTF8TEXT("Shrink"), .Pointer = &URealtimeMeshStream::execShrink },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddFloat, "AddFloat" }, // 1303261845
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddInt, "AddInt" }, // 4040377270
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddUninitialized, "AddUninitialized" }, // 3089848071
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddVector2, "AddVector2" }, // 3258586664
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddVector3, "AddVector3" }, // 411800830
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddVector4, "AddVector4" }, // 4007474848
		{ &Z_Construct_UFunction_URealtimeMeshStream_AddZeroed, "AddZeroed" }, // 2303366507
		{ &Z_Construct_UFunction_URealtimeMeshStream_EditRow, "EditRow" }, // 3274141625
		{ &Z_Construct_UFunction_URealtimeMeshStream_Empty, "Empty" }, // 3358814249
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetFloat, "GetFloat" }, // 2717635167
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetInt, "GetInt" }, // 621232993
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetNum, "GetNum" }, // 4186196164
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetVector2, "GetVector2" }, // 3293746885
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetVector3, "GetVector3" }, // 937930835
		{ &Z_Construct_UFunction_URealtimeMeshStream_GetVector4, "GetVector4" }, // 2098272554
		{ &Z_Construct_UFunction_URealtimeMeshStream_IsEmpty, "IsEmpty" }, // 1891247613
		{ &Z_Construct_UFunction_URealtimeMeshStream_IsIndexValid, "IsIndexValid" }, // 898440417
		{ &Z_Construct_UFunction_URealtimeMeshStream_Reserve, "Reserve" }, // 821221337
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetFloat, "SetFloat" }, // 521740047
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetInt, "SetInt" }, // 586950589
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetNumUninitialized, "SetNumUninitialized" }, // 1854524594
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetNumZeroed, "SetNumZeroed" }, // 2628710972
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetVector2, "SetVector2" }, // 520699081
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetVector3, "SetVector3" }, // 3896894661
		{ &Z_Construct_UFunction_URealtimeMeshStream_SetVector4, "SetVector4" }, // 2764209958
		{ &Z_Construct_UFunction_URealtimeMeshStream_Shrink, "Shrink" }, // 2958835577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshStream>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshStream_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshStream_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStream_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshStream_Statics::ClassParams = {
	&URealtimeMeshStream::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStream_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshStream_Statics::Class_MetaDataParams)
};
void URealtimeMeshStream::StaticRegisterNativesURealtimeMeshStream()
{
	UClass* Class = URealtimeMeshStream::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshStream_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshStream()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshStream.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshStream.OuterSingleton, Z_Construct_UClass_URealtimeMeshStream_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshStream.OuterSingleton;
}
URealtimeMeshStream::URealtimeMeshStream(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshStream);
URealtimeMeshStream::~URealtimeMeshStream() {}
// ********** End Class URealtimeMeshStream ********************************************************

// ********** Begin Class URealtimeMeshStreamSet Function AddStream ********************************
struct Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics
{
	struct RealtimeMeshStreamSet_eventAddStream_Parms
	{
		URealtimeMeshStream* Stream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStream constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStream constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStream Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventAddStream_Parms, Stream), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::NewProp_Stream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::PropPointers) < 2048);
// ********** End Function AddStream Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamSet, nullptr, "AddStream", 	Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::RealtimeMeshStreamSet_eventAddStream_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::RealtimeMeshStreamSet_eventAddStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamSet::execAddStream)
{
	P_GET_OBJECT(URealtimeMeshStream,Z_Param_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStream(Z_Param_Stream);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamSet Function AddStream **********************************

// ********** Begin Class URealtimeMeshStreamSet Function MakeLocalMeshBuilder *********************
struct Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics
{
	struct RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms
	{
		ERealtimeMeshSimpleStreamConfig WantedTangents;
		ERealtimeMeshSimpleStreamConfig WantedTexCoords;
		bool bWants32BitIndices;
		ERealtimeMeshSimpleStreamConfig WantedPolyGroupType;
		bool bWantsColors;
		int32 WantedTexCoordChannels;
		bool bKeepExistingData;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bKeepExistingData", "true" },
		{ "CPP_Default_bWants32BitIndices", "false" },
		{ "CPP_Default_bWantsColors", "true" },
		{ "CPP_Default_WantedPolyGroupType", "None" },
		{ "CPP_Default_WantedTangents", "Normal" },
		{ "CPP_Default_WantedTexCoordChannels", "1" },
		{ "CPP_Default_WantedTexCoords", "Normal" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeLocalMeshBuilder constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTangents_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTexCoords_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTexCoords;
	static void NewProp_bWants32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedPolyGroupType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedPolyGroupType;
	static void NewProp_bWantsColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsColors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WantedTexCoordChannels;
	static void NewProp_bKeepExistingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepExistingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeLocalMeshBuilder constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeLocalMeshBuilder Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTangents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTangents = { "WantedTangents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms, WantedTangents), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoords_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoords = { "WantedTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms, WantedTexCoords), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
{
	((RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms*)Obj)->bWants32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms), &Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedPolyGroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedPolyGroupType = { "WantedPolyGroupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms, WantedPolyGroupType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWantsColors_SetBit(void* Obj)
{
	((RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms*)Obj)->bWantsColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWantsColors = { "bWantsColors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms), &Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWantsColors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoordChannels = { "WantedTexCoordChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms, WantedTexCoordChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bKeepExistingData_SetBit(void* Obj)
{
	((RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms*)Obj)->bKeepExistingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bKeepExistingData = { "bKeepExistingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms), &Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bKeepExistingData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTangents_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoords_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWants32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedPolyGroupType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedPolyGroupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bWantsColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_WantedTexCoordChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_bKeepExistingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::PropPointers) < 2048);
// ********** End Function MakeLocalMeshBuilder Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamSet, nullptr, "MakeLocalMeshBuilder", 	Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::RealtimeMeshStreamSet_eventMakeLocalMeshBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamSet::execMakeLocalMeshBuilder)
{
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTangents);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTexCoords);
	P_GET_UBOOL(Z_Param_bWants32BitIndices);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedPolyGroupType);
	P_GET_UBOOL(Z_Param_bWantsColors);
	P_GET_PROPERTY(FIntProperty,Z_Param_WantedTexCoordChannels);
	P_GET_UBOOL(Z_Param_bKeepExistingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->MakeLocalMeshBuilder(ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTangents),ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTexCoords),Z_Param_bWants32BitIndices,ERealtimeMeshSimpleStreamConfig(Z_Param_WantedPolyGroupType),Z_Param_bWantsColors,Z_Param_WantedTexCoordChannels,Z_Param_bKeepExistingData);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamSet Function MakeLocalMeshBuilder ***********************

// ********** Begin Class URealtimeMeshStreamSet Function RemoveStream *****************************
struct Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	struct RealtimeMeshStreamSet_eventRemoveStream_Parms
	{
		FRealtimeMeshStreamKey StreamKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveStream constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveStream constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveStream Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamSet_eventRemoveStream_Parms, StreamKey), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamKey_MetaData), NewProp_StreamKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::NewProp_StreamKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::PropPointers) < 2048);
// ********** End Function RemoveStream Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamSet, nullptr, "RemoveStream", 	Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::RealtimeMeshStreamSet_eventRemoveStream_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::RealtimeMeshStreamSet_eventRemoveStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamSet::execRemoveStream)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamKey,Z_Param_Out_StreamKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStream(Z_Param_Out_StreamKey);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamSet Function RemoveStream *******************************

// ********** Begin Class URealtimeMeshStreamSet Function Reset ************************************
struct Z_Construct_UFunction_URealtimeMeshStreamSet_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Reset constinit property declarations *********************************
// ********** End Function Reset constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamSet_Reset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamSet, nullptr, "Reset", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamSet_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamSet_Reset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshStreamSet_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamSet_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamSet::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamSet Function Reset **************************************

// ********** Begin Class URealtimeMeshStreamSet ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshStreamSet;
UClass* URealtimeMeshStreamSet::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshStreamSet;
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshStreamSet"),
			Z_Registration_Info_UClass_URealtimeMeshStreamSet.InnerSingleton,
			StaticRegisterNativesURealtimeMeshStreamSet,
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
	return Z_Registration_Info_UClass_URealtimeMeshStreamSet.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister()
{
	return URealtimeMeshStreamSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshStreamSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ReSharper disable UnrealHeaderToolError\n" },
		{ "IncludePath", "Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "ReSharper disable UnrealHeaderToolError" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshStreamSet constinit property declarations *******************
// ********** End Class URealtimeMeshStreamSet constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddStream"), .Pointer = &URealtimeMeshStreamSet::execAddStream },
		{ .NameUTF8 = UTF8TEXT("MakeLocalMeshBuilder"), .Pointer = &URealtimeMeshStreamSet::execMakeLocalMeshBuilder },
		{ .NameUTF8 = UTF8TEXT("RemoveStream"), .Pointer = &URealtimeMeshStreamSet::execRemoveStream },
		{ .NameUTF8 = UTF8TEXT("Reset"), .Pointer = &URealtimeMeshStreamSet::execReset },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshStreamSet_AddStream, "AddStream" }, // 3374349778
		{ &Z_Construct_UFunction_URealtimeMeshStreamSet_MakeLocalMeshBuilder, "MakeLocalMeshBuilder" }, // 1601971153
		{ &Z_Construct_UFunction_URealtimeMeshStreamSet_RemoveStream, "RemoveStream" }, // 3042148257
		{ &Z_Construct_UFunction_URealtimeMeshStreamSet_Reset, "Reset" }, // 2635443063
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshStreamSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshStreamSet_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshStreamSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshStreamSet_Statics::ClassParams = {
	&URealtimeMeshStreamSet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshStreamSet_Statics::Class_MetaDataParams)
};
void URealtimeMeshStreamSet::StaticRegisterNativesURealtimeMeshStreamSet()
{
	UClass* Class = URealtimeMeshStreamSet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshStreamSet_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshStreamSet()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshStreamSet.OuterSingleton, Z_Construct_UClass_URealtimeMeshStreamSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshStreamSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshStreamSet);
URealtimeMeshStreamSet::~URealtimeMeshStreamSet() {}
// ********** End Class URealtimeMeshStreamSet *****************************************************

// ********** Begin Class URealtimeMeshLocalBuilder Function AddTriangle ***************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics
{
	struct RealtimeMeshLocalBuilder_eventAddTriangle_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		int32 UV0;
		int32 UV1;
		int32 UV2;
		int32 PolyGroupIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_PolyGroupIndex", "0" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTriangle constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyGroupIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTriangle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTriangle Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, UV0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, UV1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, UV2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_PolyGroupIndex = { "PolyGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, PolyGroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddTriangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_PolyGroupIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::PropPointers) < 2048);
// ********** End Function AddTriangle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "AddTriangle", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::RealtimeMeshLocalBuilder_eventAddTriangle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::RealtimeMeshLocalBuilder_eventAddTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execAddTriangle)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV0);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV1);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV2);
	P_GET_PROPERTY(FIntProperty,Z_Param_PolyGroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddTriangle(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_UV0,Z_Param_UV1,Z_Param_UV2,Z_Param_PolyGroupIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function AddTriangle *****************************

// ********** Begin Class URealtimeMeshLocalBuilder Function AddVertex *****************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics
{
	struct RealtimeMeshLocalBuilder_eventAddVertex_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		FRealtimeMeshBasicVertex Vertex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddVertex constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddVertex constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddVertex Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddVertex_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_Vertex = { "Vertex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddVertex_Parms, Vertex), Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertex_MetaData), NewProp_Vertex_MetaData) }; // 1973373337
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventAddVertex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_Vertex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::PropPointers) < 2048);
// ********** End Function AddVertex Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "AddVertex", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::RealtimeMeshLocalBuilder_eventAddVertex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::RealtimeMeshLocalBuilder_eventAddVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execAddVertex)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_STRUCT_REF(FRealtimeMeshBasicVertex,Z_Param_Out_Vertex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddVertex(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Out_Vertex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function AddVertex *******************************

// ********** Begin Class URealtimeMeshLocalBuilder Function DisableColors *************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics
{
	struct RealtimeMeshLocalBuilder_eventDisableColors_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableColors constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableColors constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableColors Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventDisableColors_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::PropPointers) < 2048);
// ********** End Function DisableColors Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "DisableColors", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::RealtimeMeshLocalBuilder_eventDisableColors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::RealtimeMeshLocalBuilder_eventDisableColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execDisableColors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->DisableColors();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function DisableColors ***************************

// ********** Begin Class URealtimeMeshLocalBuilder Function DisableDepthOnlyTriangles *************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics
{
	struct RealtimeMeshLocalBuilder_eventDisableDepthOnlyTriangles_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableDepthOnlyTriangles constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableDepthOnlyTriangles constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableDepthOnlyTriangles Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventDisableDepthOnlyTriangles_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::PropPointers) < 2048);
// ********** End Function DisableDepthOnlyTriangles Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "DisableDepthOnlyTriangles", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::RealtimeMeshLocalBuilder_eventDisableDepthOnlyTriangles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::RealtimeMeshLocalBuilder_eventDisableDepthOnlyTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execDisableDepthOnlyTriangles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->DisableDepthOnlyTriangles();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function DisableDepthOnlyTriangles ***************

// ********** Begin Class URealtimeMeshLocalBuilder Function DisablePolyGroups *********************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics
{
	struct RealtimeMeshLocalBuilder_eventDisablePolyGroups_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisablePolyGroups constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisablePolyGroups constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisablePolyGroups Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventDisablePolyGroups_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::PropPointers) < 2048);
// ********** End Function DisablePolyGroups Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "DisablePolyGroups", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::RealtimeMeshLocalBuilder_eventDisablePolyGroups_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::RealtimeMeshLocalBuilder_eventDisablePolyGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execDisablePolyGroups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->DisablePolyGroups();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function DisablePolyGroups ***********************

// ********** Begin Class URealtimeMeshLocalBuilder Function DisableTangents ***********************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics
{
	struct RealtimeMeshLocalBuilder_eventDisableTangents_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableTangents constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableTangents constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableTangents Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventDisableTangents_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::PropPointers) < 2048);
// ********** End Function DisableTangents Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "DisableTangents", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::RealtimeMeshLocalBuilder_eventDisableTangents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::RealtimeMeshLocalBuilder_eventDisableTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execDisableTangents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->DisableTangents();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function DisableTangents *************************

// ********** Begin Class URealtimeMeshLocalBuilder Function DisableTexCoords **********************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics
{
	struct RealtimeMeshLocalBuilder_eventDisableTexCoords_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DisableTexCoords constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DisableTexCoords constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DisableTexCoords Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventDisableTexCoords_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::PropPointers) < 2048);
// ********** End Function DisableTexCoords Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "DisableTexCoords", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::RealtimeMeshLocalBuilder_eventDisableTexCoords_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::RealtimeMeshLocalBuilder_eventDisableTexCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execDisableTexCoords)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->DisableTexCoords();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function DisableTexCoords ************************

// ********** Begin Class URealtimeMeshLocalBuilder Function EditVertex ****************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics
{
	struct RealtimeMeshLocalBuilder_eventEditVertex_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		int32 Index;
		FVector Position;
		bool bWritePosition;
		FVector Normal;
		bool bWriteNormal;
		FVector Tangent;
		bool bWriteTangent;
		FLinearColor Color;
		bool bWriteColor;
		FVector2D UV0;
		bool bWriteUV0;
		FVector2D UV1;
		bool bWriteUV1;
		FVector2D UV2;
		bool bWriteUV2;
		FVector2D UV3;
		bool bWriteUV3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bWriteColor", "false" },
		{ "CPP_Default_bWriteNormal", "false" },
		{ "CPP_Default_bWritePosition", "false" },
		{ "CPP_Default_bWriteTangent", "false" },
		{ "CPP_Default_bWriteUV0", "false" },
		{ "CPP_Default_bWriteUV1", "false" },
		{ "CPP_Default_bWriteUV2", "false" },
		{ "CPP_Default_bWriteUV3", "false" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Normal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_Position", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_Tangent", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_UV0", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_UV1", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_UV2", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_UV3", "(X=0.000,Y=0.000)" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EditVertex constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bWritePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static void NewProp_bWriteNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static void NewProp_bWriteTangent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bWriteColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static void NewProp_bWriteUV0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static void NewProp_bWriteUV1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
	static void NewProp_bWriteUV2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
	static void NewProp_bWriteUV3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteUV3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EditVertex constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EditVertex Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWritePosition_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWritePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWritePosition = { "bWritePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWritePosition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteNormal_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteNormal = { "bWriteNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteNormal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteTangent_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteTangent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteTangent = { "bWriteTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteTangent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteColor_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteColor = { "bWriteColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteColor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV0_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteUV0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV0 = { "bWriteUV0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV0_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV1_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteUV1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV1 = { "bWriteUV1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV1_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV2_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteUV2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV2 = { "bWriteUV2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV2_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEditVertex_Parms, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV3_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEditVertex_Parms*)Obj)->bWriteUV3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV3 = { "bWriteUV3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEditVertex_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV3_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWritePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_UV3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::NewProp_bWriteUV3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::PropPointers) < 2048);
// ********** End Function EditVertex Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EditVertex", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::RealtimeMeshLocalBuilder_eventEditVertex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::RealtimeMeshLocalBuilder_eventEditVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEditVertex)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bWritePosition);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_UBOOL(Z_Param_bWriteNormal);
	P_GET_STRUCT(FVector,Z_Param_Tangent);
	P_GET_UBOOL(Z_Param_bWriteTangent);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_bWriteColor);
	P_GET_STRUCT(FVector2D,Z_Param_UV0);
	P_GET_UBOOL(Z_Param_bWriteUV0);
	P_GET_STRUCT(FVector2D,Z_Param_UV1);
	P_GET_UBOOL(Z_Param_bWriteUV1);
	P_GET_STRUCT(FVector2D,Z_Param_UV2);
	P_GET_UBOOL(Z_Param_bWriteUV2);
	P_GET_STRUCT(FVector2D,Z_Param_UV3);
	P_GET_UBOOL(Z_Param_bWriteUV3);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EditVertex(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index,Z_Param_Position,Z_Param_bWritePosition,Z_Param_Normal,Z_Param_bWriteNormal,Z_Param_Tangent,Z_Param_bWriteTangent,Z_Param_Color,Z_Param_bWriteColor,Z_Param_UV0,Z_Param_bWriteUV0,Z_Param_UV1,Z_Param_bWriteUV1,Z_Param_UV2,Z_Param_bWriteUV2,Z_Param_UV3,Z_Param_bWriteUV3);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EditVertex ******************************

// ********** Begin Class URealtimeMeshLocalBuilder Function EnableColors **************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics
{
	struct RealtimeMeshLocalBuilder_eventEnableColors_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableColors constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableColors constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableColors Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnableColors_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::PropPointers) < 2048);
// ********** End Function EnableColors Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EnableColors", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::RealtimeMeshLocalBuilder_eventEnableColors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::RealtimeMeshLocalBuilder_eventEnableColors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEnableColors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->EnableColors();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EnableColors ****************************

// ********** Begin Class URealtimeMeshLocalBuilder Function EnableDepthOnlyTriangles **************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics
{
	struct RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms
	{
		bool bUse32BitIndices;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bUse32BitIndices", "false" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableDepthOnlyTriangles constinit property declarations **************
	static void NewProp_bUse32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse32BitIndices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableDepthOnlyTriangles constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableDepthOnlyTriangles Property Definitions *************************
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_bUse32BitIndices_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms*)Obj)->bUse32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_bUse32BitIndices = { "bUse32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_bUse32BitIndices_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_bUse32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::PropPointers) < 2048);
// ********** End Function EnableDepthOnlyTriangles Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EnableDepthOnlyTriangles", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::RealtimeMeshLocalBuilder_eventEnableDepthOnlyTriangles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEnableDepthOnlyTriangles)
{
	P_GET_UBOOL(Z_Param_bUse32BitIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->EnableDepthOnlyTriangles(Z_Param_bUse32BitIndices);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EnableDepthOnlyTriangles ****************

// ********** Begin Class URealtimeMeshLocalBuilder Function EnablePolyGroups **********************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics
{
	struct RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms
	{
		bool bUse32BitIndices;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bUse32BitIndices", "false" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnablePolyGroups constinit property declarations **********************
	static void NewProp_bUse32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse32BitIndices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnablePolyGroups constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnablePolyGroups Property Definitions *********************************
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_bUse32BitIndices_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms*)Obj)->bUse32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_bUse32BitIndices = { "bUse32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_bUse32BitIndices_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_bUse32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::PropPointers) < 2048);
// ********** End Function EnablePolyGroups Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EnablePolyGroups", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::RealtimeMeshLocalBuilder_eventEnablePolyGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEnablePolyGroups)
{
	P_GET_UBOOL(Z_Param_bUse32BitIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->EnablePolyGroups(Z_Param_bUse32BitIndices);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EnablePolyGroups ************************

// ********** Begin Class URealtimeMeshLocalBuilder Function EnableTangents ************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics
{
	struct RealtimeMeshLocalBuilder_eventEnableTangents_Parms
	{
		bool bUseHighPrecision;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bUseHighPrecision", "false" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableTangents constinit property declarations ************************
	static void NewProp_bUseHighPrecision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableTangents constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableTangents Property Definitions ***********************************
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_bUseHighPrecision_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEnableTangents_Parms*)Obj)->bUseHighPrecision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_bUseHighPrecision = { "bUseHighPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEnableTangents_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_bUseHighPrecision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnableTangents_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_bUseHighPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::PropPointers) < 2048);
// ********** End Function EnableTangents Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EnableTangents", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::RealtimeMeshLocalBuilder_eventEnableTangents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::RealtimeMeshLocalBuilder_eventEnableTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEnableTangents)
{
	P_GET_UBOOL(Z_Param_bUseHighPrecision);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->EnableTangents(Z_Param_bUseHighPrecision);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EnableTangents **************************

// ********** Begin Class URealtimeMeshLocalBuilder Function EnableTexCoords ***********************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics
{
	struct RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms
	{
		int32 NumChannels;
		bool bUseHighPrecision;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bUseHighPrecision", "false" },
		{ "CPP_Default_NumChannels", "1" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableTexCoords constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
	static void NewProp_bUseHighPrecision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableTexCoords constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableTexCoords Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms, NumChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_bUseHighPrecision_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms*)Obj)->bUseHighPrecision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_bUseHighPrecision = { "bUseHighPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_bUseHighPrecision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_NumChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_bUseHighPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::PropPointers) < 2048);
// ********** End Function EnableTexCoords Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "EnableTexCoords", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::RealtimeMeshLocalBuilder_eventEnableTexCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execEnableTexCoords)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChannels);
	P_GET_UBOOL(Z_Param_bUseHighPrecision);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->EnableTexCoords(Z_Param_NumChannels,Z_Param_bUseHighPrecision);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function EnableTexCoords *************************

// ********** Begin Class URealtimeMeshLocalBuilder Function GetTriangle ***************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics
{
	struct RealtimeMeshLocalBuilder_eventGetTriangle_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		int32 Index;
		int32 UV0;
		int32 UV1;
		int32 UV2;
		int32 PolyGroupIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTriangle constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyGroupIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTriangle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTriangle Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, UV0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, UV1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, UV2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_PolyGroupIndex = { "PolyGroupIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetTriangle_Parms, PolyGroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::NewProp_PolyGroupIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::PropPointers) < 2048);
// ********** End Function GetTriangle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "GetTriangle", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::RealtimeMeshLocalBuilder_eventGetTriangle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::RealtimeMeshLocalBuilder_eventGetTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execGetTriangle)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UV0);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UV1);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UV2);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PolyGroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTriangle(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_PolyGroupIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function GetTriangle *****************************

// ********** Begin Class URealtimeMeshLocalBuilder Function GetVertex *****************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics
{
	struct RealtimeMeshLocalBuilder_eventGetVertex_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		int32 Index;
		FVector Position;
		FVector Normal;
		FVector Tangent;
		FLinearColor Color;
		FVector2D UV0;
		FVector2D UV1;
		FVector2D UV2;
		FVector2D UV3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVertex constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVertex constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVertex Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventGetVertex_Parms, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::NewProp_UV3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::PropPointers) < 2048);
// ********** End Function GetVertex Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "GetVertex", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::RealtimeMeshLocalBuilder_eventGetVertex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::RealtimeMeshLocalBuilder_eventGetVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execGetVertex)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Tangent);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV0);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV1);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV2);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV3);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVertex(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index,Z_Param_Out_Position,Z_Param_Out_Normal,Z_Param_Out_Tangent,Z_Param_Out_Color,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function GetVertex *******************************

// ********** Begin Class URealtimeMeshLocalBuilder Function Initialize ****************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics
{
	struct RealtimeMeshLocalBuilder_eventInitialize_Parms
	{
		ERealtimeMeshSimpleStreamConfig WantedTangents;
		ERealtimeMeshSimpleStreamConfig WantedTexCoords;
		bool bWants32BitIndices;
		ERealtimeMeshSimpleStreamConfig WantedPolyGroupType;
		bool bWantsColors;
		int32 WantedTexCoordChannels;
		bool bKeepExistingData;
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_bKeepExistingData", "true" },
		{ "CPP_Default_bWants32BitIndices", "false" },
		{ "CPP_Default_bWantsColors", "true" },
		{ "CPP_Default_WantedPolyGroupType", "None" },
		{ "CPP_Default_WantedTangents", "Normal" },
		{ "CPP_Default_WantedTexCoordChannels", "1" },
		{ "CPP_Default_WantedTexCoords", "Normal" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTangents_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTangents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedTexCoords_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedTexCoords;
	static void NewProp_bWants32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WantedPolyGroupType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WantedPolyGroupType;
	static void NewProp_bWantsColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsColors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WantedTexCoordChannels;
	static void NewProp_bKeepExistingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepExistingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTangents_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTangents = { "WantedTangents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventInitialize_Parms, WantedTangents), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoords_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoords = { "WantedTexCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventInitialize_Parms, WantedTexCoords), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventInitialize_Parms*)Obj)->bWants32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventInitialize_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedPolyGroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedPolyGroupType = { "WantedPolyGroupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventInitialize_Parms, WantedPolyGroupType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamConfig, METADATA_PARAMS(0, nullptr) }; // 1447252690
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWantsColors_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventInitialize_Parms*)Obj)->bWantsColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWantsColors = { "bWantsColors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventInitialize_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWantsColors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoordChannels = { "WantedTexCoordChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventInitialize_Parms, WantedTexCoordChannels), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bKeepExistingData_SetBit(void* Obj)
{
	((RealtimeMeshLocalBuilder_eventInitialize_Parms*)Obj)->bKeepExistingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bKeepExistingData = { "bKeepExistingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshLocalBuilder_eventInitialize_Parms), &Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bKeepExistingData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventInitialize_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTangents_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoords_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWants32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedPolyGroupType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedPolyGroupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bWantsColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_WantedTexCoordChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_bKeepExistingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "Initialize", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::RealtimeMeshLocalBuilder_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::RealtimeMeshLocalBuilder_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execInitialize)
{
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTangents);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedTexCoords);
	P_GET_UBOOL(Z_Param_bWants32BitIndices);
	P_GET_ENUM(ERealtimeMeshSimpleStreamConfig,Z_Param_WantedPolyGroupType);
	P_GET_UBOOL(Z_Param_bWantsColors);
	P_GET_PROPERTY(FIntProperty,Z_Param_WantedTexCoordChannels);
	P_GET_UBOOL(Z_Param_bKeepExistingData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->Initialize(ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTangents),ERealtimeMeshSimpleStreamConfig(Z_Param_WantedTexCoords),Z_Param_bWants32BitIndices,ERealtimeMeshSimpleStreamConfig(Z_Param_WantedPolyGroupType),Z_Param_bWantsColors,Z_Param_WantedTexCoordChannels,Z_Param_bKeepExistingData);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function Initialize ******************************

// ********** Begin Class URealtimeMeshLocalBuilder Function SetTriangle ***************************
struct Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics
{
	struct RealtimeMeshLocalBuilder_eventSetTriangle_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
		int32 Index;
		int32 UV0;
		int32 UV1;
		int32 UV2;
		int32 PolyGroupIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "CPP_Default_PolyGroupIndex", "0" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTriangle constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyGroupIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTriangle constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTriangle Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, UV0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, UV1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, UV2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_PolyGroupIndex = { "PolyGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshLocalBuilder_eventSetTriangle_Parms, PolyGroupIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::NewProp_PolyGroupIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::PropPointers) < 2048);
// ********** End Function SetTriangle Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshLocalBuilder, nullptr, "SetTriangle", 	Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::RealtimeMeshLocalBuilder_eventSetTriangle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::RealtimeMeshLocalBuilder_eventSetTriangle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshLocalBuilder::execSetTriangle)
{
	P_GET_OBJECT_REF(URealtimeMeshLocalBuilder,Z_Param_Out_Builder);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV0);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV1);
	P_GET_PROPERTY(FIntProperty,Z_Param_UV2);
	P_GET_PROPERTY(FIntProperty,Z_Param_PolyGroupIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTriangle(P_ARG_GC_BARRIER(Z_Param_Out_Builder),Z_Param_Index,Z_Param_UV0,Z_Param_UV1,Z_Param_UV2,Z_Param_PolyGroupIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshLocalBuilder Function SetTriangle *****************************

// ********** Begin Class URealtimeMeshLocalBuilder ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshLocalBuilder;
UClass* URealtimeMeshLocalBuilder::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshLocalBuilder;
	if (!Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshLocalBuilder"),
			Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.InnerSingleton,
			StaticRegisterNativesURealtimeMeshLocalBuilder,
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
	return Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister()
{
	return URealtimeMeshLocalBuilder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ReSharper restore UnrealHeaderToolError\n" },
		{ "IncludePath", "Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "ReSharper restore UnrealHeaderToolError" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshLocalBuilder constinit property declarations ****************
// ********** End Class URealtimeMeshLocalBuilder constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTriangle"), .Pointer = &URealtimeMeshLocalBuilder::execAddTriangle },
		{ .NameUTF8 = UTF8TEXT("AddVertex"), .Pointer = &URealtimeMeshLocalBuilder::execAddVertex },
		{ .NameUTF8 = UTF8TEXT("DisableColors"), .Pointer = &URealtimeMeshLocalBuilder::execDisableColors },
		{ .NameUTF8 = UTF8TEXT("DisableDepthOnlyTriangles"), .Pointer = &URealtimeMeshLocalBuilder::execDisableDepthOnlyTriangles },
		{ .NameUTF8 = UTF8TEXT("DisablePolyGroups"), .Pointer = &URealtimeMeshLocalBuilder::execDisablePolyGroups },
		{ .NameUTF8 = UTF8TEXT("DisableTangents"), .Pointer = &URealtimeMeshLocalBuilder::execDisableTangents },
		{ .NameUTF8 = UTF8TEXT("DisableTexCoords"), .Pointer = &URealtimeMeshLocalBuilder::execDisableTexCoords },
		{ .NameUTF8 = UTF8TEXT("EditVertex"), .Pointer = &URealtimeMeshLocalBuilder::execEditVertex },
		{ .NameUTF8 = UTF8TEXT("EnableColors"), .Pointer = &URealtimeMeshLocalBuilder::execEnableColors },
		{ .NameUTF8 = UTF8TEXT("EnableDepthOnlyTriangles"), .Pointer = &URealtimeMeshLocalBuilder::execEnableDepthOnlyTriangles },
		{ .NameUTF8 = UTF8TEXT("EnablePolyGroups"), .Pointer = &URealtimeMeshLocalBuilder::execEnablePolyGroups },
		{ .NameUTF8 = UTF8TEXT("EnableTangents"), .Pointer = &URealtimeMeshLocalBuilder::execEnableTangents },
		{ .NameUTF8 = UTF8TEXT("EnableTexCoords"), .Pointer = &URealtimeMeshLocalBuilder::execEnableTexCoords },
		{ .NameUTF8 = UTF8TEXT("GetTriangle"), .Pointer = &URealtimeMeshLocalBuilder::execGetTriangle },
		{ .NameUTF8 = UTF8TEXT("GetVertex"), .Pointer = &URealtimeMeshLocalBuilder::execGetVertex },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &URealtimeMeshLocalBuilder::execInitialize },
		{ .NameUTF8 = UTF8TEXT("SetTriangle"), .Pointer = &URealtimeMeshLocalBuilder::execSetTriangle },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddTriangle, "AddTriangle" }, // 2361046892
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_AddVertex, "AddVertex" }, // 1094588654
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableColors, "DisableColors" }, // 97845210
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableDepthOnlyTriangles, "DisableDepthOnlyTriangles" }, // 1714602739
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisablePolyGroups, "DisablePolyGroups" }, // 1233828764
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTangents, "DisableTangents" }, // 1889411968
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_DisableTexCoords, "DisableTexCoords" }, // 4128526564
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EditVertex, "EditVertex" }, // 617723471
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableColors, "EnableColors" }, // 1537315965
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableDepthOnlyTriangles, "EnableDepthOnlyTriangles" }, // 4032813692
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnablePolyGroups, "EnablePolyGroups" }, // 2856802319
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTangents, "EnableTangents" }, // 2276588836
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_EnableTexCoords, "EnableTexCoords" }, // 3229302265
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetTriangle, "GetTriangle" }, // 629202988
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_GetVertex, "GetVertex" }, // 1530675817
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_Initialize, "Initialize" }, // 2488448879
		{ &Z_Construct_UFunction_URealtimeMeshLocalBuilder_SetTriangle, "SetTriangle" }, // 4068845912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshLocalBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URealtimeMeshStreamSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::ClassParams = {
	&URealtimeMeshLocalBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::Class_MetaDataParams)
};
void URealtimeMeshLocalBuilder::StaticRegisterNativesURealtimeMeshLocalBuilder()
{
	UClass* Class = URealtimeMeshLocalBuilder::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshLocalBuilder()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.OuterSingleton, Z_Construct_UClass_URealtimeMeshLocalBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshLocalBuilder.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshLocalBuilder);
URealtimeMeshLocalBuilder::~URealtimeMeshLocalBuilder() {}
// ********** End Class URealtimeMeshLocalBuilder **************************************************

// ********** Begin Class URealtimeMeshStreamPool Function FreeAllStreams **************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** Release all Streams/StreamSets/Builders back to the pool and allow them to be garbage collected */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Release all Streams/StreamSets/Builders back to the pool and allow them to be garbage collected" },
	};
#endif // WITH_METADATA

// ********** Begin Function FreeAllStreams constinit property declarations ************************
// ********** End Function FreeAllStreams constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "FreeAllStreams", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execFreeAllStreams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FreeAllStreams();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function FreeAllStreams ****************************

// ********** Begin Class URealtimeMeshStreamPool Function RequestMeshBuilder **********************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics
{
	struct RealtimeMeshStreamPool_eventRequestMeshBuilder_Parms
	{
		URealtimeMeshLocalBuilder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** @return an available RealtimeMeshLocalBuilder from the pool (possibly allocating a new stream) */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "@return an available RealtimeMeshLocalBuilder from the pool (possibly allocating a new stream)" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestMeshBuilder constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestMeshBuilder constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestMeshBuilder Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestMeshBuilder_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::PropPointers) < 2048);
// ********** End Function RequestMeshBuilder Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "RequestMeshBuilder", 	Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::RealtimeMeshStreamPool_eventRequestMeshBuilder_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::RealtimeMeshStreamPool_eventRequestMeshBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execRequestMeshBuilder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshLocalBuilder**)Z_Param__Result=P_THIS->RequestMeshBuilder();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function RequestMeshBuilder ************************

// ********** Begin Class URealtimeMeshStreamPool Function RequestStream ***************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics
{
	struct FRealtimeMeshStreamKey
	{
		ERealtimeMeshStreamType StreamType;
		FName StreamName;
	};

	struct RealtimeMeshStreamPool_eventRequestStream_Parms
	{
		FRealtimeMeshStreamKey StreamKey;
		ERealtimeMeshSimpleStreamType StreamType;
		int32 NumElements;
		URealtimeMeshStream* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** @return an available URealtimeMeshStream from the pool (possibly allocating a new stream) */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "@return an available URealtimeMeshStream from the pool (possibly allocating a new stream)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestStream constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestStream constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestStream Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestStream_Parms, StreamKey), Z_Construct_UScriptStruct_FRealtimeMeshStreamKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamKey_MetaData), NewProp_StreamKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestStream_Parms, StreamType), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshSimpleStreamType, METADATA_PARAMS(0, nullptr) }; // 1572484401
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestStream_Parms, NumElements), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestStream_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_StreamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_NumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::PropPointers) < 2048);
// ********** End Function RequestStream Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "RequestStream", 	Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::RealtimeMeshStreamPool_eventRequestStream_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::RealtimeMeshStreamPool_eventRequestStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execRequestStream)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamKey,Z_Param_Out_StreamKey);
	P_GET_ENUM(ERealtimeMeshSimpleStreamType,Z_Param_StreamType);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumElements);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStream**)Z_Param__Result=P_THIS->RequestStream(Z_Param_Out_StreamKey,ERealtimeMeshSimpleStreamType(Z_Param_StreamType),Z_Param_NumElements);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function RequestStream *****************************

// ********** Begin Class URealtimeMeshStreamPool Function RequestStreamSet ************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics
{
	struct RealtimeMeshStreamPool_eventRequestStreamSet_Parms
	{
		URealtimeMeshStreamSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** @return an available URealtimeMeshStreamSet from the pool (possibly allocating a new stream) */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "@return an available URealtimeMeshStreamSet from the pool (possibly allocating a new stream)" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestStreamSet constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestStreamSet constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestStreamSet Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventRequestStreamSet_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::PropPointers) < 2048);
// ********** End Function RequestStreamSet Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "RequestStreamSet", 	Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::RealtimeMeshStreamPool_eventRequestStreamSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::RealtimeMeshStreamPool_eventRequestStreamSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execRequestStreamSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStreamSet**)Z_Param__Result=P_THIS->RequestStreamSet();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function RequestStreamSet **************************

// ********** Begin Class URealtimeMeshStreamPool Function ReturnAllStreams ************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** Release all Streams/StreamSets/Builders back to the pool */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Release all Streams/StreamSets/Builders back to the pool" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnAllStreams constinit property declarations **********************
// ********** End Function ReturnAllStreams constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "ReturnAllStreams", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execReturnAllStreams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnAllStreams();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function ReturnAllStreams **************************

// ********** Begin Class URealtimeMeshStreamPool Function ReturnMeshBuilder ***********************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics
{
	struct RealtimeMeshStreamPool_eventReturnMeshBuilder_Parms
	{
		URealtimeMeshLocalBuilder* Builder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** Release a URealtimeMeshLocalBuilder returned by RequestMeshBuilder() back to the pool */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Release a URealtimeMeshLocalBuilder returned by RequestMeshBuilder() back to the pool" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnMeshBuilder constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReturnMeshBuilder constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReturnMeshBuilder Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventReturnMeshBuilder_Parms, Builder), Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::NewProp_Builder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::PropPointers) < 2048);
// ********** End Function ReturnMeshBuilder Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "ReturnMeshBuilder", 	Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::RealtimeMeshStreamPool_eventReturnMeshBuilder_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::RealtimeMeshStreamPool_eventReturnMeshBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execReturnMeshBuilder)
{
	P_GET_OBJECT(URealtimeMeshLocalBuilder,Z_Param_Builder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnMeshBuilder(Z_Param_Builder);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function ReturnMeshBuilder *************************

// ********** Begin Class URealtimeMeshStreamPool Function ReturnStream ****************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics
{
	struct RealtimeMeshStreamPool_eventReturnStream_Parms
	{
		URealtimeMeshStream* Stream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** Release a URealtimeMeshStream returned by RequestStream() back to the pool */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Release a URealtimeMeshStream returned by RequestStream() back to the pool" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnStream constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReturnStream constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReturnStream Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventReturnStream_Parms, Stream), Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::NewProp_Stream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::PropPointers) < 2048);
// ********** End Function ReturnStream Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "ReturnStream", 	Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::RealtimeMeshStreamPool_eventReturnStream_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::RealtimeMeshStreamPool_eventReturnStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execReturnStream)
{
	P_GET_OBJECT(URealtimeMeshStream,Z_Param_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnStream(Z_Param_Stream);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function ReturnStream ******************************

// ********** Begin Class URealtimeMeshStreamPool Function ReturnStreamSet *************************
struct Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics
{
	struct RealtimeMeshStreamPool_eventReturnStreamSet_Parms
	{
		URealtimeMeshStreamSet* StreamSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Realtime Mesh" },
		{ "Comment", "/** Release a URealtimeMeshStreamSet returned by RequestStreamSet() back to the pool */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Release a URealtimeMeshStreamSet returned by RequestStreamSet() back to the pool" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnStreamSet constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReturnStreamSet constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReturnStreamSet Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::NewProp_StreamSet = { "StreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamPool_eventReturnStreamSet_Parms, StreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::NewProp_StreamSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::PropPointers) < 2048);
// ********** End Function ReturnStreamSet Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamPool, nullptr, "ReturnStreamSet", 	Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::RealtimeMeshStreamPool_eventReturnStreamSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::RealtimeMeshStreamPool_eventReturnStreamSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamPool::execReturnStreamSet)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_StreamSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnStreamSet(Z_Param_StreamSet);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamPool Function ReturnStreamSet ***************************

// ********** Begin Class URealtimeMeshStreamPool **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshStreamPool;
UClass* URealtimeMeshStreamPool::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshStreamPool;
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshStreamPool"),
			Z_Registration_Info_UClass_URealtimeMeshStreamPool.InnerSingleton,
			StaticRegisterNativesURealtimeMeshStreamPool,
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
	return Z_Registration_Info_UClass_URealtimeMeshStreamPool.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshStreamPool_NoRegister()
{
	return URealtimeMeshStreamPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshStreamPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\x09""An object pool for reusing Realtime Mesh Streams, StreamSets, and MeshBuilders\n */" },
		{ "IncludePath", "Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "*     An object pool for reusing Realtime Mesh Streams, StreamSets, and MeshBuilders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStreams_MetaData[] = {
		{ "Comment", "/** Streams in the pool that are available */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "Streams in the pool that are available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCreatedStreams_MetaData[] = {
		{ "Comment", "/** All streams the pool has allocated */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "All streams the pool has allocated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStreamSets_MetaData[] = {
		{ "Comment", "/** StreamSets in the pool that are available */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "StreamSets in the pool that are available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCreatedStreamSets_MetaData[] = {
		{ "Comment", "/** All stream sets the pool has allocated */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "All stream sets the pool has allocated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBuilders_MetaData[] = {
		{ "Comment", "/** StreamSets in the pool that are available */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "StreamSets in the pool that are available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCreatedBuilders_MetaData[] = {
		{ "Comment", "/** All stream sets the pool has allocated */" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "All stream sets the pool has allocated" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshStreamPool constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStreams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedStreams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCreatedStreams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCreatedStreams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStreamSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedStreamSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCreatedStreamSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCreatedStreamSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBuilders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBuilders;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCreatedBuilders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCreatedBuilders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMeshStreamPool constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FreeAllStreams"), .Pointer = &URealtimeMeshStreamPool::execFreeAllStreams },
		{ .NameUTF8 = UTF8TEXT("RequestMeshBuilder"), .Pointer = &URealtimeMeshStreamPool::execRequestMeshBuilder },
		{ .NameUTF8 = UTF8TEXT("RequestStream"), .Pointer = &URealtimeMeshStreamPool::execRequestStream },
		{ .NameUTF8 = UTF8TEXT("RequestStreamSet"), .Pointer = &URealtimeMeshStreamPool::execRequestStreamSet },
		{ .NameUTF8 = UTF8TEXT("ReturnAllStreams"), .Pointer = &URealtimeMeshStreamPool::execReturnAllStreams },
		{ .NameUTF8 = UTF8TEXT("ReturnMeshBuilder"), .Pointer = &URealtimeMeshStreamPool::execReturnMeshBuilder },
		{ .NameUTF8 = UTF8TEXT("ReturnStream"), .Pointer = &URealtimeMeshStreamPool::execReturnStream },
		{ .NameUTF8 = UTF8TEXT("ReturnStreamSet"), .Pointer = &URealtimeMeshStreamPool::execReturnStreamSet },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_FreeAllStreams, "FreeAllStreams" }, // 479958492
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_RequestMeshBuilder, "RequestMeshBuilder" }, // 938805482
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStream, "RequestStream" }, // 1123799492
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_RequestStreamSet, "RequestStreamSet" }, // 1864952658
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnAllStreams, "ReturnAllStreams" }, // 3626296228
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnMeshBuilder, "ReturnMeshBuilder" }, // 3262706250
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStream, "ReturnStream" }, // 185899131
		{ &Z_Construct_UFunction_URealtimeMeshStreamPool_ReturnStreamSet, "ReturnStreamSet" }, // 3801958103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshStreamPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshStreamPool_Statics

// ********** Begin Class URealtimeMeshStreamPool Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreams_Inner = { "CachedStreams", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreams = { "CachedStreams", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, CachedStreams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStreams_MetaData), NewProp_CachedStreams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreams_Inner = { "AllCreatedStreams", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshStream_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreams = { "AllCreatedStreams", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, AllCreatedStreams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCreatedStreams_MetaData), NewProp_AllCreatedStreams_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreamSets_Inner = { "CachedStreamSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreamSets = { "CachedStreamSets", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, CachedStreamSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStreamSets_MetaData), NewProp_CachedStreamSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreamSets_Inner = { "AllCreatedStreamSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreamSets = { "AllCreatedStreamSets", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, AllCreatedStreamSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCreatedStreamSets_MetaData), NewProp_AllCreatedStreamSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedBuilders_Inner = { "CachedBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedBuilders = { "CachedBuilders", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, CachedBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBuilders_MetaData), NewProp_CachedBuilders_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedBuilders_Inner = { "AllCreatedBuilders", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URealtimeMeshLocalBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedBuilders = { "AllCreatedBuilders", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshStreamPool, AllCreatedBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCreatedBuilders_MetaData), NewProp_AllCreatedBuilders_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMeshStreamPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreamSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedStreamSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreamSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedStreamSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedBuilders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_CachedBuilders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedBuilders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshStreamPool_Statics::NewProp_AllCreatedBuilders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamPool_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMeshStreamPool Property Definitions *******************************
UObject* (*const Z_Construct_UClass_URealtimeMeshStreamPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshStreamPool_Statics::ClassParams = {
	&URealtimeMeshStreamPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URealtimeMeshStreamPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamPool_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamPool_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshStreamPool_Statics::Class_MetaDataParams)
};
void URealtimeMeshStreamPool::StaticRegisterNativesURealtimeMeshStreamPool()
{
	UClass* Class = URealtimeMeshStreamPool::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshStreamPool_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshStreamPool()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshStreamPool.OuterSingleton, Z_Construct_UClass_URealtimeMeshStreamPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshStreamPool.OuterSingleton;
}
URealtimeMeshStreamPool::URealtimeMeshStreamPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshStreamPool);
URealtimeMeshStreamPool::~URealtimeMeshStreamPool() {}
// ********** End Class URealtimeMeshStreamPool ****************************************************

// ********** Begin ScriptStruct FRealtimeMeshStreamSetFromComponents ******************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshStreamSetFromComponents); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshStreamSetFromComponents); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ReSharper restore UnrealHeaderToolError\n" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ToolTip", "ReSharper restore UnrealHeaderToolError" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyGroups_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Binormals_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUse32BitIndices_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangents_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTexCoords_MetaData[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshStreamSetFromComponents constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolyGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Binormals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Binormals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
	static void NewProp_bUse32BitIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse32BitIndices;
	static void NewProp_bUseHighPrecisionTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangents;
	static void NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTexCoords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshStreamSetFromComponents constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshStreamSetFromComponents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents;
class UScriptStruct* FRealtimeMeshStreamSetFromComponents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshComponent(), TEXT("RealtimeMeshStreamSetFromComponents"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshStreamSetFromComponents Property Definitions *********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_PolyGroups_Inner = { "PolyGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_PolyGroups = { "PolyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, PolyGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyGroups_MetaData), NewProp_PolyGroups_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Binormals_Inner = { "Binormals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Binormals = { "Binormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Binormals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Binormals_MetaData), NewProp_Binormals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshStreamSetFromComponents, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUse32BitIndices_SetBit(void* Obj)
{
	((FRealtimeMeshStreamSetFromComponents*)Obj)->bUse32BitIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUse32BitIndices = { "bUse32BitIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStreamSetFromComponents), &Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUse32BitIndices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUse32BitIndices_MetaData), NewProp_bUse32BitIndices_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTangents_SetBit(void* Obj)
{
	((FRealtimeMeshStreamSetFromComponents*)Obj)->bUseHighPrecisionTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTangents = { "bUseHighPrecisionTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStreamSetFromComponents), &Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTangents_MetaData), NewProp_bUseHighPrecisionTangents_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj)
{
	((FRealtimeMeshStreamSetFromComponents*)Obj)->bUseHighPrecisionTexCoords = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTexCoords = { "bUseHighPrecisionTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshStreamSetFromComponents), &Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPrecisionTexCoords_MetaData), NewProp_bUseHighPrecisionTexCoords_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_PolyGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_PolyGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Tangents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Binormals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Binormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV1_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV2_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV3_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_UV3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUse32BitIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewProp_bUseHighPrecisionTexCoords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshStreamSetFromComponents Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
	nullptr,
	&NewStructOps,
	"RealtimeMeshStreamSetFromComponents",
	Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::PropPointers),
	sizeof(FRealtimeMeshStreamSetFromComponents),
	alignof(FRealtimeMeshStreamSetFromComponents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshStreamSetFromComponents ********************************

// ********** Begin Class URealtimeMeshStreamUtils Function CopyStreamSetFromComponents ************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics
{
	struct RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms
	{
		URealtimeMeshStreamSet* Streams;
		FRealtimeMeshStreamSetFromComponents Components;
		URealtimeMeshStreamSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyStreamSetFromComponents constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Streams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Components;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyStreamSetFromComponents constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyStreamSetFromComponents Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_Streams = { "Streams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms, Streams), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms, Components), Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) }; // 636253011
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms, ReturnValue), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_Streams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::PropPointers) < 2048);
// ********** End Function CopyStreamSetFromComponents Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "CopyStreamSetFromComponents", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::RealtimeMeshStreamUtils_eventCopyStreamSetFromComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execCopyStreamSetFromComponents)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_Streams);
	P_GET_STRUCT_REF(FRealtimeMeshStreamSetFromComponents,Z_Param_Out_Components);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URealtimeMeshStreamSet**)Z_Param__Result=URealtimeMeshStreamUtils::CopyStreamSetFromComponents(Z_Param_Streams,Z_Param_Out_Components);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function CopyStreamSetFromComponents **************

// ********** Begin Class URealtimeMeshStreamUtils Function GetFloatElement ************************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics
{
	struct RealtimeMeshStreamUtils_eventGetFloatElement_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FRealtimeMeshStreamRowPtr OutRow;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloatElement constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloatElement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloatElement Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetFloatElement_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetFloatElement_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetFloatElement_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetFloatElement_Parms, OutRow), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetFloatElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::PropPointers) < 2048);
// ********** End Function GetFloatElement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "GetFloatElement", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::RealtimeMeshStreamUtils_eventGetFloatElement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::RealtimeMeshStreamUtils_eventGetFloatElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execGetFloatElement)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URealtimeMeshStreamUtils::GetFloatElement(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function GetFloatElement **************************

// ********** Begin Class URealtimeMeshStreamUtils Function GetIntElement **************************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics
{
	struct RealtimeMeshStreamUtils_eventGetIntElement_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FRealtimeMeshStreamRowPtr OutRow;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIntElement constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIntElement constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIntElement Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetIntElement_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetIntElement_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetIntElement_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetIntElement_Parms, OutRow), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetIntElement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::PropPointers) < 2048);
// ********** End Function GetIntElement Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "GetIntElement", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::RealtimeMeshStreamUtils_eventGetIntElement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::RealtimeMeshStreamUtils_eventGetIntElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execGetIntElement)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URealtimeMeshStreamUtils::GetIntElement(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function GetIntElement ****************************

// ********** Begin Class URealtimeMeshStreamUtils Function GetVector2Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics
{
	struct RealtimeMeshStreamUtils_eventGetVector2Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FRealtimeMeshStreamRowPtr OutRow;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector2Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector2Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector2Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector2Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector2Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector2Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector2Element_Parms, OutRow), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector2Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::PropPointers) < 2048);
// ********** End Function GetVector2Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "GetVector2Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::RealtimeMeshStreamUtils_eventGetVector2Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::RealtimeMeshStreamUtils_eventGetVector2Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execGetVector2Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=URealtimeMeshStreamUtils::GetVector2Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function GetVector2Element ************************

// ********** Begin Class URealtimeMeshStreamUtils Function GetVector3Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics
{
	struct RealtimeMeshStreamUtils_eventGetVector3Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FRealtimeMeshStreamRowPtr OutRow;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector3Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector3Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector3Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector3Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector3Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector3Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector3Element_Parms, OutRow), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector3Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::PropPointers) < 2048);
// ********** End Function GetVector3Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "GetVector3Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::RealtimeMeshStreamUtils_eventGetVector3Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::RealtimeMeshStreamUtils_eventGetVector3Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execGetVector3Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=URealtimeMeshStreamUtils::GetVector3Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function GetVector3Element ************************

// ********** Begin Class URealtimeMeshStreamUtils Function GetVector4Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics
{
	struct RealtimeMeshStreamUtils_eventGetVector4Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FRealtimeMeshStreamRowPtr OutRow;
		FVector4 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector4Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector4Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector4Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector4Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector4Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector4Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_OutRow = { "OutRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector4Element_Parms, OutRow), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(0, nullptr) }; // 294970025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventGetVector4Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_OutRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::PropPointers) < 2048);
// ********** End Function GetVector4Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "GetVector4Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::RealtimeMeshStreamUtils_eventGetVector4Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::RealtimeMeshStreamUtils_eventGetVector4Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execGetVector4Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_OutRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector4*)Z_Param__Result=URealtimeMeshStreamUtils::GetVector4Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_Out_OutRow);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function GetVector4Element ************************

// ********** Begin Class URealtimeMeshStreamUtils Function SetFloatElement ************************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics
{
	struct RealtimeMeshStreamUtils_eventSetFloatElement_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		float NewValue;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFloatElement constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFloatElement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFloatElement Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetFloatElement_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetFloatElement_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetFloatElement_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetFloatElement_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetFloatElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::PropPointers) < 2048);
// ********** End Function SetFloatElement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "SetFloatElement", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::RealtimeMeshStreamUtils_eventSetFloatElement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::RealtimeMeshStreamUtils_eventSetFloatElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execSetFloatElement)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=URealtimeMeshStreamUtils::SetFloatElement(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function SetFloatElement **************************

// ********** Begin Class URealtimeMeshStreamUtils Function SetIntElement **************************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics
{
	struct RealtimeMeshStreamUtils_eventSetIntElement_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		int32 NewValue;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIntElement constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIntElement constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIntElement Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetIntElement_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetIntElement_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetIntElement_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetIntElement_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetIntElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::PropPointers) < 2048);
// ********** End Function SetIntElement Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "SetIntElement", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::RealtimeMeshStreamUtils_eventSetIntElement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::RealtimeMeshStreamUtils_eventSetIntElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execSetIntElement)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=URealtimeMeshStreamUtils::SetIntElement(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function SetIntElement ****************************

// ********** Begin Class URealtimeMeshStreamUtils Function SetVector2Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics
{
	struct RealtimeMeshStreamUtils_eventSetVector2Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FVector2D NewValue;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector2Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector2Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector2Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector2Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector2Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector2Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector2Element_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector2Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::PropPointers) < 2048);
// ********** End Function SetVector2Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "SetVector2Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::RealtimeMeshStreamUtils_eventSetVector2Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::RealtimeMeshStreamUtils_eventSetVector2Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execSetVector2Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT(FVector2D,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=URealtimeMeshStreamUtils::SetVector2Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function SetVector2Element ************************

// ********** Begin Class URealtimeMeshStreamUtils Function SetVector3Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics
{
	struct RealtimeMeshStreamUtils_eventSetVector3Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FVector NewValue;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector3Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector3Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector3Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector3Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector3Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector3Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector3Element_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector3Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::PropPointers) < 2048);
// ********** End Function SetVector3Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "SetVector3Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::RealtimeMeshStreamUtils_eventSetVector3Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::RealtimeMeshStreamUtils_eventSetVector3Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execSetVector3Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT(FVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=URealtimeMeshStreamUtils::SetVector3Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function SetVector3Element ************************

// ********** Begin Class URealtimeMeshStreamUtils Function SetVector4Element **********************
struct Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics
{
	struct RealtimeMeshStreamUtils_eventSetVector4Element_Parms
	{
		FRealtimeMeshStreamRowPtr Row;
		int32 Index;
		int32 ElementIdx;
		FVector4 NewValue;
		FRealtimeMeshStreamRowPtr ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|MeshData" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector4Element constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIdx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector4Element constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector4Element Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector4Element_Parms, Row), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 294970025
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector4Element_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_ElementIdx = { "ElementIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector4Element_Parms, ElementIdx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector4Element_Parms, NewValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshStreamUtils_eventSetVector4Element_Parms, ReturnValue), Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 294970025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_ElementIdx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::PropPointers) < 2048);
// ********** End Function SetVector4Element Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshStreamUtils, nullptr, "SetVector4Element", 	Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::RealtimeMeshStreamUtils_eventSetVector4Element_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::RealtimeMeshStreamUtils_eventSetVector4Element_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshStreamUtils::execSetVector4Element)
{
	P_GET_STRUCT_REF(FRealtimeMeshStreamRowPtr,Z_Param_Out_Row);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIdx);
	P_GET_STRUCT(FVector4,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRealtimeMeshStreamRowPtr*)Z_Param__Result=URealtimeMeshStreamUtils::SetVector4Element(Z_Param_Out_Row,Z_Param_Index,Z_Param_ElementIdx,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshStreamUtils Function SetVector4Element ************************

// ********** Begin Class URealtimeMeshStreamUtils *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshStreamUtils;
UClass* URealtimeMeshStreamUtils::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshStreamUtils;
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshStreamUtils"),
			Z_Registration_Info_UClass_URealtimeMeshStreamUtils.InnerSingleton,
			StaticRegisterNativesURealtimeMeshStreamUtils,
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
	return Z_Registration_Info_UClass_URealtimeMeshStreamUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshStreamUtils_NoRegister()
{
	return URealtimeMeshStreamUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshStreamUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBlueprintMeshBuilder.h" },
		{ "ScriptName", "RealtimeMeshStreamUtils" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshStreamUtils constinit property declarations *****************
// ********** End Class URealtimeMeshStreamUtils constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CopyStreamSetFromComponents"), .Pointer = &URealtimeMeshStreamUtils::execCopyStreamSetFromComponents },
		{ .NameUTF8 = UTF8TEXT("GetFloatElement"), .Pointer = &URealtimeMeshStreamUtils::execGetFloatElement },
		{ .NameUTF8 = UTF8TEXT("GetIntElement"), .Pointer = &URealtimeMeshStreamUtils::execGetIntElement },
		{ .NameUTF8 = UTF8TEXT("GetVector2Element"), .Pointer = &URealtimeMeshStreamUtils::execGetVector2Element },
		{ .NameUTF8 = UTF8TEXT("GetVector3Element"), .Pointer = &URealtimeMeshStreamUtils::execGetVector3Element },
		{ .NameUTF8 = UTF8TEXT("GetVector4Element"), .Pointer = &URealtimeMeshStreamUtils::execGetVector4Element },
		{ .NameUTF8 = UTF8TEXT("SetFloatElement"), .Pointer = &URealtimeMeshStreamUtils::execSetFloatElement },
		{ .NameUTF8 = UTF8TEXT("SetIntElement"), .Pointer = &URealtimeMeshStreamUtils::execSetIntElement },
		{ .NameUTF8 = UTF8TEXT("SetVector2Element"), .Pointer = &URealtimeMeshStreamUtils::execSetVector2Element },
		{ .NameUTF8 = UTF8TEXT("SetVector3Element"), .Pointer = &URealtimeMeshStreamUtils::execSetVector3Element },
		{ .NameUTF8 = UTF8TEXT("SetVector4Element"), .Pointer = &URealtimeMeshStreamUtils::execSetVector4Element },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_CopyStreamSetFromComponents, "CopyStreamSetFromComponents" }, // 1045056813
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_GetFloatElement, "GetFloatElement" }, // 2995273558
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_GetIntElement, "GetIntElement" }, // 3193404649
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector2Element, "GetVector2Element" }, // 4082590085
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector3Element, "GetVector3Element" }, // 1504111767
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_GetVector4Element, "GetVector4Element" }, // 2032168025
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_SetFloatElement, "SetFloatElement" }, // 637258680
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_SetIntElement, "SetIntElement" }, // 2650540057
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector2Element, "SetVector2Element" }, // 321517490
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector3Element, "SetVector3Element" }, // 1400523366
		{ &Z_Construct_UFunction_URealtimeMeshStreamUtils_SetVector4Element, "SetVector4Element" }, // 3037283279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshStreamUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshStreamUtils_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::ClassParams = {
	&URealtimeMeshStreamUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::Class_MetaDataParams)
};
void URealtimeMeshStreamUtils::StaticRegisterNativesURealtimeMeshStreamUtils()
{
	UClass* Class = URealtimeMeshStreamUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshStreamUtils()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshStreamUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshStreamUtils.OuterSingleton, Z_Construct_UClass_URealtimeMeshStreamUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshStreamUtils.OuterSingleton;
}
URealtimeMeshStreamUtils::URealtimeMeshStreamUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshStreamUtils);
URealtimeMeshStreamUtils::~URealtimeMeshStreamUtils() {}
// ********** End Class URealtimeMeshStreamUtils ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERealtimeMeshSimpleStreamType_StaticEnum, TEXT("ERealtimeMeshSimpleStreamType"), &Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572484401U) },
		{ ERealtimeMeshSimpleStreamConfig_StaticEnum, TEXT("ERealtimeMeshSimpleStreamConfig"), &Z_Registration_Info_UEnum_ERealtimeMeshSimpleStreamConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1447252690U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshBasicVertex::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshBasicVertex_Statics::NewStructOps, TEXT("RealtimeMeshBasicVertex"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshBasicVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshBasicVertex), 1973373337U) },
		{ FRealtimeMeshStreamRowPtr::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshStreamRowPtr_Statics::NewStructOps, TEXT("RealtimeMeshStreamRowPtr"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamRowPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshStreamRowPtr), 294970025U) },
		{ FRealtimeMeshStreamSetFromComponents::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshStreamSetFromComponents_Statics::NewStructOps, TEXT("RealtimeMeshStreamSetFromComponents"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshStreamSetFromComponents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshStreamSetFromComponents), 636253011U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshStream, URealtimeMeshStream::StaticClass, TEXT("URealtimeMeshStream"), &Z_Registration_Info_UClass_URealtimeMeshStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshStream), 1357620528U) },
		{ Z_Construct_UClass_URealtimeMeshStreamSet, URealtimeMeshStreamSet::StaticClass, TEXT("URealtimeMeshStreamSet"), &Z_Registration_Info_UClass_URealtimeMeshStreamSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshStreamSet), 3247017877U) },
		{ Z_Construct_UClass_URealtimeMeshLocalBuilder, URealtimeMeshLocalBuilder::StaticClass, TEXT("URealtimeMeshLocalBuilder"), &Z_Registration_Info_UClass_URealtimeMeshLocalBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshLocalBuilder), 3376032469U) },
		{ Z_Construct_UClass_URealtimeMeshStreamPool, URealtimeMeshStreamPool::StaticClass, TEXT("URealtimeMeshStreamPool"), &Z_Registration_Info_UClass_URealtimeMeshStreamPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshStreamPool), 3562163212U) },
		{ Z_Construct_UClass_URealtimeMeshStreamUtils, URealtimeMeshStreamUtils::StaticClass, TEXT("URealtimeMeshStreamUtils"), &Z_Registration_Info_UClass_URealtimeMeshStreamUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshStreamUtils), 3516694730U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_803546059{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBlueprintMeshBuilder_h__Script_RealtimeMeshComponent_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
