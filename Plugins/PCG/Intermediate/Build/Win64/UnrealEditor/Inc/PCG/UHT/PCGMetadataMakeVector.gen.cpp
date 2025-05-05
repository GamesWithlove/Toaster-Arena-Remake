// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataMakeVector.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataMakeVector() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeVectorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMakeVectorSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataMakeVector3;
	static UEnum* EPCGMetadataMakeVector3_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataMakeVector3"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataMakeVector3>()
	{
		return EPCGMetadataMakeVector3_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enumerators[] = {
		{ "EPCGMetadataMakeVector3::ThreeValues", (int64)EPCGMetadataMakeVector3::ThreeValues },
		{ "EPCGMetadataMakeVector3::Vector2AndValue", (int64)EPCGMetadataMakeVector3::Vector2AndValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
		{ "ThreeValues.Name", "EPCGMetadataMakeVector3::ThreeValues" },
		{ "Vector2AndValue.Name", "EPCGMetadataMakeVector3::Vector2AndValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataMakeVector3",
		"EPCGMetadataMakeVector3",
		Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeVector3.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataMakeVector4;
	static UEnum* EPCGMetadataMakeVector4_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataMakeVector4"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataMakeVector4>()
	{
		return EPCGMetadataMakeVector4_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enumerators[] = {
		{ "EPCGMetadataMakeVector4::FourValues", (int64)EPCGMetadataMakeVector4::FourValues },
		{ "EPCGMetadataMakeVector4::Vector2AndTwoValues", (int64)EPCGMetadataMakeVector4::Vector2AndTwoValues },
		{ "EPCGMetadataMakeVector4::TwoVector2", (int64)EPCGMetadataMakeVector4::TwoVector2 },
		{ "EPCGMetadataMakeVector4::Vector3AndValue", (int64)EPCGMetadataMakeVector4::Vector3AndValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enum_MetaDataParams[] = {
		{ "FourValues.Name", "EPCGMetadataMakeVector4::FourValues" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
		{ "TwoVector2.Name", "EPCGMetadataMakeVector4::TwoVector2" },
		{ "Vector2AndTwoValues.Name", "EPCGMetadataMakeVector4::Vector2AndTwoValues" },
		{ "Vector3AndValue.Name", "EPCGMetadataMakeVector4::Vector3AndValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataMakeVector4",
		"EPCGMetadataMakeVector4",
		Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataMakeVector4.InnerSingleton;
	}
	void UPCGMetadataMakeVectorSettings::StaticRegisterNativesUPCGMetadataMakeVectorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataMakeVectorSettings);
	UClass* Z_Construct_UClass_UPCGMetadataMakeVectorSettings_NoRegister()
	{
		return UPCGMetadataMakeVectorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource4;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MakeVector3Op_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MakeVector3Op_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MakeVector3Op;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MakeVector4Op_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MakeVector4Op_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MakeVector4Op;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input1AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input1AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input2AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input2AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input3AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input3AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input4AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input4AttributeName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataMakeVector.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource1_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource2_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource3_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource3 = { "InputSource3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, InputSource3), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource3_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource4_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource4 = { "InputSource4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, InputSource4), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource4_MetaData)) }; // 3655039818
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
		{ "ValidEnumValues", "Vector2, Vector, Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, OutputType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType_MetaData)) }; // 168356382
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "OutputType == EPCGMetadataTypes::Vector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op = { "MakeVector3Op", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, MakeVector3Op), Z_Construct_UEnum_PCG_EPCGMetadataMakeVector3, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op_MetaData)) }; // 2754781765
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "OutputType == EPCGMetadataTypes::Vector4" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op = { "MakeVector4Op", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, MakeVector4Op), Z_Construct_UEnum_PCG_EPCGMetadataMakeVector4, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op_MetaData)) }; // 2103171168
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input1AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input1AttributeName = { "Input1AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, Input1AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input1AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input1AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input2AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input2AttributeName = { "Input2AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, Input2AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input2AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input2AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input3AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input3AttributeName = { "Input3AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, Input3AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input3AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input3AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input4AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMakeVector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input4AttributeName = { "Input4AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMakeVectorSettings, Input4AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input4AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input4AttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_InputSource4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector3Op,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_MakeVector4Op,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input1AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input2AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input3AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::NewProp_Input4AttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataMakeVectorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::ClassParams = {
		&UPCGMetadataMakeVectorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataMakeVectorSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataMakeVectorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataMakeVectorSettings>()
	{
		return UPCGMetadataMakeVectorSettings::StaticClass();
	}
	UPCGMetadataMakeVectorSettings::UPCGMetadataMakeVectorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataMakeVectorSettings);
	UPCGMetadataMakeVectorSettings::~UPCGMetadataMakeVectorSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::EnumInfo[] = {
		{ EPCGMetadataMakeVector3_StaticEnum, TEXT("EPCGMetadataMakeVector3"), &Z_Registration_Info_UEnum_EPCGMetadataMakeVector3, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2754781765U) },
		{ EPCGMetadataMakeVector4_StaticEnum, TEXT("EPCGMetadataMakeVector4"), &Z_Registration_Info_UEnum_EPCGMetadataMakeVector4, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103171168U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataMakeVectorSettings, UPCGMetadataMakeVectorSettings::StaticClass, TEXT("UPCGMetadataMakeVectorSettings"), &Z_Registration_Info_UClass_UPCGMetadataMakeVectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataMakeVectorSettings), 1964731325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_651740478(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMakeVector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
