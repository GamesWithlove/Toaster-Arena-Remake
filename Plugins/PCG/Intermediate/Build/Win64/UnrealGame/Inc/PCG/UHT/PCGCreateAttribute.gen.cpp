// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGCreateAttribute.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateAttribute() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateAttributeSetSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateAttributeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateAttributeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGCreateAttributeSettings::StaticRegisterNativesUPCGCreateAttributeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateAttributeSettings);
	UClass* Z_Construct_UClass_UPCGCreateAttributeSettings_NoRegister()
	{
		return UPCGCreateAttributeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCreateAttributeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromSourceParam_MetaData[];
#endif
		static void NewProp_bFromSourceParam_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSourceParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayFromSourceParamSetting_MetaData[];
#endif
		static void NewProp_bDisplayFromSourceParamSetting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayFromSourceParamSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceParamAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceParamAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTypes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuatValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotatorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepExistingAttributes_MetaData[];
#endif
		static void NewProp_bKeepExistingAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepExistingAttributes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Adds an attribute to Spatial data or to an Attribute Set, or creates a new Attribute Set if no\n* input is provided.\n* \n* Note: This need to be updated if we ever add new types.\n*/" },
		{ "IncludePath", "Elements/PCGCreateAttribute.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
		{ "ToolTip", "Adds an attribute to Spatial data or to an Attribute Set, or creates a new Attribute Set if no\ninput is provided.\n\nNote: This need to be updated if we ever add new types." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_OutputAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_OutputAttributeName = { "OutputAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, OutputAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_OutputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_OutputAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDisplayFromSourceParamSetting" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam_SetBit(void* Obj)
	{
		((UPCGCreateAttributeSettings*)Obj)->bFromSourceParam = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam = { "bFromSourceParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateAttributeSettings), &Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting_MetaData[] = {
		{ "Comment", "// This can be set false by inheriting nodes to hide the 'From Source Param' property.\n" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
		{ "ToolTip", "This can be set false by inheriting nodes to hide the 'From Source Param' property." },
	};
#endif
	void Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting_SetBit(void* Obj)
	{
		((UPCGCreateAttributeSettings*)Obj)->bDisplayFromSourceParamSetting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting = { "bDisplayFromSourceParamSetting", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateAttributeSettings), &Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_SourceParamAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bFromSourceParam" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_SourceParamAttributeName = { "SourceParamAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, SourceParamAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_SourceParamAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_SourceParamAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_AttributeTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "bFromSourceParam" },
		{ "EditCondition", "!bFromSourceParam" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_AttributeTypes = { "AttributeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, AttributeTypes), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_AttributeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_AttributeTypes_MetaData)) }; // 2434566560
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, Type_DEPRECATED), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type_MetaData)) }; // 168356382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, FloatValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Int32Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, Int32Value_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Int32Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_DoubleValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, DoubleValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_DoubleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_DoubleValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, IntValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector2Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector2Value = { "Vector2Value", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, Vector2Value_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector2Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector2Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_VectorValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, VectorValue_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_VectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_VectorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector4Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector4Value = { "Vector4Value", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, Vector4Value_DEPRECATED), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector4Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector4Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_QuatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_QuatValue = { "QuatValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, QuatValue_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_QuatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_QuatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_TransformValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, TransformValue_DEPRECATED), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_TransformValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_TransformValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, StringValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((UPCGCreateAttributeSettings*)Obj)->BoolValue_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateAttributeSettings), &Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_RotatorValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, RotatorValue_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_RotatorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_RotatorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_NameValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCreateAttributeSettings, NameValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_NameValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes_SetBit(void* Obj)
	{
		((UPCGCreateAttributeSettings*)Obj)->bKeepExistingAttributes_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes = { "bKeepExistingAttributes", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGCreateAttributeSettings), &Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_OutputAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bFromSourceParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bDisplayFromSourceParamSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_SourceParamAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_AttributeTypes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_DoubleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector2Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_Vector4Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_QuatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_TransformValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_RotatorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::NewProp_bKeepExistingAttributes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateAttributeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::ClassParams = {
		&UPCGCreateAttributeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGCreateAttributeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCreateAttributeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateAttributeSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateAttributeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCreateAttributeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCreateAttributeSettings>()
	{
		return UPCGCreateAttributeSettings::StaticClass();
	}
	UPCGCreateAttributeSettings::UPCGCreateAttributeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateAttributeSettings);
	UPCGCreateAttributeSettings::~UPCGCreateAttributeSettings() {}
	void UPCGCreateAttributeSetSettings::StaticRegisterNativesUPCGCreateAttributeSetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateAttributeSetSettings);
	UClass* Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister()
	{
		return UPCGCreateAttributeSetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGCreateAttributeSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/* Creates a new Attribute Set. */" },
		{ "IncludePath", "Elements/PCGCreateAttribute.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateAttribute.h" },
		{ "ToolTip", "Creates a new Attribute Set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateAttributeSetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::ClassParams = {
		&UPCGCreateAttributeSetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGCreateAttributeSetSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.OuterSingleton, Z_Construct_UClass_UPCGCreateAttributeSetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCreateAttributeSetSettings>()
	{
		return UPCGCreateAttributeSetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateAttributeSetSettings);
	UPCGCreateAttributeSetSettings::~UPCGCreateAttributeSetSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateAttributeSettings, UPCGCreateAttributeSettings::StaticClass, TEXT("UPCGCreateAttributeSettings"), &Z_Registration_Info_UClass_UPCGCreateAttributeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateAttributeSettings), 1321559321U) },
		{ Z_Construct_UClass_UPCGCreateAttributeSetSettings, UPCGCreateAttributeSetSettings::StaticClass, TEXT("UPCGCreateAttributeSetSettings"), &Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateAttributeSetSettings), 1297896832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateAttribute_h_2149437383(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
