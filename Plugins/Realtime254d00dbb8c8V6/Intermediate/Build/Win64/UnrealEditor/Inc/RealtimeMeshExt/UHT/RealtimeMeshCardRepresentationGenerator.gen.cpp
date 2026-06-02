// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshCardRepresentationGenerator.h"
#include "Engine/LatentActionManager.h"
#include "Mesh/RealtimeMeshCardRepresentation.h"
#include "Mesh/RealtimeMeshDistanceField.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshCardRepresentationGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSimple_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister();
REALTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation();
REALTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshDistanceField();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_NoRegister();
REALTIMEMESHEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions *******************
struct Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRealtimeMeshCardRepresentationGeneratorOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRealtimeMeshCardRepresentationGeneratorOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadedGeneration_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLumenMeshCards_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAsIfTwoSided_MetaData[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions constinit property declarations 
	static void NewProp_bMultiThreadedGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadedGeneration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLumenMeshCards;
	static void NewProp_bGenerateAsIfTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAsIfTwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtimeMeshCardRepresentationGeneratorOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions;
class UScriptStruct* FRealtimeMeshCardRepresentationGeneratorOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, (UObject*)Z_Construct_UPackage__Script_RealtimeMeshExt(), TEXT("RealtimeMeshCardRepresentationGeneratorOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions Property Definitions 
void Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration_SetBit(void* Obj)
{
	((FRealtimeMeshCardRepresentationGeneratorOptions*)Obj)->bMultiThreadedGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration = { "bMultiThreadedGeneration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCardRepresentationGeneratorOptions), &Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreadedGeneration_MetaData), NewProp_bMultiThreadedGeneration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_MaxLumenMeshCards = { "MaxLumenMeshCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRealtimeMeshCardRepresentationGeneratorOptions, MaxLumenMeshCards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLumenMeshCards_MetaData), NewProp_MaxLumenMeshCards_MetaData) };
void Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided_SetBit(void* Obj)
{
	((FRealtimeMeshCardRepresentationGeneratorOptions*)Obj)->bGenerateAsIfTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided = { "bGenerateAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRealtimeMeshCardRepresentationGeneratorOptions), &Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAsIfTwoSided_MetaData), NewProp_bGenerateAsIfTwoSided_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bMultiThreadedGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_MaxLumenMeshCards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewProp_bGenerateAsIfTwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions Property Definitions 
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
	nullptr,
	&NewStructOps,
	"RealtimeMeshCardRepresentationGeneratorOptions",
	Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::PropPointers),
	sizeof(FRealtimeMeshCardRepresentationGeneratorOptions),
	alignof(FRealtimeMeshCardRepresentationGeneratorOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.InnerSingleton, Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions.InnerSingleton);
}
// ********** End ScriptStruct FRealtimeMeshCardRepresentationGeneratorOptions *********************

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForDynamicMesh 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms
	{
		UDynamicMesh* DynamicMesh;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshCardRepresentation CardRepresentation;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DistanceField" },
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForDynamicMesh constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForDynamicMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForDynamicMesh Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceField_MetaData), NewProp_DistanceField_MetaData) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_CardRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForDynamicMesh Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForDynamicMesh", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMesh(Z_Param_DynamicMesh,Z_Param_Out_DistanceField,Z_Param_Out_CardRepresentation,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForDynamicMesh 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForDynamicMeshAsync 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		UDynamicMesh* DynamicMesh;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshCardRepresentation CardRepresentation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForDynamicMeshAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForDynamicMeshAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForDynamicMeshAsync Property Definitions ****
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceField_MetaData), NewProp_DistanceField_MetaData) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::NewProp_CardRepresentation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForDynamicMeshAsync Property Definitions ******
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForDynamicMeshAsync", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForDynamicMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForDynamicMeshAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForDynamicMeshAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_DynamicMesh,Z_Param_Out_DistanceField,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_CardRepresentation);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForDynamicMeshAsync 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForRealtimeMesh 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms
	{
		URealtimeMeshSimple* RealtimeMesh;
		FRealtimeMeshCardRepresentation CardRepresentation;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DistanceField" },
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForRealtimeMesh constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForRealtimeMesh constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForRealtimeMesh Property Definitions ********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_RealtimeMesh = { "RealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms, RealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_RealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_CardRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForRealtimeMesh Property Definitions **********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForRealtimeMesh", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForRealtimeMesh)
{
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_RealtimeMesh);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForRealtimeMesh(Z_Param_RealtimeMesh,Z_Param_Out_CardRepresentation,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForRealtimeMesh 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForRealtimeMeshAsync 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		URealtimeMeshSimple* RealtimeMesh;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshCardRepresentation CardRepresentation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForRealtimeMeshAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForRealtimeMeshAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForRealtimeMeshAsync Property Definitions ***
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_RealtimeMesh = { "RealtimeMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, RealtimeMesh), Z_Construct_UClass_URealtimeMeshSimple_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_RealtimeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::NewProp_CardRepresentation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForRealtimeMeshAsync Property Definitions *****
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForRealtimeMeshAsync", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForRealtimeMeshAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForRealtimeMeshAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(URealtimeMeshSimple,Z_Param_RealtimeMesh);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForRealtimeMeshAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_RealtimeMesh,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_CardRepresentation);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForRealtimeMeshAsync 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForStreamSet 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms
	{
		URealtimeMeshStreamSet* StreamSet;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshCardRepresentation CardRepresentation;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DistanceField" },
		{ "Category", "RealtimeMesh|Representation" },
		{ "CPP_Default_Options", "()" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForStreamSet constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForStreamSet constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForStreamSet Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_StreamSet = { "StreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms, StreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceField_MetaData), NewProp_DistanceField_MetaData) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms, ReturnValue), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_StreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_CardRepresentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForStreamSet Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForStreamSet", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForStreamSet)
{
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_StreamSet);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERealtimeMeshOutcomePins*)Z_Param__Result=URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSet(Z_Param_StreamSet,Z_Param_Out_DistanceField,Z_Param_Out_CardRepresentation,Z_Param_Options);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForStreamSet 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForStreamSetAsync 
struct Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics
{
	struct RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		URealtimeMeshStreamSet* StreamSet;
		FRealtimeMeshDistanceField DistanceField;
		FRealtimeMeshCardRepresentationGeneratorOptions Options;
		ERealtimeMeshOutcomePins Result;
		FRealtimeMeshCardRepresentation CardRepresentation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RealtimeMesh|Representation" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateCardRepresentationForStreamSetAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreamSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardRepresentation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateCardRepresentationForStreamSetAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateCardRepresentationForStreamSetAsync Property Definitions ******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_StreamSet = { "StreamSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, StreamSet), Z_Construct_UClass_URealtimeMeshStreamSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_DistanceField = { "DistanceField", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, DistanceField), Z_Construct_UScriptStruct_FRealtimeMeshDistanceField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceField_MetaData), NewProp_DistanceField_MetaData) }; // 3782703035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, Options), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, METADATA_PARAMS(0, nullptr) }; // 2284129666
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, Result), Z_Construct_UEnum_RealtimeMeshComponent_ERealtimeMeshOutcomePins, METADATA_PARAMS(0, nullptr) }; // 4220098076
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_CardRepresentation = { "CardRepresentation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms, CardRepresentation), Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentation, METADATA_PARAMS(0, nullptr) }; // 3151730207
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_StreamSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_DistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::NewProp_CardRepresentation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::PropPointers) < 2048);
// ********** End Function GenerateCardRepresentationForStreamSetAsync Property Definitions ********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, nullptr, "GenerateCardRepresentationForStreamSetAsync", 	Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::RealtimeMeshCardRepresentationGenerator_eventGenerateCardRepresentationForStreamSetAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForStreamSetAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(URealtimeMeshStreamSet,Z_Param_StreamSet);
	P_GET_STRUCT_REF(FRealtimeMeshDistanceField,Z_Param_Out_DistanceField);
	P_GET_STRUCT(FRealtimeMeshCardRepresentationGeneratorOptions,Z_Param_Options);
	P_GET_ENUM_REF(ERealtimeMeshOutcomePins,Z_Param_Out_Result);
	P_GET_STRUCT_REF(FRealtimeMeshCardRepresentation,Z_Param_Out_CardRepresentation);
	P_FINISH;
	P_NATIVE_BEGIN;
	URealtimeMeshCardRepresentationGenerator::GenerateCardRepresentationForStreamSetAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_StreamSet,Z_Param_Out_DistanceField,Z_Param_Options,(ERealtimeMeshOutcomePins&)(Z_Param_Out_Result),Z_Param_Out_CardRepresentation);
	P_NATIVE_END;
}
// ********** End Class URealtimeMeshCardRepresentationGenerator Function GenerateCardRepresentationForStreamSetAsync 

