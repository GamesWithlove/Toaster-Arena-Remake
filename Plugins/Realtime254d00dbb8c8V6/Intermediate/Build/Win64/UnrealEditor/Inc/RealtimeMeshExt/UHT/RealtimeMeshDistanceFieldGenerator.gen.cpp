// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshDistanceFieldGenerator.h"
#include "Engine/LatentActionManager.h"
#include "Mesh/RealtimeMeshDistanceField.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshDistanceFieldGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceField();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions ************************
struct Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshDistanceFieldGeneratorOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshDistanceFieldGeneratorOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAsIfTwoSided_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePointQuery_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadedGeneration_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
	static void NewProp_bGenerateAsIfTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAsIfTwoSided;
	static void NewProp_bUsePointQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePointQuery;
	static void NewProp_bMultiThreadedGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadedGeneration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshDistanceFieldGeneratorOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions;
class UScriptStruct* FRealtimeMeshDistanceFieldGeneratorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshDistanceFieldGeneratorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions Property Definitions ***
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshDistanceFieldGeneratorOptions, DistanceFieldResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldResolutionScale_MetaData), NewProp_DistanceFieldResolutionScale_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided_SetBit(void* Obj)
{
	((FRealtimeMeshDistanceFieldGeneratorOptions*)Obj)->bGenerateAsIfTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided = { "bGenerateAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDistanceFieldGeneratorOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAsIfTwoSided_MetaData), NewProp_bGenerateAsIfTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bUsePointQuery_SetBit(void* Obj)
{
	((FRealtimeMeshDistanceFieldGeneratorOptions*)Obj)->bUsePointQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bUsePointQuery = { "bUsePointQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDistanceFieldGeneratorOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bUsePointQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePointQuery_MetaData), NewProp_bUsePointQuery_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration_SetBit(void* Obj)
{
	((FRealtimeMeshDistanceFieldGeneratorOptions*)Obj)->bMultiThreadedGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration = { "bMultiThreadedGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshDistanceFieldGeneratorOptions), &Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreadedGeneration_MetaData), NewProp_bMultiThreadedGeneration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_DistanceFieldResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bUsePointQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions Property Definitions *****
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshDistanceFieldGeneratorOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshDistanceFieldGeneratorOptions),
	alignof(FRealtimeMeshDistanceFieldGeneratorOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshDistanceFieldGeneratorOptions **************************

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForDynamicMesh 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms
	{
		UDynamicMesh* DynamicMesh;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForDynamicMesh constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForDynamicMesh constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForDynamicMesh Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForDynamicMesh Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMesh(Z_Param_DynamicMesh,Z_Param_Out_DistanceField,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForDynamicMesh 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForDynamicMeshAsync 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		UDynamicMesh* DynamicMesh;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshDistanceField DistanceField;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForDynamicMeshAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForDynamicMeshAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForDynamicMeshAsync Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::NewProp_DistanceField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForDynamicMeshAsync Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForDynamicMeshAsync", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForDynamicMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForDynamicMeshAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForDynamicMeshAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_DynamicMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_DistanceField);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForDynamicMeshAsync 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForRealtimeMesh 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms
	{
		URealtimeMeshSimple* RealtimeMesh;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForRealtimeMesh constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForRealtimeMesh constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForRealtimeMesh Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_RealtimeMesh = { "RealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms, RealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_RealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForRealtimeMesh Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForRealtimeMesh)
{
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_RealtimeMesh);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForRealtimeMesh(Z_Param_RealtimeMesh,Z_Param_Out_DistanceField,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForRealtimeMesh 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForRealtimeMeshAsync 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		URealtimeMeshSimple* RealtimeMesh;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshDistanceField DistanceField;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForRealtimeMeshAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForRealtimeMeshAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForRealtimeMeshAsync Property Definitions ********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_RealtimeMesh = { "RealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, RealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_RealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::NewProp_DistanceField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForRealtimeMeshAsync Property Definitions **********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForRealtimeMeshAsync", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForRealtimeMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForRealtimeMeshAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_RealtimeMesh);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForRealtimeMeshAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_RealtimeMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_DistanceField);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForRealtimeMeshAsync 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForStreamSet 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms
	{
		URealtimeMeshStreamSet* StreamSet;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForStreamSet constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForStreamSet constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForStreamSet Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_StreamSet = { "StreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms, StreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_StreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForStreamSet Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForStreamSet", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForStreamSet)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_StreamSet);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSet(Z_Param_StreamSet,Z_Param_Out_DistanceField,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForStreamSet 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForStreamSetAsync 
struct Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics
{
	struct RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		URealtimeMeshStreamSet* StreamSet;
		FRealtimeMeshDistanceFieldGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshDistanceField DistanceField;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateDistanceFieldForStreamSetAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateDistanceFieldForStreamSetAsync constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateDistanceFieldForStreamSetAsync Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_StreamSet = { "StreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, StreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 3615392370
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(0, nullptr) }; // 3782703035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_StreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::NewProp_DistanceField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateDistanceFieldForStreamSetAsync Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, nullptr, "GenerateDistanceFieldForStreamSetAsync", 	Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::RealtimeMeshDistanceFieldGeneration_eventGenerateDistanceFieldForStreamSetAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForStreamSetAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_StreamSet);
	P_GET_STRUCT(FRealtimeMeshDistanceFieldGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshDistanceFieldGeneration::GenerateDistanceFieldForStreamSetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_StreamSet,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_DistanceField);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshDistanceFieldGeneration Function GenerateDistanceFieldForStreamSetAsync 

// ********** Begin Class URealtimeMeshDistanceFieldGeneration *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration;
UClass* URealtimeMeshDistanceFieldGeneration::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshDistanceFieldGeneration;
	if (!Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshDistanceFieldGeneration"),
			Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.InnerSingleton,
			StaticRegisterNativesURealtimeMeshDistanceFieldGeneration,
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
	return Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_NoRegister()
{
	return URealtimeMeshDistanceFieldGeneration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RealtimeMeshDistanceFieldGenerator.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDistanceFieldGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshDistanceFieldGeneration constinit property declarations *****
// ********** End Class URealtimeMeshDistanceFieldGeneration constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForDynamicMesh"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForDynamicMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForDynamicMeshAsync"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForDynamicMeshAsync },
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForRealtimeMesh"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForRealtimeMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForRealtimeMeshAsync"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForRealtimeMeshAsync },
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForStreamSet"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForStreamSet },
		{ .NameUTF8 = UTF8TEXT("GenerateDistanceFieldForStreamSetAsync"), .Pointer = &URealtimeMeshDistanceFieldGeneration::execGenerateDistanceFieldForStreamSetAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMesh, "GenerateDistanceFieldForDynamicMesh" }, // 474728015
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForDynamicMeshAsync, "GenerateDistanceFieldForDynamicMeshAsync" }, // 1812323826
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMesh, "GenerateDistanceFieldForRealtimeMesh" }, // 2028182941
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForRealtimeMeshAsync, "GenerateDistanceFieldForRealtimeMeshAsync" }, // 426869514
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSet, "GenerateDistanceFieldForStreamSet" }, // 39047357
		{ &Z_Construct_UFunction_URealtimeMeshDistanceFieldGeneration_GenerateDistanceFieldForStreamSetAsync, "GenerateDistanceFieldForStreamSetAsync" }, // 464373809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshDistanceFieldGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::ClassParams = {
	&URealtimeMeshDistanceFieldGeneration::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::Class_MetaDataParams)
};
void URealtimeMeshDistanceFieldGeneration::StaticRegisterNativesURealtimeMeshDistanceFieldGeneration()
{
	UClass* Class = URealtimeMeshDistanceFieldGeneration::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.OuterSingleton, Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration.OuterSingleton;
}
URealtimeMeshDistanceFieldGeneration::URealtimeMeshDistanceFieldGeneration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshDistanceFieldGeneration);
URealtimeMeshDistanceFieldGeneration::~URealtimeMeshDistanceFieldGeneration() {}
// ********** End Class URealtimeMeshDistanceFieldGeneration ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshDistanceFieldGeneratorOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions_Statics::NewStructOps, TEXT("RealtimeMeshDistanceFieldGeneratorOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshDistanceFieldGeneratorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshDistanceFieldGeneratorOptions), 3615392370U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshDistanceFieldGeneration, URealtimeMeshDistanceFieldGeneration::StaticClass, TEXT("URealtimeMeshDistanceFieldGeneration"), &Z_Registration_Info_UClass_URealtimeMeshDistanceFieldGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshDistanceFieldGeneration), 2949275510U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_840406811{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshDistanceFieldGenerator_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
