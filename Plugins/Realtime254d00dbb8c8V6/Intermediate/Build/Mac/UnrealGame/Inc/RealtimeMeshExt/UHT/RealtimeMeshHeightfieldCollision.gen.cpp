// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshHeightfieldCollision.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshHeightfieldCollision() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshHeightfieldCollision();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshHeightfieldCollision_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshHeightFieldCollisionData *****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshHeightFieldCollisionData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshHeightFieldCollisionData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndices_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialIndex_MetaData[] = {
		{ "Category", "Collision|Advanced" },
		{ "Comment", "// Default material index for invalid indices\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Default material index for invalid indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRange_MetaData[] = {
		{ "Category", "Collision|Advanced" },
		{ "Comment", "// Height data bounds for validation\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Height data bounds for validation" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshHeightFieldCollisionData constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIndices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshHeightFieldCollisionData constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshHeightFieldCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData;
class UScriptStruct* FRealtimeMeshHeightFieldCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshHeightFieldCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshHeightFieldCollisionData Property Definitions ********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightData_Inner = { "HeightData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, HeightData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightData_MetaData), NewProp_HeightData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_MaterialIndices_Inner = { "MaterialIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_MaterialIndices = { "MaterialIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, MaterialIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndices_MetaData), NewProp_MaterialIndices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterials_MetaData), NewProp_PhysicalMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, Dimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, GridSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSpacing_MetaData), NewProp_GridSpacing_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_DefaultMaterialIndex = { "DefaultMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, DefaultMaterialIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterialIndex_MetaData), NewProp_DefaultMaterialIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightRange = { "HeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshHeightFieldCollisionData, HeightRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRange_MetaData), NewProp_HeightRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_MaterialIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_MaterialIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_PhysicalMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_PhysicalMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_GridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_DefaultMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewProp_HeightRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshHeightFieldCollisionData Property Definitions **********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshHeightFieldCollisionData",
	Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::PropPointers),
	sizeof(FRealtimeMeshHeightFieldCollisionData),
	alignof(FRealtimeMeshHeightFieldCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshHeightFieldCollisionData *******************************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function AddHeightfieldPhysicalMaterial 
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventAddHeightfieldPhysicalMaterial_Parms
	{
		UPhysicalMaterial* Material;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddHeightfieldPhysicalMaterial constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddHeightfieldPhysicalMaterial constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddHeightfieldPhysicalMaterial Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventAddHeightfieldPhysicalMaterial_Parms, Material), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventAddHeightfieldPhysicalMaterial_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::PropPointers) < 2048);
// ********** End Function AddHeightfieldPhysicalMaterial Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "AddHeightfieldPhysicalMaterial", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventAddHeightfieldPhysicalMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventAddHeightfieldPhysicalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execAddHeightfieldPhysicalMaterial)
{
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddHeightfieldPhysicalMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function AddHeightfieldPhysicalMaterial **

// ********** Begin Class URealtimeMeshHeightfieldCollision Function BeginBatchUpdate **************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Batch Operations" },
		{ "Comment", "// Batch operations for performance\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Batch operations for performance" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginBatchUpdate constinit property declarations **********************
// ********** End Function BeginBatchUpdate constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "BeginBatchUpdate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execBeginBatchUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginBatchUpdate();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function BeginBatchUpdate ****************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function EndBatchUpdate ****************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventEndBatchUpdate_Parms
	{
		bool bForceRecreatePhysics;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Batch Operations" },
		{ "CPP_Default_bForceRecreatePhysics", "false" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndBatchUpdate constinit property declarations ************************
	static void NewProp_bForceRecreatePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRecreatePhysics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndBatchUpdate constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndBatchUpdate Property Definitions ***********************************
void Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::NewProp_bForceRecreatePhysics_SetBit(void* Obj)
{
	((RealtimeMeshHeightfieldCollision_eventEndBatchUpdate_Parms*)Obj)->bForceRecreatePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::NewProp_bForceRecreatePhysics = { "bForceRecreatePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshHeightfieldCollision_eventEndBatchUpdate_Parms), &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::NewProp_bForceRecreatePhysics_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::NewProp_bForceRecreatePhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::PropPointers) < 2048);
// ********** End Function EndBatchUpdate Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "EndBatchUpdate", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::RealtimeMeshHeightfieldCollision_eventEndBatchUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::RealtimeMeshHeightfieldCollision_eventEndBatchUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execEndBatchUpdate)
{
	P_GET_UBOOL(Z_Param_bForceRecreatePhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndBatchUpdate(Z_Param_bForceRecreatePhysics);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function EndBatchUpdate ******************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetCellMaterialIndex **********
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms
	{
		int32 CellX;
		int32 CellY;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCellMaterialIndex constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCellMaterialIndex constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCellMaterialIndex Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_CellX = { "CellX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms, CellX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_CellY = { "CellY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms, CellY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_CellX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_CellY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::PropPointers) < 2048);
// ********** End Function GetCellMaterialIndex Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetCellMaterialIndex", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::RealtimeMeshHeightfieldCollision_eventGetCellMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetCellMaterialIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CellX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CellY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetCellMaterialIndex(Z_Param_CellX,Z_Param_CellY);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetCellMaterialIndex ************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetGridCoordinatesFromWorldPosition 
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetGridCoordinatesFromWorldPosition_Parms
	{
		FVector WorldPosition;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Utilities" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGridCoordinatesFromWorldPosition constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGridCoordinatesFromWorldPosition constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGridCoordinatesFromWorldPosition Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetGridCoordinatesFromWorldPosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetGridCoordinatesFromWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::PropPointers) < 2048);
// ********** End Function GetGridCoordinatesFromWorldPosition Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetGridCoordinatesFromWorldPosition", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::RealtimeMeshHeightfieldCollision_eventGetGridCoordinatesFromWorldPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::RealtimeMeshHeightfieldCollision_eventGetGridCoordinatesFromWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetGridCoordinatesFromWorldPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetGridCoordinatesFromWorldPosition(Z_Param_Out_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetGridCoordinatesFromWorldPosition 

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetHeight *********************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetHeight_Parms
	{
		int32 X;
		int32 Y;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeight constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeight constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeight Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeight_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeight_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::PropPointers) < 2048);
// ********** End Function GetHeight Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetHeight", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::RealtimeMeshHeightfieldCollision_eventGetHeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::RealtimeMeshHeightfieldCollision_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetHeight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeight(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetHeight ***********************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetHeightfieldPhysicalMaterial 
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetHeightfieldPhysicalMaterial_Parms
	{
		int32 MaterialIndex;
		UPhysicalMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeightfieldPhysicalMaterial constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeightfieldPhysicalMaterial constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeightfieldPhysicalMaterial Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightfieldPhysicalMaterial_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightfieldPhysicalMaterial_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::PropPointers) < 2048);
// ********** End Function GetHeightfieldPhysicalMaterial Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetHeightfieldPhysicalMaterial", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventGetHeightfieldPhysicalMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventGetHeightfieldPhysicalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetHeightfieldPhysicalMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicalMaterial**)Z_Param__Result=P_THIS->GetHeightfieldPhysicalMaterial(Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetHeightfieldPhysicalMaterial **

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetHeightRegion ***************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 SizeX;
		int32 SizeY;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeightRegion constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeightRegion constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeightRegion Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::PropPointers) < 2048);
// ********** End Function GetHeightRegion Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetHeightRegion", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventGetHeightRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetHeightRegion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetHeightRegion(Z_Param_StartX,Z_Param_StartY,Z_Param_SizeX,Z_Param_SizeY);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetHeightRegion *****************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetInterpolatedHeight *********
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetInterpolatedHeight_Parms
	{
		FVector WorldPosition;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Utilities" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInterpolatedHeight constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInterpolatedHeight constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInterpolatedHeight Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetInterpolatedHeight_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetInterpolatedHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::PropPointers) < 2048);
// ********** End Function GetInterpolatedHeight Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetInterpolatedHeight", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::RealtimeMeshHeightfieldCollision_eventGetInterpolatedHeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::RealtimeMeshHeightfieldCollision_eventGetInterpolatedHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetInterpolatedHeight)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInterpolatedHeight(Z_Param_Out_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetInterpolatedHeight ***********

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetWorldPositionFromGridCoordinates 
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms
	{
		int32 X;
		int32 Y;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Utilities" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldPositionFromGridCoordinates constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldPositionFromGridCoordinates constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldPositionFromGridCoordinates Property Definitions **************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::PropPointers) < 2048);
// ********** End Function GetWorldPositionFromGridCoordinates Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetWorldPositionFromGridCoordinates", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::RealtimeMeshHeightfieldCollision_eventGetWorldPositionFromGridCoordinates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetWorldPositionFromGridCoordinates)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWorldPositionFromGridCoordinates(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetWorldPositionFromGridCoordinates 

// ********** Begin Class URealtimeMeshHeightfieldCollision Function GetWorldSizeFromGridSize ******
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventGetWorldSizeFromGridSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Utilities" },
		{ "Comment", "// Utility functions\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Utility functions" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldSizeFromGridSize constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldSizeFromGridSize constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldSizeFromGridSize Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventGetWorldSizeFromGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::PropPointers) < 2048);
// ********** End Function GetWorldSizeFromGridSize Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "GetWorldSizeFromGridSize", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::RealtimeMeshHeightfieldCollision_eventGetWorldSizeFromGridSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::RealtimeMeshHeightfieldCollision_eventGetWorldSizeFromGridSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execGetWorldSizeFromGridSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetWorldSizeFromGridSize();
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function GetWorldSizeFromGridSize ********

// ********** Begin Class URealtimeMeshHeightfieldCollision Function ModifyHeightRegion ************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 SizeX;
		int32 SizeY;
		float HeightDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ModifyHeightRegion constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ModifyHeightRegion constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ModifyHeightRegion Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_HeightDelta = { "HeightDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms, HeightDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::NewProp_HeightDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::PropPointers) < 2048);
// ********** End Function ModifyHeightRegion Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "ModifyHeightRegion", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventModifyHeightRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execModifyHeightRegion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyHeightRegion(Z_Param_StartX,Z_Param_StartY,Z_Param_SizeX,Z_Param_SizeY,Z_Param_HeightDelta);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function ModifyHeightRegion **************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetCellMaterialIndex **********
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms
	{
		int32 CellX;
		int32 CellY;
		uint8 MaterialIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCellMaterialIndex constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCellMaterialIndex constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCellMaterialIndex Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_CellX = { "CellX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms, CellX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_CellY = { "CellY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms, CellY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms, MaterialIndex), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_CellX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_CellY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::PropPointers) < 2048);
// ********** End Function SetCellMaterialIndex Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetCellMaterialIndex", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetCellMaterialIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CellX);
	P_GET_PROPERTY(FIntProperty,Z_Param_CellY);
	P_GET_PROPERTY(FByteProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCellMaterialIndex(Z_Param_CellX,Z_Param_CellY,Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetCellMaterialIndex ************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetCellMaterialIndicesRegion **
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 SizeX;
		int32 SizeY;
		uint8 MaterialIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCellMaterialIndicesRegion constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCellMaterialIndicesRegion constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCellMaterialIndicesRegion Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms, MaterialIndex), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::PropPointers) < 2048);
// ********** End Function SetCellMaterialIndicesRegion Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetCellMaterialIndicesRegion", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::RealtimeMeshHeightfieldCollision_eventSetCellMaterialIndicesRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetCellMaterialIndicesRegion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FByteProperty,Z_Param_MaterialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCellMaterialIndicesRegion(Z_Param_StartX,Z_Param_StartY,Z_Param_SizeX,Z_Param_SizeY,Z_Param_MaterialIndex);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetCellMaterialIndicesRegion ****

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetHeight *********************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetHeight_Parms
	{
		int32 X;
		int32 Y;
		float Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeight constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeight constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeight Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeight_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeight_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeight_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::PropPointers) < 2048);
// ********** End Function SetHeight Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetHeight", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::RealtimeMeshHeightfieldCollision_eventSetHeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::RealtimeMeshHeightfieldCollision_eventSetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetHeight)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeight(Z_Param_X,Z_Param_Y,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetHeight ***********************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetHeightFieldData ************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms
	{
		FRealtimeMeshHeightFieldCollisionData NewData;
		bool bValidateData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "Comment", "// Height data operations\n" },
		{ "CPP_Default_bValidateData", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Height data operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeightFieldData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewData;
	static void NewProp_bValidateData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeightFieldData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeightFieldData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms, NewData), Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewData_MetaData), NewProp_NewData_MetaData) }; // 1064560003
void Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_bValidateData_SetBit(void* Obj)
{
	((RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms*)Obj)->bValidateData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_bValidateData = { "bValidateData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms), &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_bValidateData_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms), &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_NewData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_bValidateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::PropPointers) < 2048);
// ********** End Function SetHeightFieldData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetHeightFieldData", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightFieldData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetHeightFieldData)
{
	P_GET_STRUCT_REF(FRealtimeMeshHeightFieldCollisionData,Z_Param_Out_NewData);
	P_GET_UBOOL(Z_Param_bValidateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetHeightFieldData(Z_Param_Out_NewData,Z_Param_bValidateData);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetHeightFieldData **************

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetHeightfieldPhysicalMaterial 
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms
	{
		int32 MaterialIndex;
		UPhysicalMaterial* Material;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Materials" },
		{ "Comment", "// Material operations\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
		{ "ToolTip", "Material operations" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeightfieldPhysicalMaterial constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeightfieldPhysicalMaterial constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeightfieldPhysicalMaterial Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms, MaterialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms, Material), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms), &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::PropPointers) < 2048);
// ********** End Function SetHeightfieldPhysicalMaterial Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetHeightfieldPhysicalMaterial", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightfieldPhysicalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetHeightfieldPhysicalMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetHeightfieldPhysicalMaterial(Z_Param_MaterialIndex,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetHeightfieldPhysicalMaterial **

// ********** Begin Class URealtimeMeshHeightfieldCollision Function SetHeightRegion ***************
struct Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics
{
	struct RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms
	{
		int32 StartX;
		int32 StartY;
		int32 SizeX;
		int32 SizeY;
		TArray<float> Heights;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Collision|Height Data" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Heights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeightRegion constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Heights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Heights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeightRegion constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeightRegion Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_Heights_Inner = { "Heights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_Heights = { "Heights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms, Heights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Heights_MetaData), NewProp_Heights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_Heights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::NewProp_Heights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::PropPointers) < 2048);
// ********** End Function SetHeightRegion Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshHeightfieldCollision, nullptr, "SetHeightRegion", 	Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::RealtimeMeshHeightfieldCollision_eventSetHeightRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshHeightfieldCollision::execSetHeightRegion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_TARRAY_REF(float,Z_Param_Out_Heights);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightRegion(Z_Param_StartX,Z_Param_StartY,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Out_Heights);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshHeightfieldCollision Function SetHeightRegion *****************

// ********** Begin Class URealtimeMeshHeightfieldCollision ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision;
UClass* URealtimeMeshHeightfieldCollision::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshHeightfieldCollision;
	if (!Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshHeightfieldCollision"),
			Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.InnerSingleton,
			StaticRegisterNativesURealtimeMeshHeightfieldCollision,
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
	return Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshHeightfieldCollision_NoRegister()
{
	return URealtimeMeshHeightfieldCollision::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "RealtimeMeshHeightfieldCollision.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshHeightfieldCollision.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshHeightfieldCollision constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URealtimeMeshHeightfieldCollision constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddHeightfieldPhysicalMaterial"), .Pointer = &URealtimeMeshHeightfieldCollision::execAddHeightfieldPhysicalMaterial },
		{ .NameUTF8 = UTF8TEXT("BeginBatchUpdate"), .Pointer = &URealtimeMeshHeightfieldCollision::execBeginBatchUpdate },
		{ .NameUTF8 = UTF8TEXT("EndBatchUpdate"), .Pointer = &URealtimeMeshHeightfieldCollision::execEndBatchUpdate },
		{ .NameUTF8 = UTF8TEXT("GetCellMaterialIndex"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetCellMaterialIndex },
		{ .NameUTF8 = UTF8TEXT("GetGridCoordinatesFromWorldPosition"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetGridCoordinatesFromWorldPosition },
		{ .NameUTF8 = UTF8TEXT("GetHeight"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetHeight },
		{ .NameUTF8 = UTF8TEXT("GetHeightfieldPhysicalMaterial"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetHeightfieldPhysicalMaterial },
		{ .NameUTF8 = UTF8TEXT("GetHeightRegion"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetHeightRegion },
		{ .NameUTF8 = UTF8TEXT("GetInterpolatedHeight"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetInterpolatedHeight },
		{ .NameUTF8 = UTF8TEXT("GetWorldPositionFromGridCoordinates"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetWorldPositionFromGridCoordinates },
		{ .NameUTF8 = UTF8TEXT("GetWorldSizeFromGridSize"), .Pointer = &URealtimeMeshHeightfieldCollision::execGetWorldSizeFromGridSize },
		{ .NameUTF8 = UTF8TEXT("ModifyHeightRegion"), .Pointer = &URealtimeMeshHeightfieldCollision::execModifyHeightRegion },
		{ .NameUTF8 = UTF8TEXT("SetCellMaterialIndex"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetCellMaterialIndex },
		{ .NameUTF8 = UTF8TEXT("SetCellMaterialIndicesRegion"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetCellMaterialIndicesRegion },
		{ .NameUTF8 = UTF8TEXT("SetHeight"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetHeight },
		{ .NameUTF8 = UTF8TEXT("SetHeightFieldData"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetHeightFieldData },
		{ .NameUTF8 = UTF8TEXT("SetHeightfieldPhysicalMaterial"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetHeightfieldPhysicalMaterial },
		{ .NameUTF8 = UTF8TEXT("SetHeightRegion"), .Pointer = &URealtimeMeshHeightfieldCollision::execSetHeightRegion },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_AddHeightfieldPhysicalMaterial, "AddHeightfieldPhysicalMaterial" }, // 1220444992
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_BeginBatchUpdate, "BeginBatchUpdate" }, // 4281614234
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_EndBatchUpdate, "EndBatchUpdate" }, // 1997615380
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetCellMaterialIndex, "GetCellMaterialIndex" }, // 1945571928
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetGridCoordinatesFromWorldPosition, "GetGridCoordinatesFromWorldPosition" }, // 2806635142
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeight, "GetHeight" }, // 926319623
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightfieldPhysicalMaterial, "GetHeightfieldPhysicalMaterial" }, // 649760167
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetHeightRegion, "GetHeightRegion" }, // 4098434147
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetInterpolatedHeight, "GetInterpolatedHeight" }, // 2549582285
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldPositionFromGridCoordinates, "GetWorldPositionFromGridCoordinates" }, // 148728846
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_GetWorldSizeFromGridSize, "GetWorldSizeFromGridSize" }, // 901084629
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_ModifyHeightRegion, "ModifyHeightRegion" }, // 1799490370
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndex, "SetCellMaterialIndex" }, // 2560683810
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetCellMaterialIndicesRegion, "SetCellMaterialIndicesRegion" }, // 1525453469
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeight, "SetHeight" }, // 2101181497
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightFieldData, "SetHeightFieldData" }, // 296202401
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightfieldPhysicalMaterial, "SetHeightfieldPhysicalMaterial" }, // 4009703858
		{ &Z_Construct_UFunction_URealtimeMeshHeightfieldCollision_SetHeightRegion, "SetHeightRegion" }, // 2712431127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshHeightfieldCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics

// ********** Begin Class URealtimeMeshHeightfieldCollision Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URealtimeMeshHeightfieldCollision, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::NewProp_BodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::PropPointers) < 2048);
// ********** End Class URealtimeMeshHeightfieldCollision Property Definitions *********************
UObject* (*const Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::ClassParams = {
	&URealtimeMeshHeightfieldCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::Class_MetaDataParams)
};
void URealtimeMeshHeightfieldCollision::StaticRegisterNativesURealtimeMeshHeightfieldCollision()
{
	UClass* Class = URealtimeMeshHeightfieldCollision::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshHeightfieldCollision()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.OuterSingleton, Z_Construct_UClass_URealtimeMeshHeightfieldCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshHeightfieldCollision);
URealtimeMeshHeightfieldCollision::~URealtimeMeshHeightfieldCollision() {}
// ********** End Class URealtimeMeshHeightfieldCollision ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshHeightFieldCollisionData::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshHeightFieldCollisionData_Statics::NewStructOps, TEXT("RealtimeMeshHeightFieldCollisionData"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshHeightFieldCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshHeightFieldCollisionData), 1064560003U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshHeightfieldCollision, URealtimeMeshHeightfieldCollision::StaticClass, TEXT("URealtimeMeshHeightfieldCollision"), &Z_Registration_Info_UClass_URealtimeMeshHeightfieldCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshHeightfieldCollision), 3291989891U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_3066102167{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExt_Public_RealtimeMeshHeightfieldCollision_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
