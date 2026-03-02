// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataElement.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataOperationSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataOperationSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGMetadataOperationTarget;
	static UEnum* EPCGMetadataOperationTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGMetadataOperationTarget"));
		}
		return Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGMetadataOperationTarget>()
	{
		return EPCGMetadataOperationTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enumerators[] = {
		{ "EPCGMetadataOperationTarget::PropertyToAttribute", (int64)EPCGMetadataOperationTarget::PropertyToAttribute },
		{ "EPCGMetadataOperationTarget::AttributeToProperty", (int64)EPCGMetadataOperationTarget::AttributeToProperty },
		{ "EPCGMetadataOperationTarget::AttributeToAttribute", (int64)EPCGMetadataOperationTarget::AttributeToAttribute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enum_MetaDataParams[] = {
		{ "AttributeToAttribute.Name", "EPCGMetadataOperationTarget::AttributeToAttribute" },
		{ "AttributeToProperty.Name", "EPCGMetadataOperationTarget::AttributeToProperty" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
		{ "PropertyToAttribute.Name", "EPCGMetadataOperationTarget::PropertyToAttribute" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGMetadataOperationTarget",
		"EPCGMetadataOperationTarget",
		Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget()
	{
		if (!Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.InnerSingleton, Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGMetadataOperationTarget.InnerSingleton;
	}
	void UPCGMetadataOperationSettings::StaticRegisterNativesUPCGMetadataOperationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataOperationSettings);
	UClass* Z_Construct_UClass_UPCGMetadataOperationSettings_NoRegister()
	{
		return UPCGMetadataOperationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataOperationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTarget;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PointProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestinationAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Target;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_InputSource_MetaData)) }; // 3655039818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, OutputTarget), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_OutputTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_OutputTarget_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_SourceAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_SourceAttribute = { "SourceAttribute", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, SourceAttribute_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_SourceAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_SourceAttribute_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty = { "PointProperty", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, PointProperty_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty_MetaData)) }; // 672201325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_DestinationAttribute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_DestinationAttribute = { "DestinationAttribute", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, DestinationAttribute_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_DestinationAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_DestinationAttribute_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataOperationSettings, Target_DEPRECATED), Z_Construct_UEnum_PCG_EPCGMetadataOperationTarget, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target_MetaData)) }; // 3766228913
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_OutputTarget,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_SourceAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_PointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_DestinationAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::NewProp_Target,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataOperationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::ClassParams = {
		&UPCGMetadataOperationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataOperationSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataOperationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataOperationSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataOperationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataOperationSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataOperationSettings>()
	{
		return UPCGMetadataOperationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataOperationSettings);
	UPCGMetadataOperationSettings::~UPCGMetadataOperationSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::EnumInfo[] = {
		{ EPCGMetadataOperationTarget_StaticEnum, TEXT("EPCGMetadataOperationTarget"), &Z_Registration_Info_UEnum_EPCGMetadataOperationTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3766228913U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataOperationSettings, UPCGMetadataOperationSettings::StaticClass, TEXT("UPCGMetadataOperationSettings"), &Z_Registration_Info_UClass_UPCGMetadataOperationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataOperationSettings), 2685153872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_3730746867(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