// ********** Begin Class URealtimeMeshCardRepresentationGenerator *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator;
UClass* URealtimeMeshCardRepresentationGenerator::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshCardRepresentationGenerator;
	if (!Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshCardRepresentationGenerator"),
			Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.InnerSingleton,
			StaticRegisterNativesURealtimeMeshCardRepresentationGenerator,
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
	return Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_NoRegister()
{
	return URealtimeMeshCardRepresentationGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RealtimeMeshCardRepresentationGenerator.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshCardRepresentationGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshCardRepresentationGenerator constinit property declarations *
// ********** End Class URealtimeMeshCardRepresentationGenerator constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForDynamicMesh"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForDynamicMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForDynamicMeshAsync"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForDynamicMeshAsync },
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForRealtimeMesh"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForRealtimeMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForRealtimeMeshAsync"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForRealtimeMeshAsync },
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForStreamSet"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForStreamSet },
		{ .NameUTF8 = UTF8TEXT("GenerateCardRepresentationForStreamSetAsync"), .Pointer = &URealtimeMeshCardRepresentationGenerator::execGenerateCardRepresentationForStreamSetAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMesh, "GenerateCardRepresentationForDynamicMesh" }, // 3601011157
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForDynamicMeshAsync, "GenerateCardRepresentationForDynamicMeshAsync" }, // 4218802603
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMesh, "GenerateCardRepresentationForRealtimeMesh" }, // 3062076098
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForRealtimeMeshAsync, "GenerateCardRepresentationForRealtimeMeshAsync" }, // 3922724842
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSet, "GenerateCardRepresentationForStreamSet" }, // 3784020164
		{ &Z_Construct_UFunction_URealtimeMeshCardRepresentationGenerator_GenerateCardRepresentationForStreamSetAsync, "GenerateCardRepresentationForStreamSetAsync" }, // 1133629363
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshCardRepresentationGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::ClassParams = {
	&URealtimeMeshCardRepresentationGenerator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::Class_MetaDataParams)
};
void URealtimeMeshCardRepresentationGenerator::StaticRegisterNativesURealtimeMeshCardRepresentationGenerator()
{
	UClass* Class = URealtimeMeshCardRepresentationGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::Funcs));
}
UClass* Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.OuterSingleton, Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator.OuterSingleton;
}
URealtimeMeshCardRepresentationGenerator::URealtimeMeshCardRepresentationGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshCardRepresentationGenerator);
URealtimeMeshCardRepresentationGenerator::~URealtimeMeshCardRepresentationGenerator() {}
// ********** End Class URealtimeMeshCardRepresentationGenerator ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRealtimeMeshCardRepresentationGeneratorOptions::StaticStruct, Z_Construct_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions_Statics::NewStructOps, TEXT("RealtimeMeshCardRepresentationGeneratorOptions"),&Z_Registration_Info_UScriptStruct_FRealtimeMeshCardRepresentationGeneratorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtimeMeshCardRepresentationGeneratorOptions), 2284129666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshCardRepresentationGenerator, URealtimeMeshCardRepresentationGenerator::StaticClass, TEXT("URealtimeMeshCardRepresentationGenerator"), &Z_Registration_Info_UClass_URealtimeMeshCardRepresentationGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshCardRepresentationGenerator), 2701793300U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_625907048{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshCardRepresentationGenerator_h__Script_RealtimeMeshExt_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
