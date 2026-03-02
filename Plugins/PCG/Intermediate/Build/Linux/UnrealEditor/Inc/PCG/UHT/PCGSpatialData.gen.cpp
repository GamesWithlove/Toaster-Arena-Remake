// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGSpatialData.h"
#include "PCG/Public/Elements/PCGProjectionParams.h"
#include "PCG/Public/PCGContext.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSpatialData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGDifferenceData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGIntersectionData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionData_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGProjectionParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGSpatialData::execInitializeFromData)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InSource);
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadataParentOverride);
		P_GET_UBOOL(Z_Param_bInheritMetadata);
		P_GET_UBOOL(Z_Param_bInheritAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFromData(Z_Param_InSource,Z_Param_InMetadataParentOverride,Z_Param_bInheritMetadata,Z_Param_bInheritAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execCreateEmptyMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGMetadata**)Z_Param__Result=P_THIS->CreateEmptyMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execMutableMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGMetadata**)Z_Param__Result=P_THIS->MutableMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execConstMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGMetadata**)Z_Param__Result=P_THIS->ConstMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execSubtract)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGDifferenceData**)Z_Param__Result=P_THIS->Subtract(Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execUnionWith)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGUnionData**)Z_Param__Result=P_THIS->UnionWith(Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execProjectOn)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InOther);
		P_GET_STRUCT_REF(FPCGProjectionParams,Z_Param_Out_InParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGSpatialData**)Z_Param__Result=P_THIS->ProjectOn(Z_Param_InOther,Z_Param_Out_InParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execIntersectWith)
	{
		P_GET_OBJECT(UPCGSpatialData,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGIntersectionData**)Z_Param__Result=P_THIS->IntersectWith(Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execHasNonTrivialTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNonTrivialTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execProjectPoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBounds);
		P_GET_STRUCT_REF(FPCGProjectionParams,Z_Param_Out_InParams);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_GET_OBJECT(UPCGMetadata,Z_Param_OutMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProjectPoint(Z_Param_Out_InTransform,Z_Param_Out_InBounds,Z_Param_Out_InParams,Z_Param_Out_OutPoint,Z_Param_OutMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execSamplePoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Bounds);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_GET_OBJECT(UPCGMetadata,Z_Param_OutMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SamplePoint(Z_Param_Out_Transform,Z_Param_Out_Bounds,Z_Param_Out_OutPoint,Z_Param_OutMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execToPointDataWithContext)
	{
		P_GET_STRUCT_REF(FPCGContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGPointData**)Z_Param__Result=P_THIS->ToPointDataWithContext(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execToPointData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGPointData**)Z_Param__Result=P_THIS->ToPointData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execGetDensityAtPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDensityAtPosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execGetNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execGetStrictBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetStrictBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGSpatialData::execGetDimension)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDimension();
		P_NATIVE_END;
	}
	void UPCGSpatialData::StaticRegisterNativesUPCGSpatialData()
	{
		UClass* Class = UPCGSpatialData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstMetadata", &UPCGSpatialData::execConstMetadata },
			{ "CreateEmptyMetadata", &UPCGSpatialData::execCreateEmptyMetadata },
			{ "GetBounds", &UPCGSpatialData::execGetBounds },
			{ "GetDensityAtPosition", &UPCGSpatialData::execGetDensityAtPosition },
			{ "GetDimension", &UPCGSpatialData::execGetDimension },
			{ "GetNormal", &UPCGSpatialData::execGetNormal },
			{ "GetStrictBounds", &UPCGSpatialData::execGetStrictBounds },
			{ "HasNonTrivialTransform", &UPCGSpatialData::execHasNonTrivialTransform },
			{ "InitializeFromData", &UPCGSpatialData::execInitializeFromData },
			{ "IntersectWith", &UPCGSpatialData::execIntersectWith },
			{ "MutableMetadata", &UPCGSpatialData::execMutableMetadata },
			{ "ProjectOn", &UPCGSpatialData::execProjectOn },
			{ "ProjectPoint", &UPCGSpatialData::execProjectPoint },
			{ "SamplePoint", &UPCGSpatialData::execSamplePoint },
			{ "Subtract", &UPCGSpatialData::execSubtract },
			{ "ToPointData", &UPCGSpatialData::execToPointData },
			{ "ToPointDataWithContext", &UPCGSpatialData::execToPointDataWithContext },
			{ "UnionWith", &UPCGSpatialData::execUnionWith },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics
	{
		struct PCGSpatialData_eventConstMetadata_Parms
		{
			const UPCGMetadata* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventConstMetadata_Parms, ReturnValue), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "ConstMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::PCGSpatialData_eventConstMetadata_Parms), Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_ConstMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_ConstMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics
	{
		struct PCGSpatialData_eventCreateEmptyMetadata_Parms
		{
			UPCGMetadata* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventCreateEmptyMetadata_Parms, ReturnValue), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Metadata" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Create Empty Metadata function is not needed anymore - it can safely be removed" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "CreateEmptyMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::PCGSpatialData_eventCreateEmptyMetadata_Parms), Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics
	{
		struct PCGSpatialData_eventGetBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns the full bounds (including density fall-off) of the data */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns the full bounds (including density fall-off) of the data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::PCGSpatialData_eventGetBounds_Parms), Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics
	{
		struct PCGSpatialData_eventGetDensityAtPosition_Parms
		{
			FVector InPosition;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetDensityAtPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetDensityAtPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** Computes the density at a given location */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Computes the density at a given location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "GetDensityAtPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::PCGSpatialData_eventGetDensityAtPosition_Parms), Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics
	{
		struct PCGSpatialData_eventGetDimension_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetDimension_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns the dimension of the data type, which has nothing to do with the dimension of its points */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns the dimension of the data type, which has nothing to do with the dimension of its points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "GetDimension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::PCGSpatialData_eventGetDimension_Parms), Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_GetDimension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_GetDimension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics
	{
		struct PCGSpatialData_eventGetNormal_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns the expected data normal (for surfaces) or eventual projection axis (for volumes) */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns the expected data normal (for surfaces) or eventual projection axis (for volumes)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "GetNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::PCGSpatialData_eventGetNormal_Parms), Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_GetNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_GetNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics
	{
		struct PCGSpatialData_eventGetStrictBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventGetStrictBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns the bounds in which the density is always 1 */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns the bounds in which the density is always 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "GetStrictBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::PCGSpatialData_eventGetStrictBounds_Parms), Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics
	{
		struct PCGSpatialData_eventHasNonTrivialTransform_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGSpatialData_eventHasNonTrivialTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGSpatialData_eventHasNonTrivialTransform_Parms), &Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns true if the data has a non-trivial transform */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns true if the data has a non-trivial transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "HasNonTrivialTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::PCGSpatialData_eventHasNonTrivialTransform_Parms), Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics
	{
		struct PCGSpatialData_eventInitializeFromData_Parms
		{
			const UPCGSpatialData* InSource;
			const UPCGMetadata* InMetadataParentOverride;
			bool bInheritMetadata;
			bool bInheritAttributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadataParentOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadataParentOverride;
		static void NewProp_bInheritMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritMetadata;
		static void NewProp_bInheritAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventInitializeFromData_Parms, InSource), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InMetadataParentOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InMetadataParentOverride = { "InMetadataParentOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventInitializeFromData_Parms, InMetadataParentOverride), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InMetadataParentOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InMetadataParentOverride_MetaData)) };
	void Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritMetadata_SetBit(void* Obj)
	{
		((PCGSpatialData_eventInitializeFromData_Parms*)Obj)->bInheritMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritMetadata = { "bInheritMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGSpatialData_eventInitializeFromData_Parms), &Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritAttributes_SetBit(void* Obj)
	{
		((PCGSpatialData_eventInitializeFromData_Parms*)Obj)->bInheritAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritAttributes = { "bInheritAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGSpatialData_eventInitializeFromData_Parms), &Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritAttributes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_InMetadataParentOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::NewProp_bInheritAttributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "CPP_Default_bInheritAttributes", "true" },
		{ "CPP_Default_bInheritMetadata", "true" },
		{ "CPP_Default_InMetadataParentOverride", "None" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "InitializeFromData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::PCGSpatialData_eventInitializeFromData_Parms), Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_InitializeFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_InitializeFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics
	{
		struct PCGSpatialData_eventIntersectWith_Parms
		{
			const UPCGSpatialData* InOther;
			UPCGIntersectionData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventIntersectWith_Parms, InOther), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventIntersectWith_Parms, ReturnValue), Z_Construct_UClass_UPCGIntersectionData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns a specialized data to intersect with another data */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns a specialized data to intersect with another data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "IntersectWith", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::PCGSpatialData_eventIntersectWith_Parms), Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_IntersectWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_IntersectWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics
	{
		struct PCGSpatialData_eventMutableMetadata_Parms
		{
			UPCGMetadata* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventMutableMetadata_Parms, ReturnValue), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "MutableMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::PCGSpatialData_eventMutableMetadata_Parms), Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_MutableMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_MutableMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics
	{
		struct PCGSpatialData_eventProjectOn_Parms
		{
			const UPCGSpatialData* InOther;
			FPCGProjectionParams InParams;
			UPCGSpatialData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectOn_Parms, InOther), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InOther_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectOn_Parms, InParams), Z_Construct_UScriptStruct_FPCGProjectionParams, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InParams_MetaData)) }; // 304869056
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectOn_Parms, ReturnValue), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "InParams" },
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns a specialized data to project this on another data of equal or higher dimension. Returns copy of this data if projection fails. */" },
		{ "CPP_Default_InParams", "()" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns a specialized data to project this on another data of equal or higher dimension. Returns copy of this data if projection fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "ProjectOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::PCGSpatialData_eventProjectOn_Parms), Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_ProjectOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_ProjectOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics
	{
		struct PCGSpatialData_eventProjectPoint_Parms
		{
			FTransform InTransform;
			FBox InBounds;
			FPCGProjectionParams InParams;
			FPCGPoint OutPoint;
			UPCGMetadata* OutMetadata;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectPoint_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InBounds = { "InBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectPoint_Parms, InBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectPoint_Parms, InParams), Z_Construct_UScriptStruct_FPCGProjectionParams, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InParams_MetaData)) }; // 304869056
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectPoint_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventProjectPoint_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGSpatialData_eventProjectPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGSpatialData_eventProjectPoint_Parms), &Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Project the query point onto this data, and sample point and metadata information at the projected position. Returns true if successful. */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Project the query point onto this data, and sample point and metadata information at the projected position. Returns true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "ProjectPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::PCGSpatialData_eventProjectPoint_Parms), Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_ProjectPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_ProjectPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics
	{
		struct PCGSpatialData_eventSamplePoint_Parms
		{
			FTransform Transform;
			FBox Bounds;
			FPCGPoint OutPoint;
			UPCGMetadata* OutMetadata;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSamplePoint_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSamplePoint_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSamplePoint_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSamplePoint_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGSpatialData_eventSamplePoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGSpatialData_eventSamplePoint_Parms), &Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_OutMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Sample rotation, scale and other attributes from this data at the query position. Returns true if Transform location and Bounds overlaps this data. */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Sample rotation, scale and other attributes from this data at the query position. Returns true if Transform location and Bounds overlaps this data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "SamplePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::PCGSpatialData_eventSamplePoint_Parms), Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_SamplePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_SamplePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics
	{
		struct PCGSpatialData_eventSubtract_Parms
		{
			const UPCGSpatialData* InOther;
			UPCGDifferenceData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSubtract_Parms, InOther), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventSubtract_Parms, ReturnValue), Z_Construct_UClass_UPCGDifferenceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "Subtract", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::PCGSpatialData_eventSubtract_Parms), Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics
	{
		struct PCGSpatialData_eventToPointData_Parms
		{
			const UPCGPointData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventToPointData_Parms, ReturnValue), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Discretizes the data into points */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The To Point Data function is deprecated - use To Point Data With Context instead." },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Discretizes the data into points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "ToPointData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::PCGSpatialData_eventToPointData_Parms), Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_ToPointData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_ToPointData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics
	{
		struct PCGSpatialData_eventToPointDataWithContext_Parms
		{
			FPCGContext Context;
			const UPCGPointData* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventToPointDataWithContext_Parms, Context), Z_Construct_UScriptStruct_FPCGContext, METADATA_PARAMS(nullptr, 0) }; // 742208121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventToPointDataWithContext_Parms, ReturnValue), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "ToPointDataWithContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::PCGSpatialData_eventToPointDataWithContext_Parms), Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics
	{
		struct PCGSpatialData_eventUnionWith_Parms
		{
			const UPCGSpatialData* InOther;
			UPCGUnionData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventUnionWith_Parms, InOther), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGSpatialData_eventUnionWith_Parms, ReturnValue), Z_Construct_UClass_UPCGUnionData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "/** Returns a specialized data to union this with another data */" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Returns a specialized data to union this with another data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGSpatialData, nullptr, "UnionWith", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::PCGSpatialData_eventUnionWith_Parms), Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGSpatialData_UnionWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGSpatialData_UnionWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSpatialData);
	UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister()
	{
		return UPCGSpatialData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSpatialData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepZeroDensityPoints_MetaData[];
#endif
		static void NewProp_bKeepZeroDensityPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepZeroDensityPoints;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSpatialData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGSpatialData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGSpatialData_ConstMetadata, "ConstMetadata" }, // 3092784502
		{ &Z_Construct_UFunction_UPCGSpatialData_CreateEmptyMetadata, "CreateEmptyMetadata" }, // 1111340120
		{ &Z_Construct_UFunction_UPCGSpatialData_GetBounds, "GetBounds" }, // 1960026120
		{ &Z_Construct_UFunction_UPCGSpatialData_GetDensityAtPosition, "GetDensityAtPosition" }, // 1043812958
		{ &Z_Construct_UFunction_UPCGSpatialData_GetDimension, "GetDimension" }, // 1933826102
		{ &Z_Construct_UFunction_UPCGSpatialData_GetNormal, "GetNormal" }, // 2526322844
		{ &Z_Construct_UFunction_UPCGSpatialData_GetStrictBounds, "GetStrictBounds" }, // 2919820032
		{ &Z_Construct_UFunction_UPCGSpatialData_HasNonTrivialTransform, "HasNonTrivialTransform" }, // 340476784
		{ &Z_Construct_UFunction_UPCGSpatialData_InitializeFromData, "InitializeFromData" }, // 2836893816
		{ &Z_Construct_UFunction_UPCGSpatialData_IntersectWith, "IntersectWith" }, // 4229263121
		{ &Z_Construct_UFunction_UPCGSpatialData_MutableMetadata, "MutableMetadata" }, // 3663003070
		{ &Z_Construct_UFunction_UPCGSpatialData_ProjectOn, "ProjectOn" }, // 2122807623
		{ &Z_Construct_UFunction_UPCGSpatialData_ProjectPoint, "ProjectPoint" }, // 1300878075
		{ &Z_Construct_UFunction_UPCGSpatialData_SamplePoint, "SamplePoint" }, // 662368050
		{ &Z_Construct_UFunction_UPCGSpatialData_Subtract, "Subtract" }, // 1876106806
		{ &Z_Construct_UFunction_UPCGSpatialData_ToPointData, "ToPointData" }, // 2559512338
		{ &Z_Construct_UFunction_UPCGSpatialData_ToPointDataWithContext, "ToPointDataWithContext" }, // 3379189129
		{ &Z_Construct_UFunction_UPCGSpatialData_UnionWith, "UnionWith" }, // 1351588583
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* \"Concrete\" data base class for PCG generation\n* This will be the base class for data classes that actually represent\n* concrete evidence of spatial data - points, surfaces, splines, etc.\n* In opposition to settings/control type of data.\n* \n* Conceptually, any concrete data can be decayed into points (potentially through transformations)\n* which hold metadata and a transform, and this is the basic currency of the PCG framework.\n*/" },
		{ "IncludePath", "Data/PCGSpatialData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "\"Concrete\" data base class for PCG generation\nThis will be the base class for data classes that actually represent\nconcrete evidence of spatial data - points, surfaces, splines, etc.\nIn opposition to settings/control type of data.\n\nConceptually, any concrete data can be decayed into points (potentially through transformations)\nwhich hold metadata and a transform, and this is the basic currency of the PCG framework." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000002005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpatialData, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGSpatialData*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSpatialData), &Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// Not accessible through blueprint to make sure the constness is preserved\n" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "ToolTip", "Not accessible through blueprint to make sure the constness is preserved" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpatialData, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSpatialData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_TargetActor,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialData_Statics::NewProp_Metadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSpatialData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSpatialData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSpatialData_Statics::ClassParams = {
		&UPCGSpatialData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGSpatialData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSpatialData()
	{
		if (!Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton, Z_Construct_UClass_UPCGSpatialData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSpatialData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSpatialData>()
	{
		return UPCGSpatialData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSpatialData);
	UPCGSpatialData::~UPCGSpatialData() {}
	void UPCGSpatialDataWithPointCache::StaticRegisterNativesUPCGSpatialDataWithPointCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSpatialDataWithPointCache);
	UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache_NoRegister()
	{
		return UPCGSpatialDataWithPointCache::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPointData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPointData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoundedPointDataBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoundedPointDataBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBoundedPointDataBoxes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedBoundedPointData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoundedPointData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBoundedPointData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGSpatialData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedPointData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedPointData = { "CachedPointData", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpatialDataWithPointCache, CachedPointData), Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedPointData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes_Inner = { "CachedBoundedPointDataBoxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes = { "CachedBoundedPointDataBoxes", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpatialDataWithPointCache, CachedBoundedPointDataBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData_Inner = { "CachedBoundedPointData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGPointData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSpatialData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData = { "CachedBoundedPointData", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSpatialDataWithPointCache, CachedBoundedPointData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedPointData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointDataBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::NewProp_CachedBoundedPointData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSpatialDataWithPointCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::ClassParams = {
		&UPCGSpatialDataWithPointCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache()
	{
		if (!Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton, Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSpatialDataWithPointCache>()
	{
		return UPCGSpatialDataWithPointCache::StaticClass();
	}
	UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSpatialDataWithPointCache);
	UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSpatialData, UPCGSpatialData::StaticClass, TEXT("UPCGSpatialData"), &Z_Registration_Info_UClass_UPCGSpatialData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSpatialData), 1535486195U) },
		{ Z_Construct_UClass_UPCGSpatialDataWithPointCache, UPCGSpatialDataWithPointCache::StaticClass, TEXT("UPCGSpatialDataWithPointCache"), &Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSpatialDataWithPointCache), 319482622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_1841887170(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
