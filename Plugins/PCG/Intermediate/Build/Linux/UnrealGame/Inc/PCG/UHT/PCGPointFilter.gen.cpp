// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGPointFilter.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
#include "PCG/Public/Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterConstantType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterOperator();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointTargetFilterType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointThresholdType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointTargetFilterType;
	static UEnum* EPCGPointTargetFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointTargetFilterType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointTargetFilterType>()
	{
		return EPCGPointTargetFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators[] = {
		{ "EPCGPointTargetFilterType::Property", (int64)EPCGPointTargetFilterType::Property },
		{ "EPCGPointTargetFilterType::Metadata", (int64)EPCGPointTargetFilterType::Metadata },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams[] = {
		{ "Metadata.Name", "EPCGPointTargetFilterType::Metadata" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "Property.Name", "EPCGPointTargetFilterType::Property" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointTargetFilterType",
		"EPCGPointTargetFilterType",
		Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointTargetFilterType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointThresholdType;
	static UEnum* EPCGPointThresholdType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointThresholdType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointThresholdType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointThresholdType>()
	{
		return EPCGPointThresholdType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators[] = {
		{ "EPCGPointThresholdType::Property", (int64)EPCGPointThresholdType::Property },
		{ "EPCGPointThresholdType::Metadata", (int64)EPCGPointThresholdType::Metadata },
		{ "EPCGPointThresholdType::Constant", (int64)EPCGPointThresholdType::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Name", "EPCGPointThresholdType::Constant" },
		{ "Metadata.Name", "EPCGPointThresholdType::Metadata" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "Property.Name", "EPCGPointThresholdType::Property" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointThresholdType",
		"EPCGPointThresholdType",
		Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointThresholdType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointFilterConstantType;
	static UEnum* EPCGPointFilterConstantType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointFilterConstantType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointFilterConstantType>()
	{
		return EPCGPointFilterConstantType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators[] = {
		{ "EPCGPointFilterConstantType::Integer64", (int64)EPCGPointFilterConstantType::Integer64 },
		{ "EPCGPointFilterConstantType::Float", (int64)EPCGPointFilterConstantType::Float },
		{ "EPCGPointFilterConstantType::Vector", (int64)EPCGPointFilterConstantType::Vector },
		{ "EPCGPointFilterConstantType::Vector4", (int64)EPCGPointFilterConstantType::Vector4 },
		{ "EPCGPointFilterConstantType::String", (int64)EPCGPointFilterConstantType::String },
		{ "EPCGPointFilterConstantType::Unknown", (int64)EPCGPointFilterConstantType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams[] = {
		{ "Float.Name", "EPCGPointFilterConstantType::Float" },
		{ "Integer64.Name", "EPCGPointFilterConstantType::Integer64" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "String.Comment", "//Rotation,\n" },
		{ "String.Name", "EPCGPointFilterConstantType::String" },
		{ "String.ToolTip", "Rotation," },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EPCGPointFilterConstantType::Unknown" },
		{ "Vector.Name", "EPCGPointFilterConstantType::Vector" },
		{ "Vector4.Name", "EPCGPointFilterConstantType::Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointFilterConstantType",
		"EPCGPointFilterConstantType",
		Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterConstantType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointFilterOperator;
	static UEnum* EPCGPointFilterOperator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointFilterOperator, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointFilterOperator"));
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointFilterOperator>()
	{
		return EPCGPointFilterOperator_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators[] = {
		{ "EPCGPointFilterOperator::Greater", (int64)EPCGPointFilterOperator::Greater },
		{ "EPCGPointFilterOperator::GreaterOrEqual", (int64)EPCGPointFilterOperator::GreaterOrEqual },
		{ "EPCGPointFilterOperator::Lesser", (int64)EPCGPointFilterOperator::Lesser },
		{ "EPCGPointFilterOperator::LesserOrEqual", (int64)EPCGPointFilterOperator::LesserOrEqual },
		{ "EPCGPointFilterOperator::Equal", (int64)EPCGPointFilterOperator::Equal },
		{ "EPCGPointFilterOperator::NotEqual", (int64)EPCGPointFilterOperator::NotEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "=" },
		{ "Equal.Name", "EPCGPointFilterOperator::Equal" },
		{ "Greater.DisplayName", ">" },
		{ "Greater.Name", "EPCGPointFilterOperator::Greater" },
		{ "GreaterOrEqual.DisplayName", ">=" },
		{ "GreaterOrEqual.Name", "EPCGPointFilterOperator::GreaterOrEqual" },
		{ "Lesser.DisplayName", "<" },
		{ "Lesser.Name", "EPCGPointFilterOperator::Lesser" },
		{ "LesserOrEqual.DisplayName", "<=" },
		{ "LesserOrEqual.Name", "EPCGPointFilterOperator::LesserOrEqual" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "NotEqual.DisplayName", "!=" },
		{ "NotEqual.Name", "EPCGPointFilterOperator::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointFilterOperator",
		"EPCGPointFilterOperator",
		Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterOperator()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton;
	}
	void UPCGPointFilterSettings::StaticRegisterNativesUPCGPointFilterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointFilterSettings);
	UClass* Z_Construct_UClass_UPCGPointFilterSettings_NoRegister()
	{
		return UPCGPointFilterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointFilterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantThreshold_MetaData[];
#endif
		static void NewProp_bUseConstantThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialQuery_MetaData[];
#endif
		static void NewProp_bUseSpatialQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTypes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetFilterType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPointProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdFilterType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdPointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdPointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdPointProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThresholdAttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdConstantType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdConstantType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdConstantType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer64Constant_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Integer64Constant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorConstant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4Constant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4Constant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringConstant_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringConstant;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointFilterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Point filter that allows to do \"A op B\" type filtering, where A is the input spatial data,\n* and B is either a constant, another spatial data, a param data (in filter) or the input itself.\n* The filtering can be done either on properties or attributes.\n* Some examples:\n* - Threshold on property by constant (A.Density > 0.5)\n* - Threshold on attribute by constant (A.aaa != \"bob\")\n* - Threshold on property by metadata attribute(A.density >= B.bbb)\n* - Threshold on property by property(A.density <= B.steepness)\n* - Threshold on attribute by metadata attribute(A.aaa < B.bbb)\n* - Threshold on attribute by property(A.aaa == B.color)\n*/" },
		{ "IncludePath", "Elements/PCGPointFilter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Point filter that allows to do \"A op B\" type filtering, where A is the input spatial data,\nand B is either a constant, another spatial data, a param data (in filter) or the input itself.\nThe filtering can be done either on properties or attributes.\nSome examples:\n- Threshold on property by constant (A.Density > 0.5)\n- Threshold on attribute by constant (A.aaa != \"bob\")\n- Threshold on property by metadata attribute(A.density >= B.bbb)\n- Threshold on property by property(A.density <= B.steepness)\n- Threshold on attribute by metadata attribute(A.aaa < B.bbb)\n- Threshold on attribute by property(A.aaa == B.color)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, Operator), Z_Construct_UEnum_PCG_EPCGPointFilterOperator, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData)) }; // 336965921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target property/attribute related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Target property/attribute related properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute = { "TargetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, TargetAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Threshold property/attribute/constant related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Threshold property/attribute/constant related properties" },
	};
#endif
	void Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_SetBit(void* Obj)
	{
		((UPCGPointFilterSettings*)Obj)->bUseConstantThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold = { "bUseConstantThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPointFilterSettings), &Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_SetBit(void* Obj)
	{
		((UPCGPointFilterSettings*)Obj)->bUseSpatialQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery = { "bUseSpatialQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPointFilterSettings), &Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData[] = {
		{ "Category", "Constant" },
		{ "DisplayAfter", "bUseConstantThreshold" },
		{ "EditCondition", "bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes = { "AttributeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, AttributeTypes), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData)) }; // 2434566560
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType = { "TargetFilterType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, TargetFilterType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointTargetFilterType, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData)) }; // 1438937393
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty = { "TargetPointProperty", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, TargetPointProperty_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData)) }; // 672201325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName = { "TargetAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, TargetAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType = { "ThresholdFilterType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdFilterType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointThresholdType, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData)) }; // 1334123554
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty = { "ThresholdPointProperty", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdPointProperty_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData)) }; // 672201325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName = { "ThresholdAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType = { "ThresholdConstantType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdConstantType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointFilterConstantType, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData)) }; // 2247983650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant = { "Integer64Constant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, Integer64Constant_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant = { "FloatConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, FloatConstant_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant = { "VectorConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, VectorConstant_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant = { "Vector4Constant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, Vector4Constant_DEPRECATED), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant = { "StringConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointFilterSettings, StringConstant_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointFilterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointFilterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::ClassParams = {
		&UPCGPointFilterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPointFilterSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton, Z_Construct_UClass_UPCGPointFilterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointFilterSettings>()
	{
		return UPCGPointFilterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointFilterSettings);
	UPCGPointFilterSettings::~UPCGPointFilterSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo[] = {
		{ EPCGPointTargetFilterType_StaticEnum, TEXT("EPCGPointTargetFilterType"), &Z_Registration_Info_UEnum_EPCGPointTargetFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1438937393U) },
		{ EPCGPointThresholdType_StaticEnum, TEXT("EPCGPointThresholdType"), &Z_Registration_Info_UEnum_EPCGPointThresholdType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1334123554U) },
		{ EPCGPointFilterConstantType_StaticEnum, TEXT("EPCGPointFilterConstantType"), &Z_Registration_Info_UEnum_EPCGPointFilterConstantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2247983650U) },
		{ EPCGPointFilterOperator_StaticEnum, TEXT("EPCGPointFilterOperator"), &Z_Registration_Info_UEnum_EPCGPointFilterOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 336965921U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointFilterSettings, UPCGPointFilterSettings::StaticClass, TEXT("UPCGPointFilterSettings"), &Z_Registration_Info_UClass_UPCGPointFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointFilterSettings), 1838561435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_3021676088(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
