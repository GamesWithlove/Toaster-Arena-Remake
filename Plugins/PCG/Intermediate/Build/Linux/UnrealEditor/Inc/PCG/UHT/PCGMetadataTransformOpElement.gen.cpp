// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataTransformOpElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataTransformOpElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataTransformSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataTransformSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGTransformLerpMode();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMedadataTransformOperation;
	static UEnum* EPCGMedadataTransformOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMedadataTransformOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMedadataTransformOperation>()
	{
		return EPCGMedadataTransformOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enumerators[] = {
		{ "EPCGMedadataTransformOperation::Compose", (int64)EPCGMedadataTransformOperation::Compose },
		{ "EPCGMedadataTransformOperation::Invert", (int64)EPCGMedadataTransformOperation::Invert },
		{ "EPCGMedadataTransformOperation::Lerp", (int64)EPCGMedadataTransformOperation::Lerp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enum_MetaDataParams[] = {
		{ "Compose.Name", "EPCGMedadataTransformOperation::Compose" },
		{ "Invert.Name", "EPCGMedadataTransformOperation::Invert" },
		{ "Lerp.Name", "EPCGMedadataTransformOperation::Lerp" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMedadataTransformOperation",
		"EPCGMedadataTransformOperation",
		Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMedadataTransformOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGTransformLerpMode;
	static UEnum* EPCGTransformLerpMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGTransformLerpMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGTransformLerpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGTransformLerpMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGTransformLerpMode"));
		}
		return Z_Registration_Info_UEnum_EPCGTransformLerpMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGTransformLerpMode>()
	{
		return EPCGTransformLerpMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enumerators[] = {
		{ "EPCGTransformLerpMode::QuatInterp", (int64)EPCGTransformLerpMode::QuatInterp },
		{ "EPCGTransformLerpMode::EulerInterp", (int64)EPCGTransformLerpMode::EulerInterp },
		{ "EPCGTransformLerpMode::DualQuatInterp", (int64)EPCGTransformLerpMode::DualQuatInterp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Taken from Kismet Math Library\n" },
		{ "DualQuatInterp.Comment", "/** Dual quaternion interpolation, follows helix or screw-motion path between keyframes.   */" },
		{ "DualQuatInterp.Name", "EPCGTransformLerpMode::DualQuatInterp" },
		{ "DualQuatInterp.ToolTip", "Dual quaternion interpolation, follows helix or screw-motion path between keyframes." },
		{ "EulerInterp.Comment", "/** Rotor or Euler Angle interpolation. */" },
		{ "EulerInterp.Name", "EPCGTransformLerpMode::EulerInterp" },
		{ "EulerInterp.ToolTip", "Rotor or Euler Angle interpolation." },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
		{ "QuatInterp.Comment", "/** Shortest Path or Quaternion interpolation for the rotation. */" },
		{ "QuatInterp.Name", "EPCGTransformLerpMode::QuatInterp" },
		{ "QuatInterp.ToolTip", "Shortest Path or Quaternion interpolation for the rotation." },
		{ "ToolTip", "Taken from Kismet Math Library" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGTransformLerpMode",
		"EPCGTransformLerpMode",
		Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGTransformLerpMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGTransformLerpMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGTransformLerpMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGTransformLerpMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGTransformLerpMode.InnerSingleton;
	}
	void UPCGMetadataTransformSettings::StaticRegisterNativesUPCGMetadataTransformSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataTransformSettings);
	UClass* Z_Construct_UClass_UPCGMetadataTransformSettings_NoRegister()
	{
		return UPCGMetadataTransformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataTransformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_TransformLerpMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformLerpMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformLerpMode;
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
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataTransformOpElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, Operation), Z_Construct_UEnum_PCG_EPCGMedadataTransformOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation_MetaData)) }; // 1017280857
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Operation == EPCGMedadataTransformOperation::Lerp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode = { "TransformLerpMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, TransformLerpMode), Z_Construct_UEnum_PCG_EPCGTransformLerpMode, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode_MetaData)) }; // 271197237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource1_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation != EPCGMedadataTransformOperation::Invert" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource2_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource3_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation == EPCGMedadataTransformOperation::Lerp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource3 = { "InputSource3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, InputSource3), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource3_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input1AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input1AttributeName = { "Input1AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, Input1AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input1AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input1AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input2AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input2AttributeName = { "Input2AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, Input2AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input2AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input2AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input3AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataTransformOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input3AttributeName = { "Input3AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataTransformSettings, Input3AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input3AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input3AttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_TransformLerpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_InputSource3,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input1AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input2AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::NewProp_Input3AttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataTransformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::ClassParams = {
		&UPCGMetadataTransformSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataTransformSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataTransformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataTransformSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataTransformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataTransformSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataTransformSettings>()
	{
		return UPCGMetadataTransformSettings::StaticClass();
	}
	UPCGMetadataTransformSettings::UPCGMetadataTransformSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataTransformSettings);
	UPCGMetadataTransformSettings::~UPCGMetadataTransformSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::EnumInfo[] = {
		{ EPCGMedadataTransformOperation_StaticEnum, TEXT("EPCGMedadataTransformOperation"), &Z_Registration_Info_UEnum_EPCGMedadataTransformOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1017280857U) },
		{ EPCGTransformLerpMode_StaticEnum, TEXT("EPCGTransformLerpMode"), &Z_Registration_Info_UEnum_EPCGTransformLerpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 271197237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataTransformSettings, UPCGMetadataTransformSettings::StaticClass, TEXT("UPCGMetadataTransformSettings"), &Z_Registration_Info_UClass_UPCGMetadataTransformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataTransformSettings), 3708816138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_1765006825(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataTransformOpElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
