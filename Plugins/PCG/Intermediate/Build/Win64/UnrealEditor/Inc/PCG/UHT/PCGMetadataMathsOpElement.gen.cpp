// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataMathsOpElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataMathsOpElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMathsSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataMathsSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMedadataMathsOperation;
	static UEnum* EPCGMedadataMathsOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMedadataMathsOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMedadataMathsOperation>()
	{
		return EPCGMedadataMathsOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enumerators[] = {
		{ "EPCGMedadataMathsOperation::UnaryOp", (int64)EPCGMedadataMathsOperation::UnaryOp },
		{ "EPCGMedadataMathsOperation::Sign", (int64)EPCGMedadataMathsOperation::Sign },
		{ "EPCGMedadataMathsOperation::Frac", (int64)EPCGMedadataMathsOperation::Frac },
		{ "EPCGMedadataMathsOperation::Truncate", (int64)EPCGMedadataMathsOperation::Truncate },
		{ "EPCGMedadataMathsOperation::Round", (int64)EPCGMedadataMathsOperation::Round },
		{ "EPCGMedadataMathsOperation::Sqrt", (int64)EPCGMedadataMathsOperation::Sqrt },
		{ "EPCGMedadataMathsOperation::Abs", (int64)EPCGMedadataMathsOperation::Abs },
		{ "EPCGMedadataMathsOperation::Floor", (int64)EPCGMedadataMathsOperation::Floor },
		{ "EPCGMedadataMathsOperation::Ceil", (int64)EPCGMedadataMathsOperation::Ceil },
		{ "EPCGMedadataMathsOperation::BinaryOp", (int64)EPCGMedadataMathsOperation::BinaryOp },
		{ "EPCGMedadataMathsOperation::Add", (int64)EPCGMedadataMathsOperation::Add },
		{ "EPCGMedadataMathsOperation::Subtract", (int64)EPCGMedadataMathsOperation::Subtract },
		{ "EPCGMedadataMathsOperation::Multiply", (int64)EPCGMedadataMathsOperation::Multiply },
		{ "EPCGMedadataMathsOperation::Divide", (int64)EPCGMedadataMathsOperation::Divide },
		{ "EPCGMedadataMathsOperation::Max", (int64)EPCGMedadataMathsOperation::Max },
		{ "EPCGMedadataMathsOperation::Min", (int64)EPCGMedadataMathsOperation::Min },
		{ "EPCGMedadataMathsOperation::Pow", (int64)EPCGMedadataMathsOperation::Pow },
		{ "EPCGMedadataMathsOperation::ClampMin", (int64)EPCGMedadataMathsOperation::ClampMin },
		{ "EPCGMedadataMathsOperation::ClampMax", (int64)EPCGMedadataMathsOperation::ClampMax },
		{ "EPCGMedadataMathsOperation::Modulo", (int64)EPCGMedadataMathsOperation::Modulo },
		{ "EPCGMedadataMathsOperation::TernaryOp", (int64)EPCGMedadataMathsOperation::TernaryOp },
		{ "EPCGMedadataMathsOperation::Clamp", (int64)EPCGMedadataMathsOperation::Clamp },
		{ "EPCGMedadataMathsOperation::Lerp", (int64)EPCGMedadataMathsOperation::Lerp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enum_MetaDataParams[] = {
		{ "Abs.Name", "EPCGMedadataMathsOperation::Abs" },
		{ "Add.Name", "EPCGMedadataMathsOperation::Add" },
		{ "BinaryOp.Comment", "// Binary op\n" },
		{ "BinaryOp.Hidden", "" },
		{ "BinaryOp.Name", "EPCGMedadataMathsOperation::BinaryOp" },
		{ "BinaryOp.ToolTip", "Binary op" },
		{ "Bitflags", "" },
		{ "Ceil.Name", "EPCGMedadataMathsOperation::Ceil" },
		{ "Clamp.Name", "EPCGMedadataMathsOperation::Clamp" },
		{ "ClampMax.Name", "EPCGMedadataMathsOperation::ClampMax" },
		{ "ClampMin.Name", "EPCGMedadataMathsOperation::ClampMin" },
		{ "Divide.Name", "EPCGMedadataMathsOperation::Divide" },
		{ "Floor.Name", "EPCGMedadataMathsOperation::Floor" },
		{ "Frac.Name", "EPCGMedadataMathsOperation::Frac" },
		{ "Lerp.Name", "EPCGMedadataMathsOperation::Lerp" },
		{ "Max.Name", "EPCGMedadataMathsOperation::Max" },
		{ "Min.Name", "EPCGMedadataMathsOperation::Min" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
		{ "Modulo.Name", "EPCGMedadataMathsOperation::Modulo" },
		{ "Multiply.Name", "EPCGMedadataMathsOperation::Multiply" },
		{ "Pow.Name", "EPCGMedadataMathsOperation::Pow" },
		{ "Round.Name", "EPCGMedadataMathsOperation::Round" },
		{ "Sign.Name", "EPCGMedadataMathsOperation::Sign" },
		{ "Sqrt.Name", "EPCGMedadataMathsOperation::Sqrt" },
		{ "Subtract.Name", "EPCGMedadataMathsOperation::Subtract" },
		{ "TernaryOp.Comment", "// Ternary op\n" },
		{ "TernaryOp.Hidden", "" },
		{ "TernaryOp.Name", "EPCGMedadataMathsOperation::TernaryOp" },
		{ "TernaryOp.ToolTip", "Ternary op" },
		{ "Truncate.Name", "EPCGMedadataMathsOperation::Truncate" },
		{ "UnaryOp.Comment", "// Unary op\n" },
		{ "UnaryOp.Hidden", "" },
		{ "UnaryOp.Name", "EPCGMedadataMathsOperation::UnaryOp" },
		{ "UnaryOp.ToolTip", "Unary op" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMedadataMathsOperation",
		"EPCGMedadataMathsOperation",
		Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMedadataMathsOperation.InnerSingleton;
	}
	void UPCGMetadataMathsSettings::StaticRegisterNativesUPCGMetadataMathsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataMathsSettings);
	UClass* Z_Construct_UClass_UPCGMetadataMathsSettings_NoRegister()
	{
		return UPCGMetadataMathsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataMathsSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataMathsOpElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, Operation), Z_Construct_UEnum_PCG_EPCGMedadataMathsOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation_MetaData)) }; // 1517535943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource1_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "(Operation & '/Script/PCG.EPCGMedadataMathsOperation::BinaryOp') || (Operation & '/Script/PCG.EPCGMedadataMathsOperation::TernaryOp')" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource2_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource3_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation & '/Script/PCG.EPCGMedadataMathsOperation::TernaryOp'" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource3 = { "InputSource3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, InputSource3), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource3_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input1AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input1AttributeName = { "Input1AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, Input1AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input1AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input1AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input2AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input2AttributeName = { "Input2AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, Input2AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input2AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input2AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input3AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataMathsOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input3AttributeName = { "Input3AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataMathsSettings, Input3AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input3AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input3AttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_InputSource3,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input1AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input2AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::NewProp_Input3AttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataMathsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::ClassParams = {
		&UPCGMetadataMathsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataMathsSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataMathsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataMathsSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataMathsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataMathsSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataMathsSettings>()
	{
		return UPCGMetadataMathsSettings::StaticClass();
	}
	UPCGMetadataMathsSettings::UPCGMetadataMathsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataMathsSettings);
	UPCGMetadataMathsSettings::~UPCGMetadataMathsSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::EnumInfo[] = {
		{ EPCGMedadataMathsOperation_StaticEnum, TEXT("EPCGMedadataMathsOperation"), &Z_Registration_Info_UEnum_EPCGMedadataMathsOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1517535943U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataMathsSettings, UPCGMetadataMathsSettings::StaticClass, TEXT("UPCGMetadataMathsSettings"), &Z_Registration_Info_UClass_UPCGMetadataMathsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataMathsSettings), 727875464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_748500984(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataMathsOpElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
