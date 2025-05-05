// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataVectorOpElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataVectorOpElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataVectorSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataVectorSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMedadataVectorOperation;
	static UEnum* EPCGMedadataVectorOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMedadataVectorOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMedadataVectorOperation>()
	{
		return EPCGMedadataVectorOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enumerators[] = {
		{ "EPCGMedadataVectorOperation::VectorOp", (int64)EPCGMedadataVectorOperation::VectorOp },
		{ "EPCGMedadataVectorOperation::Cross", (int64)EPCGMedadataVectorOperation::Cross },
		{ "EPCGMedadataVectorOperation::Dot", (int64)EPCGMedadataVectorOperation::Dot },
		{ "EPCGMedadataVectorOperation::Distance", (int64)EPCGMedadataVectorOperation::Distance },
		{ "EPCGMedadataVectorOperation::Normalize", (int64)EPCGMedadataVectorOperation::Normalize },
		{ "EPCGMedadataVectorOperation::Length", (int64)EPCGMedadataVectorOperation::Length },
		{ "EPCGMedadataVectorOperation::RotateAroundAxis", (int64)EPCGMedadataVectorOperation::RotateAroundAxis },
		{ "EPCGMedadataVectorOperation::TransformOp", (int64)EPCGMedadataVectorOperation::TransformOp },
		{ "EPCGMedadataVectorOperation::TransformDirection", (int64)EPCGMedadataVectorOperation::TransformDirection },
		{ "EPCGMedadataVectorOperation::TransformLocation", (int64)EPCGMedadataVectorOperation::TransformLocation },
		{ "EPCGMedadataVectorOperation::InverseTransformDirection", (int64)EPCGMedadataVectorOperation::InverseTransformDirection },
		{ "EPCGMedadataVectorOperation::InverseTransformLocation", (int64)EPCGMedadataVectorOperation::InverseTransformLocation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enum_MetaDataParams[] = {
		{ "Cross.Name", "EPCGMedadataVectorOperation::Cross" },
		{ "Distance.Name", "EPCGMedadataVectorOperation::Distance" },
		{ "Dot.Name", "EPCGMedadataVectorOperation::Dot" },
		{ "InverseTransformDirection.Name", "EPCGMedadataVectorOperation::InverseTransformDirection" },
		{ "InverseTransformLocation.Name", "EPCGMedadataVectorOperation::InverseTransformLocation" },
		{ "Length.Name", "EPCGMedadataVectorOperation::Length" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
		{ "Normalize.Name", "EPCGMedadataVectorOperation::Normalize" },
		{ "RotateAroundAxis.Name", "EPCGMedadataVectorOperation::RotateAroundAxis" },
		{ "TransformDirection.Name", "EPCGMedadataVectorOperation::TransformDirection" },
		{ "TransformLocation.Name", "EPCGMedadataVectorOperation::TransformLocation" },
		{ "TransformOp.Hidden", "" },
		{ "TransformOp.Name", "EPCGMedadataVectorOperation::TransformOp" },
		{ "VectorOp.Hidden", "" },
		{ "VectorOp.Name", "EPCGMedadataVectorOperation::VectorOp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMedadataVectorOperation",
		"EPCGMedadataVectorOperation",
		Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMedadataVectorOperation.InnerSingleton;
	}
	void UPCGMetadataVectorSettings::StaticRegisterNativesUPCGMetadataVectorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataVectorSettings);
	UClass* Z_Construct_UClass_UPCGMetadataVectorSettings_NoRegister()
	{
		return UPCGMetadataVectorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataVectorSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataVectorOpElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, Operation), Z_Construct_UEnum_PCG_EPCGMedadataVectorOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation_MetaData)) }; // 1947597728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource1_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation != EPCGMedadataVectorOperation::Normalize && Operation != EPCGMedadataVectorOperation::Length" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource2_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource3_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation == EPCGMedadataVectorOperation::RotateAroundAxis" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource3 = { "InputSource3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, InputSource3), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource3_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input1AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input1AttributeName = { "Input1AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, Input1AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input1AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input1AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input2AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input2AttributeName = { "Input2AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, Input2AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input2AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input2AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input3AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataVectorOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input3AttributeName = { "Input3AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataVectorSettings, Input3AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input3AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input3AttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_InputSource3,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input1AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input2AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::NewProp_Input3AttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataVectorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::ClassParams = {
		&UPCGMetadataVectorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataVectorSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataVectorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataVectorSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataVectorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataVectorSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataVectorSettings>()
	{
		return UPCGMetadataVectorSettings::StaticClass();
	}
	UPCGMetadataVectorSettings::UPCGMetadataVectorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataVectorSettings);
	UPCGMetadataVectorSettings::~UPCGMetadataVectorSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::EnumInfo[] = {
		{ EPCGMedadataVectorOperation_StaticEnum, TEXT("EPCGMedadataVectorOperation"), &Z_Registration_Info_UEnum_EPCGMedadataVectorOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1947597728U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataVectorSettings, UPCGMetadataVectorSettings::StaticClass, TEXT("UPCGMetadataVectorSettings"), &Z_Registration_Info_UClass_UPCGMetadataVectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataVectorSettings), 132333210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_1695029735(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataVectorOpElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
