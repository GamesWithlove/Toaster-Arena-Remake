// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGMetadataAccessor.h"
#include "PCG/Public/PCGPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataAccessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataAccessorHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataAccessorHelpers_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPoint();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execHasAttributeSet)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGMetadataAccessorHelpers::HasAttributeSet(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetBoolAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetBoolAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetBoolAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetBoolAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetStringAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetStringAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetStringAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetStringAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetTransformAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetTransformAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetTransformAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetTransformAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetQuatAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetQuatAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetQuatAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetQuatAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetRotatorAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetRotatorAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetRotatorAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetRotatorAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVector2Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVector2Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVector2Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVector2Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVector4Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVector4Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVector4Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVector4Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVectorAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVectorAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVectorAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVectorAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetDoubleAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetDoubleAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetDoubleAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetDoubleAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetFloatAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetFloatAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetFloatAttribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetFloatAttribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetInteger64Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetInteger64Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetInteger64Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetInteger64Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetInteger32Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetInteger32Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetInteger32Attribute)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetInteger32Attribute(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execInitializeMetadata)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_Point);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_ParentPoint);
		P_GET_OBJECT(UPCGMetadata,Z_Param_ParentMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::InitializeMetadata(Z_Param_Out_Point,Z_Param_Metadata,Z_Param_Out_ParentPoint,Z_Param_ParentMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execCopyPoint)
	{
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_InPoint);
		P_GET_STRUCT_REF(FPCGPoint,Z_Param_Out_OutPoint);
		P_GET_UBOOL(Z_Param_bCopyMetadata);
		P_GET_OBJECT(UPCGMetadata,Z_Param_InMetadata);
		P_GET_OBJECT(UPCGMetadata,Z_Param_OutMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::CopyPoint(Z_Param_Out_InPoint,Z_Param_Out_OutPoint,Z_Param_bCopyMetadata,Z_Param_InMetadata,Z_Param_OutMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execHasAttributeSetByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGMetadataAccessorHelpers::HasAttributeSetByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetAttributeFromPropertyByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGMetadataAccessorHelpers::SetAttributeFromPropertyByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Object,Z_Param_PropertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetBoolAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetBoolAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetBoolAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetBoolAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetStringAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetStringAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetStringAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetTransformAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetTransformAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetTransformAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetTransformAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetQuatAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetQuatAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetQuatAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetQuatAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetRotatorAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetRotatorAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetRotatorAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetRotatorAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVector2AttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVector2AttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVector2AttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVector2AttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVector4AttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVector4AttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVector4AttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVector4AttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetVectorAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetVectorAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetVectorAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetVectorAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetDoubleAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetDoubleAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetDoubleAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetDoubleAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetFloatAttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetFloatAttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetFloatAttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetFloatAttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetInteger64AttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetInteger64AttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetInteger64AttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetInteger64AttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execSetInteger32AttributeByMetadataKey)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPCGMetadataAccessorHelpers::SetInteger32AttributeByMetadataKey(Z_Param_Out_Key,Z_Param_Metadata,Z_Param_AttributeName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGMetadataAccessorHelpers::execGetInteger32AttributeByMetadataKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Key);
		P_GET_OBJECT(UPCGMetadata,Z_Param_Metadata);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPCGMetadataAccessorHelpers::GetInteger32AttributeByMetadataKey(Z_Param_Key,Z_Param_Metadata,Z_Param_AttributeName);
		P_NATIVE_END;
	}
	void UPCGMetadataAccessorHelpers::StaticRegisterNativesUPCGMetadataAccessorHelpers()
	{
		UClass* Class = UPCGMetadataAccessorHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPoint", &UPCGMetadataAccessorHelpers::execCopyPoint },
			{ "GetBoolAttribute", &UPCGMetadataAccessorHelpers::execGetBoolAttribute },
			{ "GetBoolAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetBoolAttributeByMetadataKey },
			{ "GetDoubleAttribute", &UPCGMetadataAccessorHelpers::execGetDoubleAttribute },
			{ "GetDoubleAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetDoubleAttributeByMetadataKey },
			{ "GetFloatAttribute", &UPCGMetadataAccessorHelpers::execGetFloatAttribute },
			{ "GetFloatAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetFloatAttributeByMetadataKey },
			{ "GetInteger32Attribute", &UPCGMetadataAccessorHelpers::execGetInteger32Attribute },
			{ "GetInteger32AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetInteger32AttributeByMetadataKey },
			{ "GetInteger64Attribute", &UPCGMetadataAccessorHelpers::execGetInteger64Attribute },
			{ "GetInteger64AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetInteger64AttributeByMetadataKey },
			{ "GetQuatAttribute", &UPCGMetadataAccessorHelpers::execGetQuatAttribute },
			{ "GetQuatAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetQuatAttributeByMetadataKey },
			{ "GetRotatorAttribute", &UPCGMetadataAccessorHelpers::execGetRotatorAttribute },
			{ "GetRotatorAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetRotatorAttributeByMetadataKey },
			{ "GetStringAttribute", &UPCGMetadataAccessorHelpers::execGetStringAttribute },
			{ "GetStringAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetStringAttributeByMetadataKey },
			{ "GetTransformAttribute", &UPCGMetadataAccessorHelpers::execGetTransformAttribute },
			{ "GetTransformAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetTransformAttributeByMetadataKey },
			{ "GetVector2Attribute", &UPCGMetadataAccessorHelpers::execGetVector2Attribute },
			{ "GetVector2AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetVector2AttributeByMetadataKey },
			{ "GetVector4Attribute", &UPCGMetadataAccessorHelpers::execGetVector4Attribute },
			{ "GetVector4AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetVector4AttributeByMetadataKey },
			{ "GetVectorAttribute", &UPCGMetadataAccessorHelpers::execGetVectorAttribute },
			{ "GetVectorAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execGetVectorAttributeByMetadataKey },
			{ "HasAttributeSet", &UPCGMetadataAccessorHelpers::execHasAttributeSet },
			{ "HasAttributeSetByMetadataKey", &UPCGMetadataAccessorHelpers::execHasAttributeSetByMetadataKey },
			{ "InitializeMetadata", &UPCGMetadataAccessorHelpers::execInitializeMetadata },
			{ "SetAttributeFromPropertyByMetadataKey", &UPCGMetadataAccessorHelpers::execSetAttributeFromPropertyByMetadataKey },
			{ "SetBoolAttribute", &UPCGMetadataAccessorHelpers::execSetBoolAttribute },
			{ "SetBoolAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetBoolAttributeByMetadataKey },
			{ "SetDoubleAttribute", &UPCGMetadataAccessorHelpers::execSetDoubleAttribute },
			{ "SetDoubleAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetDoubleAttributeByMetadataKey },
			{ "SetFloatAttribute", &UPCGMetadataAccessorHelpers::execSetFloatAttribute },
			{ "SetFloatAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetFloatAttributeByMetadataKey },
			{ "SetInteger32Attribute", &UPCGMetadataAccessorHelpers::execSetInteger32Attribute },
			{ "SetInteger32AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetInteger32AttributeByMetadataKey },
			{ "SetInteger64Attribute", &UPCGMetadataAccessorHelpers::execSetInteger64Attribute },
			{ "SetInteger64AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetInteger64AttributeByMetadataKey },
			{ "SetQuatAttribute", &UPCGMetadataAccessorHelpers::execSetQuatAttribute },
			{ "SetQuatAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetQuatAttributeByMetadataKey },
			{ "SetRotatorAttribute", &UPCGMetadataAccessorHelpers::execSetRotatorAttribute },
			{ "SetRotatorAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetRotatorAttributeByMetadataKey },
			{ "SetStringAttribute", &UPCGMetadataAccessorHelpers::execSetStringAttribute },
			{ "SetStringAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetStringAttributeByMetadataKey },
			{ "SetTransformAttribute", &UPCGMetadataAccessorHelpers::execSetTransformAttribute },
			{ "SetTransformAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetTransformAttributeByMetadataKey },
			{ "SetVector2Attribute", &UPCGMetadataAccessorHelpers::execSetVector2Attribute },
			{ "SetVector2AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetVector2AttributeByMetadataKey },
			{ "SetVector4Attribute", &UPCGMetadataAccessorHelpers::execSetVector4Attribute },
			{ "SetVector4AttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetVector4AttributeByMetadataKey },
			{ "SetVectorAttribute", &UPCGMetadataAccessorHelpers::execSetVectorAttribute },
			{ "SetVectorAttributeByMetadataKey", &UPCGMetadataAccessorHelpers::execSetVectorAttributeByMetadataKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics
	{
		struct PCGMetadataAccessorHelpers_eventCopyPoint_Parms
		{
			FPCGPoint InPoint;
			FPCGPoint OutPoint;
			bool bCopyMetadata;
			const UPCGMetadata* InMetadata;
			UPCGMetadata* OutMetadata;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoint;
		static void NewProp_bCopyMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMetadata;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InPoint = { "InPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventCopyPoint_Parms, InPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InPoint_MetaData)) }; // 877907965
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_OutPoint = { "OutPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventCopyPoint_Parms, OutPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_bCopyMetadata_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventCopyPoint_Parms*)Obj)->bCopyMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_bCopyMetadata = { "bCopyMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventCopyPoint_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_bCopyMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventCopyPoint_Parms, InMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InMetadata_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventCopyPoint_Parms, OutMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_OutPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_bCopyMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_InMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::NewProp_OutMetadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG" },
		{ "Comment", "/** Point functions */" },
		{ "CPP_Default_bCopyMetadata", "true" },
		{ "CPP_Default_InMetadata", "None" },
		{ "CPP_Default_OutMetadata", "None" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Point functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "CopyPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::PCGMetadataAccessorHelpers_eventCopyPoint_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetBoolAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::PCGMetadataAccessorHelpers_eventGetBoolAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetBoolAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetBoolAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetDoubleAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::PCGMetadataAccessorHelpers_eventGetDoubleAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			double ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetDoubleAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetDoubleAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::PCGMetadataAccessorHelpers_eventGetFloatAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetFloatAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetFloatAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetInteger32Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::PCGMetadataAccessorHelpers_eventGetInteger32Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Id-based metadata functions */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ToolTip", "Id-based metadata functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetInteger32AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetInteger32AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetInteger64Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::PCGMetadataAccessorHelpers_eventGetInteger64Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetInteger64AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetInteger64AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetQuatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::PCGMetadataAccessorHelpers_eventGetQuatAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetQuatAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetQuatAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetRotatorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::PCGMetadataAccessorHelpers_eventGetRotatorAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetRotatorAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetRotatorAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetStringAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::PCGMetadataAccessorHelpers_eventGetStringAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetStringAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetStringAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetTransformAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::PCGMetadataAccessorHelpers_eventGetTransformAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetTransformAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetTransformAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVector2Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::PCGMetadataAccessorHelpers_eventGetVector2Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVector2AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetVector2AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector4 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVector4Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::PCGMetadataAccessorHelpers_eventGetVector4Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector4 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVector4AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetVector4AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVectorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::PCGMetadataAccessorHelpers_eventGetVectorAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "GetVectorAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventGetVectorAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics
	{
		struct PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms
		{
			FPCGPoint Point;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Point_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "HasAttributeSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::PCGMetadataAccessorHelpers_eventHasAttributeSet_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms
		{
			int64 Key;
			const UPCGMetadata* Metadata;
			FName AttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "HasAttributeSetByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventHasAttributeSetByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics
	{
		struct PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FPCGPoint ParentPoint;
			const UPCGMetadata* ParentMetadata;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentPoint = { "ParentPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms, ParentPoint), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentPoint_MetaData)) }; // 877907965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentMetadata = { "ParentMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms, ParentMetadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::NewProp_ParentMetadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "Comment", "/** Assigns a metadata entry key and will copy attribute values if from an unrelated metadata. Note: a null ParentMetadata assumes this is the same as Metadata */" },
		{ "CPP_Default_ParentMetadata", "None" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Assigns a metadata entry key and will copy attribute values if from an unrelated metadata. Note: a null ParentMetadata assumes this is the same as Metadata" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "InitializeMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::PCGMetadataAccessorHelpers_eventInitializeMetadata_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			const UObject* Object;
			FName PropertyName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetAttributeFromPropertyByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetAttributeFromPropertyByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			bool Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetBoolAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::PCGMetadataAccessorHelpers_eventSetBoolAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			bool Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms), &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetBoolAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetBoolAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			double Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetDoubleAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::PCGMetadataAccessorHelpers_eventSetDoubleAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			double Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetDoubleAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetDoubleAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			float Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::PCGMetadataAccessorHelpers_eventSetFloatAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			float Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetFloatAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetFloatAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			int32 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetInteger32Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::PCGMetadataAccessorHelpers_eventSetInteger32Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			int32 Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetInteger32AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetInteger32AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			int64 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetInteger64Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::PCGMetadataAccessorHelpers_eventSetInteger64Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			int64 Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetInteger64AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetInteger64AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FQuat Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetQuatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::PCGMetadataAccessorHelpers_eventSetQuatAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FQuat Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetQuatAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetQuatAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FRotator Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetRotatorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::PCGMetadataAccessorHelpers_eventSetRotatorAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FRotator Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetRotatorAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetRotatorAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FString Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetStringAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::PCGMetadataAccessorHelpers_eventSetStringAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FString Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetStringAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetStringAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FTransform Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetTransformAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::PCGMetadataAccessorHelpers_eventSetTransformAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FTransform Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetTransformAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetTransformAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector2D Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVector2Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::PCGMetadataAccessorHelpers_eventSetVector2Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector2D Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVector2AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetVector2AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector4 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVector4Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::PCGMetadataAccessorHelpers_eventSetVector4Attribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector4 Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVector4AttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetVector4AttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms
		{
			FPCGPoint Point;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms, Point), Z_Construct_UScriptStruct_FPCGPoint, METADATA_PARAMS(nullptr, 0) }; // 877907965
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVectorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::PCGMetadataAccessorHelpers_eventSetVectorAttribute_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics
	{
		struct PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms
		{
			int64 Key;
			UPCGMetadata* Metadata;
			FName AttributeName;
			FVector Value;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|Metadata" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGMetadataAccessorHelpers, nullptr, "SetVectorAttributeByMetadataKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::PCGMetadataAccessorHelpers_eventSetVectorAttributeByMetadataKey_Parms), Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataAccessorHelpers);
	UClass* Z_Construct_UClass_UPCGMetadataAccessorHelpers_NoRegister()
	{
		return UPCGMetadataAccessorHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_CopyPoint, "CopyPoint" }, // 5458497
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttribute, "GetBoolAttribute" }, // 812810144
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey, "GetBoolAttributeByMetadataKey" }, // 239976927
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttribute, "GetDoubleAttribute" }, // 3447626167
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey, "GetDoubleAttributeByMetadataKey" }, // 1170797166
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttribute, "GetFloatAttribute" }, // 2917100315
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey, "GetFloatAttributeByMetadataKey" }, // 2344635285
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32Attribute, "GetInteger32Attribute" }, // 3704273060
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey, "GetInteger32AttributeByMetadataKey" }, // 478363496
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64Attribute, "GetInteger64Attribute" }, // 1555731201
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey, "GetInteger64AttributeByMetadataKey" }, // 33475477
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttribute, "GetQuatAttribute" }, // 321988878
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey, "GetQuatAttributeByMetadataKey" }, // 929024420
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttribute, "GetRotatorAttribute" }, // 245382004
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey, "GetRotatorAttributeByMetadataKey" }, // 2295187473
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttribute, "GetStringAttribute" }, // 2169335533
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey, "GetStringAttributeByMetadataKey" }, // 2596926365
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttribute, "GetTransformAttribute" }, // 2526617255
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey, "GetTransformAttributeByMetadataKey" }, // 3252662644
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2Attribute, "GetVector2Attribute" }, // 1457925721
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey, "GetVector2AttributeByMetadataKey" }, // 4204137636
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4Attribute, "GetVector4Attribute" }, // 12893877
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey, "GetVector4AttributeByMetadataKey" }, // 2112169575
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttribute, "GetVectorAttribute" }, // 1516965653
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey, "GetVectorAttributeByMetadataKey" }, // 434066357
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSet, "HasAttributeSet" }, // 518576363
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey, "HasAttributeSetByMetadataKey" }, // 3329136163
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_InitializeMetadata, "InitializeMetadata" }, // 2303344004
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey, "SetAttributeFromPropertyByMetadataKey" }, // 1527833489
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttribute, "SetBoolAttribute" }, // 282652104
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey, "SetBoolAttributeByMetadataKey" }, // 1617378478
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttribute, "SetDoubleAttribute" }, // 3655212853
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey, "SetDoubleAttributeByMetadataKey" }, // 4189465419
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttribute, "SetFloatAttribute" }, // 2231267804
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey, "SetFloatAttributeByMetadataKey" }, // 3796289714
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32Attribute, "SetInteger32Attribute" }, // 833048308
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey, "SetInteger32AttributeByMetadataKey" }, // 1910830697
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64Attribute, "SetInteger64Attribute" }, // 2705668891
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey, "SetInteger64AttributeByMetadataKey" }, // 571395220
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttribute, "SetQuatAttribute" }, // 1218777438
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey, "SetQuatAttributeByMetadataKey" }, // 1875434454
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttribute, "SetRotatorAttribute" }, // 2067553274
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey, "SetRotatorAttributeByMetadataKey" }, // 24897755
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttribute, "SetStringAttribute" }, // 1219170227
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey, "SetStringAttributeByMetadataKey" }, // 2296536670
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttribute, "SetTransformAttribute" }, // 630872066
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey, "SetTransformAttributeByMetadataKey" }, // 1869456984
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2Attribute, "SetVector2Attribute" }, // 256256010
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey, "SetVector2AttributeByMetadataKey" }, // 3831795027
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4Attribute, "SetVector4Attribute" }, // 1824167933
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey, "SetVector4AttributeByMetadataKey" }, // 313610195
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttribute, "SetVectorAttribute" }, // 3815412258
		{ &Z_Construct_UFunction_UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey, "SetVectorAttributeByMetadataKey" }, // 671396886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Metadata/PCGMetadataAccessor.h" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataAccessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataAccessorHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::ClassParams = {
		&UPCGMetadataAccessorHelpers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataAccessorHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.OuterSingleton, Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataAccessorHelpers>()
	{
		return UPCGMetadataAccessorHelpers::StaticClass();
	}
	UPCGMetadataAccessorHelpers::UPCGMetadataAccessorHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataAccessorHelpers);
	UPCGMetadataAccessorHelpers::~UPCGMetadataAccessorHelpers() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataAccessorHelpers, UPCGMetadataAccessorHelpers::StaticClass, TEXT("UPCGMetadataAccessorHelpers"), &Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataAccessorHelpers), 2612879945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_2635471699(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
