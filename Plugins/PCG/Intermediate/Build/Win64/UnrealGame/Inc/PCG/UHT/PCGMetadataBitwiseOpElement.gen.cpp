// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataBitwiseOpElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataBitwiseSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataBitwiseSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation;
	static UEnum* EPCGMedadataBitwiseOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMedadataBitwiseOperation"));
		}
		return Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMedadataBitwiseOperation>()
	{
		return EPCGMedadataBitwiseOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enumerators[] = {
		{ "EPCGMedadataBitwiseOperation::And", (int64)EPCGMedadataBitwiseOperation::And },
		{ "EPCGMedadataBitwiseOperation::Not", (int64)EPCGMedadataBitwiseOperation::Not },
		{ "EPCGMedadataBitwiseOperation::Or", (int64)EPCGMedadataBitwiseOperation::Or },
		{ "EPCGMedadataBitwiseOperation::Xor", (int64)EPCGMedadataBitwiseOperation::Xor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enum_MetaDataParams[] = {
		{ "And.Name", "EPCGMedadataBitwiseOperation::And" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
		{ "Not.Name", "EPCGMedadataBitwiseOperation::Not" },
		{ "Or.Name", "EPCGMedadataBitwiseOperation::Or" },
		{ "Xor.Name", "EPCGMedadataBitwiseOperation::Xor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMedadataBitwiseOperation",
		"EPCGMedadataBitwiseOperation",
		Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation()
	{
		if (!Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation.InnerSingleton;
	}
	void UPCGMetadataBitwiseSettings::StaticRegisterNativesUPCGMetadataBitwiseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataBitwiseSettings);
	UClass* Z_Construct_UClass_UPCGMetadataBitwiseSettings_NoRegister()
	{
		return UPCGMetadataBitwiseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input1AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input1AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input2AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Input2AttributeName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBitwiseSettings, Operation), Z_Construct_UEnum_PCG_EPCGMedadataBitwiseOperation, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation_MetaData)) }; // 180561463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource1 = { "InputSource1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBitwiseSettings, InputSource1), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource1_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource2_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Operation != EPCGMedadataBitwiseOperation::Not" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource2 = { "InputSource2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBitwiseSettings, InputSource2), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource2_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input1AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input1AttributeName = { "Input1AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBitwiseSettings, Input1AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input1AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input1AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input2AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBitwiseOpElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input2AttributeName = { "Input2AttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBitwiseSettings, Input2AttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input2AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input2AttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_InputSource2,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input1AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::NewProp_Input2AttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataBitwiseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::ClassParams = {
		&UPCGMetadataBitwiseSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataBitwiseSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataBitwiseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataBitwiseSettings>()
	{
		return UPCGMetadataBitwiseSettings::StaticClass();
	}
	UPCGMetadataBitwiseSettings::UPCGMetadataBitwiseSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataBitwiseSettings);
	UPCGMetadataBitwiseSettings::~UPCGMetadataBitwiseSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::EnumInfo[] = {
		{ EPCGMedadataBitwiseOperation_StaticEnum, TEXT("EPCGMedadataBitwiseOperation"), &Z_Registration_Info_UEnum_EPCGMedadataBitwiseOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 180561463U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataBitwiseSettings, UPCGMetadataBitwiseSettings::StaticClass, TEXT("UPCGMetadataBitwiseSettings"), &Z_Registration_Info_UClass_UPCGMetadataBitwiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataBitwiseSettings), 3456428814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_1516894912(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBitwiseOpElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
