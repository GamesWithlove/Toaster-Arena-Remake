// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGMetadata.h"
#include "PCG/Public/PCGPoint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadata() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataFilterMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOp();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGMetadata::execAccumulatePointWeightedAttributes)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadata);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_UBOOL(Z_Param_bSetNonInterpolableAttributes);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AccumulatePointWeightedAttributes(Z_Param_Out_InPoint,Z_Param_InMetadata,Z_Param_Weight,Z_Param_bSetNonInterpolableAttributes,Z_Param_Out_OutPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execResetPointWeightedAttributes)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPointWeightedAttributes(Z_Param_Out_OutPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execSetPointAttributes)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointAttributes(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_Out_OutPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execMergePointAttributes)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_PointA);
		P_GET_OBJECT(UPCGMetadata,Z_Param_MetadataA);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_PointB);
		P_GET_OBJECT(UPCGMetadata,Z_Param_MetadataB);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_TargetPoint);
		P_GET_ENUM(EPCGMetadataOp,Z_Param_Op);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergePointAttributes(Z_Param_Out_PointA,Z_Param_MetadataA,Z_Param_Out_PointB,Z_Param_MetadataB,Z_Param_Out_TargetPoint,EPCGMetadataOp(Z_Param_Op));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execSetAttributesByKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadata);
		P_GET_PROPERTY(FInt64Property,Z_Param_TargetKey);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttributesByKey(Z_Param_Key,Z_Param_InMetadata,Z_Param_TargetKey,Z_Param_Out_OutKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execAccumulateWeightedAttributesByKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_GET_UBOOL(Z_Param_bSetNonInterpolableAttributes);
		P_GET_PROPERTY(FInt64Property,Z_Param_TargetKey);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AccumulateWeightedAttributesByKey(Z_Param_Key,Z_Param_Metadata,Z_Param_Weight,Z_Param_bSetNonInterpolableAttributes,Z_Param_TargetKey,Z_Param_Out_OutKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execResetWeightedAttributesByKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_TargetKey);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetWeightedAttributesByKey(Z_Param_TargetKey,Z_Param_Out_OutKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execMergeAttributesByKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_KeyA);
		P_GET_OBJECT(UPCGMetadata,Z_Param_MetadataA);
		P_GET_PROPERTY(FInt64Property,Z_Param_KeyB);
		P_GET_OBJECT(UPCGMetadata,Z_Param_MetadataB);
		P_GET_PROPERTY(FInt64Property,Z_Param_TargetKey);
		P_GET_ENUM(EPCGMetadataOp,Z_Param_Op);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_OutKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeAttributesByKey(Z_Param_KeyA,Z_Param_MetadataA,Z_Param_KeyB,Z_Param_MetadataB,Z_Param_TargetKey,EPCGMetadataOp(Z_Param_Op),Z_Param_Out_OutKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execAddEntry)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_ParentEntryKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->AddEntry(Z_Param_ParentEntryKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execClearAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeToClear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAttribute(Z_Param_AttributeToClear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execRenameAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeToRename);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameAttribute(Z_Param_AttributeToRename,Z_Param_NewAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCopyExistingAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeToCopy);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAttributeName);
		P_GET_UBOOL(Z_Param_bKeepParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyExistingAttribute(Z_Param_AttributeToCopy,Z_Param_NewAttributeName,Z_Param_bKeepParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execDeleteAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAttribute(Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execGetAttributes)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AttributeNames);
		P_GET_TARRAY_REF(EPCGMetadataTypes,Z_Param_Out_AttributeTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttributes(Z_Param_Out_AttributeNames,Z_Param_Out_AttributeTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execHasCommonAttributes)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCommonAttributes(Z_Param_InMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execHasAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttribute(Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateBoolAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateBoolAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateStringAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateStringAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateTransformAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FTransform,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTransformAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateQuatAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FQuat,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateQuatAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateRotatorAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FRotator,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateRotatorAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateVector2Attribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FVector2D,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVector2Attribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateVector4Attribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FVector4,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVector4Attribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateVectorAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT(FVector,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateVectorAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateDoubleAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDoubleAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateFloatAttribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateFloatAttribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateInteger64Attribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FInt64Property,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInteger64Attribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCreateInteger32Attribute)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_GET_UBOOL(Z_Param_bAllowsInterpolation);
		P_GET_UBOOL(Z_Param_bOverrideParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInteger32Attribute(Z_Param_AttributeName,Z_Param_DefaultValue,Z_Param_bAllowsInterpolation,Z_Param_bOverrideParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCopyAttribute)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InOther);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeToCopy);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyAttribute(Z_Param_InOther,Z_Param_AttributeToCopy,Z_Param_NewAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execCopyAttributes)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyAttributes(Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execAddAttribute)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InOther);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttribute(Z_Param_InOther,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execAddAttributesFiltered)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InOther);
		P_GET_TSET_REF(FName,Z_Param_Out_InFilteredAttributes);
		P_GET_ENUM(EPCGMetadataFilterMode,Z_Param_InFilterMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttributesFiltered(Z_Param_InOther,Z_Param_Out_InFilteredAttributes,EPCGMetadataFilterMode(Z_Param_InFilterMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execAddAttributes)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InOther);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttributes(Z_Param_InOther);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execInitializeAsCopyWithAttributeFilter)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadataToCopy);
		P_GET_TSET_REF(FName,Z_Param_Out_InFilteredAttributes);
		P_GET_ENUM(EPCGMetadataFilterMode,Z_Param_InFilterMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAsCopyWithAttributeFilter(Z_Param_InMetadataToCopy,Z_Param_Out_InFilteredAttributes,EPCGMetadataFilterMode(Z_Param_InFilterMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execInitializeAsCopy)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadataToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAsCopy(Z_Param_InMetadataToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execInitializeWithAttributeFilter)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InParent);
		P_GET_TSET_REF(FName,Z_Param_Out_InFilteredAttributes);
		P_GET_ENUM(EPCGMetadataFilterMode,Z_Param_InFilterMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWithAttributeFilter(Z_Param_InParent,Z_Param_Out_InFilteredAttributes,EPCGMetadataFilterMode(Z_Param_InFilterMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadata::execInitialize)
	{
		P_GET_OBJECT(UPCGMetadata,Z_Param_InParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InParent);
		P_NATIVE_END;
	}
	void UPCGMetadata::StaticRegisterNativesUPCGMetadata()
	{
		UClass* Class = UPCGMetadata::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccumulatePointWeightedAttributes", &UPCGMetadata::execAccumulatePointWeightedAttributes },
			{ "AccumulateWeightedAttributesByKey", &UPCGMetadata::execAccumulateWeightedAttributesByKey },
			{ "AddAttribute", &UPCGMetadata::execAddAttribute },
			{ "AddAttributes", &UPCGMetadata::execAddAttributes },
			{ "AddAttributesFiltered", &UPCGMetadata::execAddAttributesFiltered },
			{ "AddEntry", &UPCGMetadata::execAddEntry },
			{ "ClearAttribute", &UPCGMetadata::execClearAttribute },
			{ "CopyAttribute", &UPCGMetadata::execCopyAttribute },
			{ "CopyAttributes", &UPCGMetadata::execCopyAttributes },
			{ "CopyExistingAttribute", &UPCGMetadata::execCopyExistingAttribute },
			{ "CreateBoolAttribute", &UPCGMetadata::execCreateBoolAttribute },
			{ "CreateDoubleAttribute", &UPCGMetadata::execCreateDoubleAttribute },
			{ "CreateFloatAttribute", &UPCGMetadata::execCreateFloatAttribute },
			{ "CreateInteger32Attribute", &UPCGMetadata::execCreateInteger32Attribute },
			{ "CreateInteger64Attribute", &UPCGMetadata::execCreateInteger64Attribute },
			{ "CreateQuatAttribute", &UPCGMetadata::execCreateQuatAttribute },
			{ "CreateRotatorAttribute", &UPCGMetadata::execCreateRotatorAttribute },
			{ "CreateStringAttribute", &UPCGMetadata::execCreateStringAttribute },
			{ "CreateTransformAttribute", &UPCGMetadata::execCreateTransformAttribute },
			{ "CreateVector2Attribute", &UPCGMetadata::execCreateVector2Attribute },
			{ "CreateVector4Attribute", &UPCGMetadata::execCreateVector4Attribute },
			{ "CreateVectorAttribute", &UPCGMetadata::execCreateVectorAttribute },
			{ "DeleteAttribute", &UPCGMetadata::execDeleteAttribute },
			{ "GetAttributes", &UPCGMetadata::execGetAttributes },
			{ "HasAttribute", &UPCGMetadata::execHasAttribute },
			{ "HasCommonAttributes", &UPCGMetadata::execHasCommonAttributes },
			{ "Initialize", &UPCGMetadata::execInitialize },
			{ "InitializeAsCopy", &UPCGMetadata::execInitializeAsCopy },
			{ "InitializeAsCopyWithAttributeFilter", &UPCGMetadata::execInitializeAsCopyWithAttributeFilter },
			{ "InitializeWithAttributeFilter", &UPCGMetadata::execInitializeWithAttributeFilter },
			{ "MergeAttributesByKey", &UPCGMetadata::execMergeAttributesByKey },
			{ "MergePointAttributes", &UPCGMetadata::execMergePointAttributes },
			{ "RenameAttribute", &UPCGMetadata::execRenameAttribute },
			{ "ResetPointWeightedAttributes", &UPCGMetadata::execResetPointWeightedAttributes },
			{ "ResetWeightedAttributesByKey", &UPCGMetadata::execResetWeightedAttributesByKey },
			{ "SetAttributesByKey", &UPCGMetadata::execSetAttributesByKey },
			{ "SetPointAttributes", &UPCGMetadata::execSetPointAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics
	{
		struct PCGMetadata_eventAccumulatePointWeightedAttributes_Parms
		{
			FPCGPoint InPoint;
			const UPCGMetadata* InMetadata;
			float Weight;
			bool bSetNonInterpolableAttributes;
			FPCGPoint OutPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadata;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static void NewProp_bSetNonInterpolableAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNonInterpolableAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulatePointWeightedAttributes_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InPoint_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulatePointWeightedAttributes_Parms, InMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InMetadata_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulatePointWeightedAttributes_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_bSetNonInterpolableAttributes_SetBit(void* Obj)
	{
		((PCGMetadata_eventAccumulatePointWeightedAttributes_Parms*)Obj)->bSetNonInterpolableAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_bSetNonInterpolableAttributes = { "bSetNonInterpolableAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventAccumulatePointWeightedAttributes_Parms), &Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_bSetNonInterpolableAttributes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulatePointWeightedAttributes_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_InMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_bSetNonInterpolableAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::NewProp_OutPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AccumulatePointWeightedAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::PCGMetadata_eventAccumulatePointWeightedAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics
	{
		struct PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			float Weight;
			bool bSetNonInterpolableAttributes;
			int64 TargetKey;
			int64 OutKey;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static void NewProp_bSetNonInterpolableAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetNonInterpolableAttributes;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_bSetNonInterpolableAttributes_SetBit(void* Obj)
	{
		((PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms*)Obj)->bSetNonInterpolableAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_bSetNonInterpolableAttributes = { "bSetNonInterpolableAttributes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms), &Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_bSetNonInterpolableAttributes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms, TargetKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_bSetNonInterpolableAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::NewProp_OutKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AccumulateWeightedAttributesByKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::PCGMetadata_eventAccumulateWeightedAttributesByKey_Parms), Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics
	{
		struct PCGMetadata_eventAddAttribute_Parms
		{
			const UPCGMetadata* InOther;
			FName AttributeName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttribute_Parms, InOther), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Creates missing attribute from another metadata if it is not currently present - note that this does not copy values */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Creates missing attribute from another metadata if it is not currently present - note that this does not copy values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AddAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::PCGMetadata_eventAddAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AddAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AddAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics
	{
		struct PCGMetadata_eventAddAttributes_Parms
		{
			const UPCGMetadata* InOther;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttributes_Parms, InOther), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Creates missing attributes from another metadata if they are not currently present - note that this does not copy values */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Creates missing attributes from another metadata if they are not currently present - note that this does not copy values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AddAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::PCGMetadata_eventAddAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AddAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AddAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics
	{
		struct PCGMetadata_eventAddAttributesFiltered_Parms
		{
			const UPCGMetadata* InOther;
			TSet<FName> InFilteredAttributes;
			EPCGMetadataFilterMode InFilterMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFilteredAttributes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilteredAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InFilteredAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFilterMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFilterMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttributesFiltered_Parms, InOther), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes_ElementProp = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttributesFiltered_Parms, InFilteredAttributes), METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilterMode = { "InFilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddAttributesFiltered_Parms, InFilterMode), Z_Construct_UEnum_PCG_EPCGMetadataFilterMode, METADATA_PARAMS(nullptr, 0) }; // 3006613261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilteredAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilterMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::NewProp_InFilterMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/**\n\x09 * Creates missing attributes from another metadata if they are not currently present - note that this does not copy values.\n\x09 * @param InOther The other metadata to obtain a list of attributes from.\n\x09 * @param InFilteredAttributes Optional list of attributes to exclude or include when adding the attributes.\n\x09 * @param InFilterMode Defines attribute filter operation.\n\x09 */" },
		{ "CPP_Default_InFilterMode", "ExcludeAttributes" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Creates missing attributes from another metadata if they are not currently present - note that this does not copy values.\n@param InOther The other metadata to obtain a list of attributes from.\n@param InFilteredAttributes Optional list of attributes to exclude or include when adding the attributes.\n@param InFilterMode Defines attribute filter operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AddAttributesFiltered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::PCGMetadata_eventAddAttributesFiltered_Parms), Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics
	{
		struct PCGMetadata_eventAddEntry_Parms
		{
			int64 ParentEntryKey;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ParentEntryKey;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::NewProp_ParentEntryKey = { "ParentEntryKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddEntry_Parms, ParentEntryKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventAddEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::NewProp_ParentEntryKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Adds a unique entry key to the metadata */" },
		{ "CPP_Default_ParentEntryKey", "-1" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Adds a unique entry key to the metadata" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "AddEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::PCGMetadata_eventAddEntry_Parms), Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_AddEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_AddEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics
	{
		struct PCGMetadata_eventClearAttribute_Parms
		{
			FName AttributeToClear;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeToClear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::NewProp_AttributeToClear = { "AttributeToClear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventClearAttribute_Parms, AttributeToClear), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::NewProp_AttributeToClear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Clear/Reinit attribute */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Clear/Reinit attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "ClearAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::PCGMetadata_eventClearAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_ClearAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_ClearAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics
	{
		struct PCGMetadata_eventCopyAttribute_Parms
		{
			const UPCGMetadata* InOther;
			FName AttributeToCopy;
			FName NewAttributeName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeToCopy;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyAttribute_Parms, InOther), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_AttributeToCopy = { "AttributeToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyAttribute_Parms, AttributeToCopy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_NewAttributeName = { "NewAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyAttribute_Parms, NewAttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_InOther,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_AttributeToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::NewProp_NewAttributeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata|Advanced" },
		{ "Comment", "/** Copies an attribute from another metadata, including entries & values. Warning: this is intended when dealing with the same data set */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Copies an attribute from another metadata, including entries & values. Warning: this is intended when dealing with the same data set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CopyAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::PCGMetadata_eventCopyAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CopyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CopyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics
	{
		struct PCGMetadata_eventCopyAttributes_Parms
		{
			const UPCGMetadata* InOther;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOther_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOther;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::NewProp_InOther_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::NewProp_InOther = { "InOther", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyAttributes_Parms, InOther), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::NewProp_InOther_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::NewProp_InOther_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::NewProp_InOther,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata|Advanced" },
		{ "Comment", "/** Copies attributes from another metadata, including entries & values. Warning: this is intended when dealing with the same data set */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Copies attributes from another metadata, including entries & values. Warning: this is intended when dealing with the same data set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CopyAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::PCGMetadata_eventCopyAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CopyAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CopyAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics
	{
		struct PCGMetadata_eventCopyExistingAttribute_Parms
		{
			FName AttributeToCopy;
			FName NewAttributeName;
			bool bKeepParent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeToCopy;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewAttributeName;
		static void NewProp_bKeepParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepParent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_AttributeToCopy = { "AttributeToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyExistingAttribute_Parms, AttributeToCopy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_NewAttributeName = { "NewAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCopyExistingAttribute_Parms, NewAttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_bKeepParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCopyExistingAttribute_Parms*)Obj)->bKeepParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_bKeepParent = { "bKeepParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCopyExistingAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_bKeepParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadata_eventCopyExistingAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCopyExistingAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_AttributeToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_NewAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_bKeepParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Copy attribute */" },
		{ "CPP_Default_bKeepParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Copy attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CopyExistingAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::PCGMetadata_eventCopyExistingAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics
	{
		struct PCGMetadata_eventCreateBoolAttribute_Parms
		{
			FName AttributeName;
			bool DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateBoolAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateBoolAttribute_Parms*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateBoolAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateBoolAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateBoolAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateBoolAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateBoolAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateBoolAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::PCGMetadata_eventCreateBoolAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics
	{
		struct PCGMetadata_eventCreateDoubleAttribute_Parms
		{
			FName AttributeName;
			double DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateDoubleAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateDoubleAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateDoubleAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateDoubleAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateDoubleAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateDoubleAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateDoubleAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::PCGMetadata_eventCreateDoubleAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics
	{
		struct PCGMetadata_eventCreateFloatAttribute_Parms
		{
			FName AttributeName;
			float DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateFloatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateFloatAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateFloatAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateFloatAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateFloatAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateFloatAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::PCGMetadata_eventCreateFloatAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics
	{
		struct PCGMetadata_eventCreateInteger32Attribute_Parms
		{
			FName AttributeName;
			int32 DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateInteger32Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateInteger32Attribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateInteger32Attribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateInteger32Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateInteger32Attribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateInteger32Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Create new streams */" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Create new streams" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateInteger32Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::PCGMetadata_eventCreateInteger32Attribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics
	{
		struct PCGMetadata_eventCreateInteger64Attribute_Parms
		{
			FName AttributeName;
			int64 DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateInteger64Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateInteger64Attribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateInteger64Attribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateInteger64Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateInteger64Attribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateInteger64Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateInteger64Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::PCGMetadata_eventCreateInteger64Attribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics
	{
		struct PCGMetadata_eventCreateQuatAttribute_Parms
		{
			FName AttributeName;
			FQuat DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateQuatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateQuatAttribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateQuatAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateQuatAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateQuatAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateQuatAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateQuatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::PCGMetadata_eventCreateQuatAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics
	{
		struct PCGMetadata_eventCreateRotatorAttribute_Parms
		{
			FName AttributeName;
			FRotator DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateRotatorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateRotatorAttribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateRotatorAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateRotatorAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateRotatorAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateRotatorAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateRotatorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::PCGMetadata_eventCreateRotatorAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics
	{
		struct PCGMetadata_eventCreateStringAttribute_Parms
		{
			FName AttributeName;
			FString DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateStringAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateStringAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateStringAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateStringAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateStringAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateStringAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateStringAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::PCGMetadata_eventCreateStringAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics
	{
		struct PCGMetadata_eventCreateTransformAttribute_Parms
		{
			FName AttributeName;
			FTransform DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateTransformAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateTransformAttribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateTransformAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateTransformAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateTransformAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateTransformAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateTransformAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::PCGMetadata_eventCreateTransformAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics
	{
		struct PCGMetadata_eventCreateVector2Attribute_Parms
		{
			FName AttributeName;
			FVector2D DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVector2Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVector2Attribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVector2Attribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVector2Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVector2Attribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVector2Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateVector2Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::PCGMetadata_eventCreateVector2Attribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics
	{
		struct PCGMetadata_eventCreateVector4Attribute_Parms
		{
			FName AttributeName;
			FVector4 DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVector4Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVector4Attribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVector4Attribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVector4Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVector4Attribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVector4Attribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "DisplayName", "Create Vector4 Attribute" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateVector4Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::PCGMetadata_eventCreateVector4Attribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics
	{
		struct PCGMetadata_eventCreateVectorAttribute_Parms
		{
			FName AttributeName;
			FVector DefaultValue;
			bool bAllowsInterpolation;
			bool bOverrideParent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static void NewProp_bAllowsInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsInterpolation;
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVectorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventCreateVectorAttribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bAllowsInterpolation_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVectorAttribute_Parms*)Obj)->bAllowsInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bAllowsInterpolation = { "bAllowsInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVectorAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bAllowsInterpolation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((PCGMetadata_eventCreateVectorAttribute_Parms*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventCreateVectorAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bAllowsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::NewProp_bOverrideParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "CPP_Default_bOverrideParent", "true" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "CreateVectorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::PCGMetadata_eventCreateVectorAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics
	{
		struct PCGMetadata_eventDeleteAttribute_Parms
		{
			FName AttributeName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventDeleteAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::NewProp_AttributeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Delete/Hide attribute */// Due to stream inheriting, we might want to consider \"hiding\" parent stream and deleting local streams only\n" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Delete/Hide attribute // Due to stream inheriting, we might want to consider \"hiding\" parent stream and deleting local streams only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "DeleteAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::PCGMetadata_eventDeleteAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_DeleteAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_DeleteAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics
	{
		struct PCGMetadata_eventGetAttributes_Parms
		{
			TArray<FName> AttributeNames;
			TArray<EPCGMetadataTypes> AttributeTypes;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeNames_Inner = { "AttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeNames = { "AttributeNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventGetAttributes_Parms, AttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes_Inner = { "AttributeTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(nullptr, 0) }; // 168356382
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes = { "AttributeTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventGetAttributes_Parms, AttributeTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 168356382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::NewProp_AttributeTypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "GetAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::PCGMetadata_eventGetAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics
	{
		struct PCGMetadata_eventHasAttribute_Parms
		{
			FName AttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventHasAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadata_eventHasAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventHasAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "HasAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::PCGMetadata_eventHasAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_HasAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_HasAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics
	{
		struct PCGMetadata_eventHasCommonAttributes_Parms
		{
			const UPCGMetadata* InMetadata;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventHasCommonAttributes_Parms, InMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_InMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_InMetadata_MetaData)) };
	void Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadata_eventHasCommonAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventHasCommonAttributes_Parms), &Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_InMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "HasCommonAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::PCGMetadata_eventHasCommonAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_Initialize_Statics
	{
		struct PCGMetadata_eventInitialize_Parms
		{
			const UPCGMetadata* InParent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::NewProp_InParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitialize_Parms, InParent), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::NewProp_InParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::NewProp_InParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Initializes the metadata from a parent metadata, if any (can be null). Copies attributes and values. */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Initializes the metadata from a parent metadata, if any (can be null). Copies attributes and values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::PCGMetadata_eventInitialize_Parms), Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics
	{
		struct PCGMetadata_eventInitializeAsCopy_Parms
		{
			const UPCGMetadata* InMetadataToCopy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadataToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadataToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::NewProp_InMetadataToCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::NewProp_InMetadataToCopy = { "InMetadataToCopy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeAsCopy_Parms, InMetadataToCopy), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::NewProp_InMetadataToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::NewProp_InMetadataToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::NewProp_InMetadataToCopy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Initializes the metadata from a parent metadata by copying all attributes to it. */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Initializes the metadata from a parent metadata by copying all attributes to it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "InitializeAsCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::PCGMetadata_eventInitializeAsCopy_Parms), Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics
	{
		struct PCGMetadata_eventInitializeAsCopyWithAttributeFilter_Parms
		{
			const UPCGMetadata* InMetadataToCopy;
			TSet<FName> InFilteredAttributes;
			EPCGMetadataFilterMode InFilterMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadataToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadataToCopy;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFilteredAttributes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilteredAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InFilteredAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFilterMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFilterMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InMetadataToCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InMetadataToCopy = { "InMetadataToCopy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeAsCopyWithAttributeFilter_Parms, InMetadataToCopy), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InMetadataToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InMetadataToCopy_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes_ElementProp = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeAsCopyWithAttributeFilter_Parms, InFilteredAttributes), METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilterMode = { "InFilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeAsCopyWithAttributeFilter_Parms, InFilterMode), Z_Construct_UEnum_PCG_EPCGMetadataFilterMode, METADATA_PARAMS(nullptr, 0) }; // 3006613261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InMetadataToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilteredAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilterMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::NewProp_InFilterMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Initializes the metadata from a parent metadata by copy filtered attributes only to it */" },
		{ "CPP_Default_InFilterMode", "ExcludeAttributes" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Initializes the metadata from a parent metadata by copy filtered attributes only to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "InitializeAsCopyWithAttributeFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::PCGMetadata_eventInitializeAsCopyWithAttributeFilter_Parms), Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics
	{
		struct PCGMetadata_eventInitializeWithAttributeFilter_Parms
		{
			const UPCGMetadata* InParent;
			TSet<FName> InFilteredAttributes;
			EPCGMetadataFilterMode InFilterMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFilteredAttributes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilteredAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_InFilteredAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFilterMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFilterMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeWithAttributeFilter_Parms, InParent), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InParent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes_ElementProp = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes = { "InFilteredAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeWithAttributeFilter_Parms, InFilteredAttributes), METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilterMode = { "InFilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventInitializeWithAttributeFilter_Parms, InFilterMode), Z_Construct_UEnum_PCG_EPCGMetadataFilterMode, METADATA_PARAMS(nullptr, 0) }; // 3006613261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilteredAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilterMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::NewProp_InFilterMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/**\n\x09 * Initializes the metadata from a parent metadata. Copies attributes and values.\n\x09 * @param InParent The parent metadata to use as a template, if any (can be null).\n\x09 * @param InFilteredAttributes Optional list of attributes to exclude or include when adding the attributes from the parent.\n\x09 * @param InFilterMode Defines attribute filter operation.\n\x09 */" },
		{ "CPP_Default_InFilterMode", "ExcludeAttributes" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Initializes the metadata from a parent metadata. Copies attributes and values.\n@param InParent The parent metadata to use as a template, if any (can be null).\n@param InFilteredAttributes Optional list of attributes to exclude or include when adding the attributes from the parent.\n@param InFilterMode Defines attribute filter operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "InitializeWithAttributeFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::PCGMetadata_eventInitializeWithAttributeFilter_Parms), Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics
	{
		struct PCGMetadata_eventMergeAttributesByKey_Parms
		{
			int64 KeyA;
			const UPCGMetadata* MetadataA;
			int64 KeyB;
			const UPCGMetadata* MetadataB;
			int64 TargetKey;
			EPCGMetadataOp Op;
			int64 OutKey;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_KeyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetadataA;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_KeyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetadataB;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Op_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Op;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_KeyA = { "KeyA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, KeyA), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataA = { "MetadataA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, MetadataA), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataA_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_KeyB = { "KeyB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, KeyB), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataB = { "MetadataB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, MetadataB), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataB_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, TargetKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, Op), Z_Construct_UEnum_PCG_EPCGMetadataOp, METADATA_PARAMS(nullptr, 0) }; // 1394887189
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergeAttributesByKey_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_KeyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_KeyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_MetadataB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_Op_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::NewProp_OutKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Blueprint-friend versions */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Blueprint-friend versions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "MergeAttributesByKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::PCGMetadata_eventMergeAttributesByKey_Parms), Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics
	{
		struct PCGMetadata_eventMergePointAttributes_Parms
		{
			FPCGPoint PointA;
			const UPCGMetadata* MetadataA;
			FPCGPoint PointB;
			const UPCGMetadata* MetadataB;
			FPCGPoint TargetPoint;
			EPCGMetadataOp Op;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetadataA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetadataB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Op_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Op;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, PointA), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointA_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataA = { "MetadataA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, MetadataA), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, PointB), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointB_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataB = { "MetadataB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, MetadataB), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataB_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, TargetPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventMergePointAttributes_Parms, Op), Z_Construct_UEnum_PCG_EPCGMetadataOp, METADATA_PARAMS(nullptr, 0) }; // 1394887189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_PointB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_MetadataB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_TargetPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_Op_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::NewProp_Op,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "MergePointAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::PCGMetadata_eventMergePointAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_MergePointAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_MergePointAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics
	{
		struct PCGMetadata_eventRenameAttribute_Parms
		{
			FName AttributeToRename;
			FName NewAttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeToRename;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewAttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_AttributeToRename = { "AttributeToRename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventRenameAttribute_Parms, AttributeToRename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_NewAttributeName = { "NewAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventRenameAttribute_Parms, NewAttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadata_eventRenameAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadata_eventRenameAttribute_Parms), &Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_AttributeToRename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_NewAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Rename attribute */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Rename attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "RenameAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::PCGMetadata_eventRenameAttribute_Parms), Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_RenameAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_RenameAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics
	{
		struct PCGMetadata_eventResetPointWeightedAttributes_Parms
		{
			FPCGPoint OutPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventResetPointWeightedAttributes_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::NewProp_OutPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "ResetPointWeightedAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::PCGMetadata_eventResetPointWeightedAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics
	{
		struct PCGMetadata_eventResetWeightedAttributesByKey_Parms
		{
			int64 TargetKey;
			int64 OutKey;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventResetWeightedAttributesByKey_Parms, TargetKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventResetWeightedAttributesByKey_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::NewProp_OutKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "ResetWeightedAttributesByKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::PCGMetadata_eventResetWeightedAttributesByKey_Parms), Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics
	{
		struct PCGMetadata_eventSetAttributesByKey_Parms
		{
			int64 Key;
			const UPCGMetadata* InMetadata;
			int64 TargetKey;
			int64 OutKey;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadata;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TargetKey;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_OutKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetAttributesByKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetAttributesByKey_Parms, InMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_InMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_InMetadata_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetAttributesByKey_Parms, TargetKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetAttributesByKey_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_InMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::NewProp_OutKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "SetAttributesByKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::PCGMetadata_eventSetAttributesByKey_Parms), Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics
	{
		struct PCGMetadata_eventSetPointAttributes_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FPCGPoint OutPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetPointAttributes_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetPointAttributes_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadata_eventSetPointAttributes_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::NewProp_OutPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadata, nullptr, "SetPointAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::PCGMetadata_eventSetPointAttributes_Parms), Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadata_SetPointAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadata_SetPointAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadata);
	UClass* Z_Construct_UClass_UPCGMetadata_NoRegister()
	{
		return UPCGMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OtherParents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherParents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_OtherParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGMetadata_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGMetadata_AccumulatePointWeightedAttributes, "AccumulatePointWeightedAttributes" }, // 2885393393
		{ &Z_Construct_UFunction_UPCGMetadata_AccumulateWeightedAttributesByKey, "AccumulateWeightedAttributesByKey" }, // 1129557415
		{ &Z_Construct_UFunction_UPCGMetadata_AddAttribute, "AddAttribute" }, // 2517018985
		{ &Z_Construct_UFunction_UPCGMetadata_AddAttributes, "AddAttributes" }, // 2737099956
		{ &Z_Construct_UFunction_UPCGMetadata_AddAttributesFiltered, "AddAttributesFiltered" }, // 48874686
		{ &Z_Construct_UFunction_UPCGMetadata_AddEntry, "AddEntry" }, // 850441159
		{ &Z_Construct_UFunction_UPCGMetadata_ClearAttribute, "ClearAttribute" }, // 2513050794
		{ &Z_Construct_UFunction_UPCGMetadata_CopyAttribute, "CopyAttribute" }, // 2506158821
		{ &Z_Construct_UFunction_UPCGMetadata_CopyAttributes, "CopyAttributes" }, // 1405459278
		{ &Z_Construct_UFunction_UPCGMetadata_CopyExistingAttribute, "CopyExistingAttribute" }, // 34781437
		{ &Z_Construct_UFunction_UPCGMetadata_CreateBoolAttribute, "CreateBoolAttribute" }, // 1260193200
		{ &Z_Construct_UFunction_UPCGMetadata_CreateDoubleAttribute, "CreateDoubleAttribute" }, // 1294596597
		{ &Z_Construct_UFunction_UPCGMetadata_CreateFloatAttribute, "CreateFloatAttribute" }, // 3494446578
		{ &Z_Construct_UFunction_UPCGMetadata_CreateInteger32Attribute, "CreateInteger32Attribute" }, // 1925597794
		{ &Z_Construct_UFunction_UPCGMetadata_CreateInteger64Attribute, "CreateInteger64Attribute" }, // 3850488088
		{ &Z_Construct_UFunction_UPCGMetadata_CreateQuatAttribute, "CreateQuatAttribute" }, // 533931795
		{ &Z_Construct_UFunction_UPCGMetadata_CreateRotatorAttribute, "CreateRotatorAttribute" }, // 1308913480
		{ &Z_Construct_UFunction_UPCGMetadata_CreateStringAttribute, "CreateStringAttribute" }, // 3746606196
		{ &Z_Construct_UFunction_UPCGMetadata_CreateTransformAttribute, "CreateTransformAttribute" }, // 3323793818
		{ &Z_Construct_UFunction_UPCGMetadata_CreateVector2Attribute, "CreateVector2Attribute" }, // 3768374024
		{ &Z_Construct_UFunction_UPCGMetadata_CreateVector4Attribute, "CreateVector4Attribute" }, // 330032269
		{ &Z_Construct_UFunction_UPCGMetadata_CreateVectorAttribute, "CreateVectorAttribute" }, // 4235554009
		{ &Z_Construct_UFunction_UPCGMetadata_DeleteAttribute, "DeleteAttribute" }, // 4236772853
		{ &Z_Construct_UFunction_UPCGMetadata_GetAttributes, "GetAttributes" }, // 2998593565
		{ &Z_Construct_UFunction_UPCGMetadata_HasAttribute, "HasAttribute" }, // 874539528
		{ &Z_Construct_UFunction_UPCGMetadata_HasCommonAttributes, "HasCommonAttributes" }, // 3783205848
		{ &Z_Construct_UFunction_UPCGMetadata_Initialize, "Initialize" }, // 607324724
		{ &Z_Construct_UFunction_UPCGMetadata_InitializeAsCopy, "InitializeAsCopy" }, // 3475170760
		{ &Z_Construct_UFunction_UPCGMetadata_InitializeAsCopyWithAttributeFilter, "InitializeAsCopyWithAttributeFilter" }, // 2901274187
		{ &Z_Construct_UFunction_UPCGMetadata_InitializeWithAttributeFilter, "InitializeWithAttributeFilter" }, // 3114769621
		{ &Z_Construct_UFunction_UPCGMetadata_MergeAttributesByKey, "MergeAttributesByKey" }, // 433929917
		{ &Z_Construct_UFunction_UPCGMetadata_MergePointAttributes, "MergePointAttributes" }, // 1704263187
		{ &Z_Construct_UFunction_UPCGMetadata_RenameAttribute, "RenameAttribute" }, // 3206674500
		{ &Z_Construct_UFunction_UPCGMetadata_ResetPointWeightedAttributes, "ResetPointWeightedAttributes" }, // 535701544
		{ &Z_Construct_UFunction_UPCGMetadata_ResetWeightedAttributesByKey, "ResetWeightedAttributesByKey" }, // 257463613
		{ &Z_Construct_UFunction_UPCGMetadata_SetAttributesByKey, "SetAttributesByKey" }, // 3354504176
		{ &Z_Construct_UFunction_UPCGMetadata_SetPointAttributes, "SetPointAttributes" }, // 168125381
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Metadata/PCGMetadata.h" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadata_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGMetadata_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadata, Parent), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadata_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadata_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents_ElementProp = { "OtherParents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents_MetaData[] = {
		{ "Comment", "// Set of parents kept for streams relationship and GC collection\n// But otherwise not used directly\n" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadata.h" },
		{ "ToolTip", "Set of parents kept for streams relationship and GC collection\nBut otherwise not used directly" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents = { "OtherParents", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadata, OtherParents), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadata_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadata_Statics::NewProp_OtherParents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadata_Statics::ClassParams = {
		&UPCGMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadata()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadata.OuterSingleton, Z_Construct_UClass_UPCGMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadata.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadata>()
	{
		return UPCGMetadata::StaticClass();
	}
	UPCGMetadata::UPCGMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadata);
	UPCGMetadata::~UPCGMetadata() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGMetadata)
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadata, UPCGMetadata::StaticClass, TEXT("UPCGMetadata"), &Z_Registration_Info_UClass_UPCGMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadata), 2332253727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_973094811(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
