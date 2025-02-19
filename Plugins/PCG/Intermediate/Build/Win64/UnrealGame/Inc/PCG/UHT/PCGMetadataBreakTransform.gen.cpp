// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataBreakTransform.h"
#include "PCG/Public/Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataBreakTransform() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataBreakTransformSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataBreakTransformSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataSettingsBase();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMetadataBreakTransformSettings::StaticRegisterNativesUPCGMetadataBreakTransformSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataBreakTransformSettings);
	UClass* Z_Construct_UClass_UPCGMetadataBreakTransformSettings_NoRegister()
	{
		return UPCGMetadataBreakTransformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAttributeName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGMetadataSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataBreakTransform.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBreakTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBreakTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBreakTransformSettings, InputSource), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputSource_MetaData)) }; // 3655039818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataBreakTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputAttributeName = { "InputAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataBreakTransformSettings, InputAttributeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputAttributeName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputSource,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::NewProp_InputAttributeName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataBreakTransformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::ClassParams = {
		&UPCGMetadataBreakTransformSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataBreakTransformSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataBreakTransformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataBreakTransformSettings>()
	{
		return UPCGMetadataBreakTransformSettings::StaticClass();
	}
	UPCGMetadataBreakTransformSettings::UPCGMetadataBreakTransformSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataBreakTransformSettings);
	UPCGMetadataBreakTransformSettings::~UPCGMetadataBreakTransformSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBreakTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBreakTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataBreakTransformSettings, UPCGMetadataBreakTransformSettings::StaticClass, TEXT("UPCGMetadataBreakTransformSettings"), &Z_Registration_Info_UClass_UPCGMetadataBreakTransformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataBreakTransformSettings), 3249363886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBreakTransform_h_752646356(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBreakTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataBreakTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
