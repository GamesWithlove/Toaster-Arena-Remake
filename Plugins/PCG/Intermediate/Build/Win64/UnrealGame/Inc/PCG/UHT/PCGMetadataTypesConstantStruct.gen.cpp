// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataTypesConstantStruct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode;
	static UEnum* EPCGMetadataTypesConstantStructStringMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataTypesConstantStructStringMode"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataTypesConstantStructStringMode>()
	{
		return EPCGMetadataTypesConstantStructStringMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enumerators[] = {
		{ "EPCGMetadataTypesConstantStructStringMode::String", (int64)EPCGMetadataTypesConstantStructStringMode::String },
		{ "EPCGMetadataTypesConstantStructStringMode::SoftObjectPath", (int64)EPCGMetadataTypesConstantStructStringMode::SoftObjectPath },
		{ "EPCGMetadataTypesConstantStructStringMode::SoftClassPath", (int64)EPCGMetadataTypesConstantStructStringMode::SoftClassPath },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
		{ "SoftClassPath.Name", "EPCGMetadataTypesConstantStructStringMode::SoftClassPath" },
		{ "SoftObjectPath.Name", "EPCGMetadataTypesConstantStructStringMode::SoftObjectPath" },
		{ "String.Name", "EPCGMetadataTypesConstantStructStringMode::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataTypesConstantStructStringMode",
		"EPCGMetadataTypesConstantStructStringMode",
		Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct;
class UScriptStruct* FPCGMetadataTypesConstantStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGMetadataTypesConstantStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGMetadataTypesConstantStruct>()
{
	return FPCGMetadataTypesConstantStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMode;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassPathValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftClassPathValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPathValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftObjectPathValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowsTypeChange_MetaData[];
#endif
		static void NewProp_bAllowsTypeChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsTypeChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct to be re-used when you need to show constants types for a metadata type\n* It will store all our values, and will display nicely depending on the type chosen\n*/" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
		{ "ToolTip", "Struct to be re-used when you need to show constants types for a metadata type\nIt will store all our values, and will display nicely depending on the type chosen" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGMetadataTypesConstantStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bAllowsTypeChange" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
		{ "ValidEnumValues", "Float, Double, Integer32, Integer64, Vector2, Vector, Vector4, Quaternion, Transform, String, Boolean, Rotator, Name" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, Type), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type_MetaData)) }; // 168356382
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bAllowsTypeChange && Type == EPCGMetadataTypes::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode = { "StringMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, StringMode), Z_Construct_UEnum_PCG_EPCGMetadataTypesConstantStructStringMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode_MetaData)) }; // 1744614167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// All different types\n" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Float" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
		{ "ToolTip", "All different types" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Integer32" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Int32Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_DoubleValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Double" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, DoubleValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_DoubleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_DoubleValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Integer64" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector2Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Vector2" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector2Value = { "Vector2Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, Vector2Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector2Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector2Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_VectorValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Vector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_VectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_VectorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector4Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Vector4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector4Value = { "Vector4Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, Vector4Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector4Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector4Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_QuatValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Quaternion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_QuatValue = { "QuatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, QuatValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_QuatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_QuatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_TransformValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Transform" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_TransformValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_TransformValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::String && StringMode == EPCGMetadataTypesConstantStructStringMode::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, StringValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Boolean" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((FPCGMetadataTypesConstantStruct*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGMetadataTypesConstantStruct), &Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_RotatorValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Rotator" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_RotatorValue = { "RotatorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, RotatorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_RotatorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_RotatorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_NameValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::Name" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, NameValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_NameValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftClassPathValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::String && StringMode == EPCGMetadataTypesConstantStructStringMode::SoftClassPath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftClassPathValue = { "SoftClassPathValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, SoftClassPathValue), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftClassPathValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftClassPathValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftObjectPathValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Type == EPCGMetadataTypes::String && StringMode == EPCGMetadataTypesConstantStructStringMode::SoftObjectPath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftObjectPathValue = { "SoftObjectPathValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGMetadataTypesConstantStruct, SoftObjectPathValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftObjectPathValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftObjectPathValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGMetadataTypesConstantStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange_SetBit(void* Obj)
	{
		((FPCGMetadataTypesConstantStruct*)Obj)->bAllowsTypeChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange = { "bAllowsTypeChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPCGMetadataTypesConstantStruct), &Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_DoubleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector2Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_VectorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_Vector4Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_QuatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_TransformValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_RotatorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftClassPathValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_SoftObjectPathValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewProp_bAllowsTypeChange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGMetadataTypesConstantStruct",
		sizeof(FPCGMetadataTypesConstantStruct),
		alignof(FPCGMetadataTypesConstantStruct),
		Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.InnerSingleton, Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::EnumInfo[] = {
		{ EPCGMetadataTypesConstantStructStringMode_StaticEnum, TEXT("EPCGMetadataTypesConstantStructStringMode"), &Z_Registration_Info_UEnum_EPCGMetadataTypesConstantStructStringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1744614167U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::ScriptStructInfo[] = {
		{ FPCGMetadataTypesConstantStruct::StaticStruct, Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct_Statics::NewStructOps, TEXT("PCGMetadataTypesConstantStruct"), &Z_Registration_Info_UScriptStruct_PCGMetadataTypesConstantStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGMetadataTypesConstantStruct), 2434566560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_505748110(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataTypesConstantStruct_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
