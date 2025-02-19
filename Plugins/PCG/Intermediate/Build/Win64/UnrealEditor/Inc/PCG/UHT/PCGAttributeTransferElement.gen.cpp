// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGAttributeTransferElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributeTransferElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeTransferSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributeTransferSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGAttributeTransferSettings::StaticRegisterNativesUPCGAttributeTransferSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributeTransferSettings);
	UClass* Z_Construct_UClass_UPCGAttributeTransferSettings_NoRegister()
	{
		return UPCGAttributeTransferSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributeTransferSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Transfer an attribute from a source metadata to a target data.\n* Only support Spatial to Spatial and Points to Points, and they need to match.\n*  - For Spatial data, number of entries in the metadata should be the same between source and target.\n*  - For Point data, number of points should be the same between source and target.\n* \n* The output will be the target data with the updated metadata.\n* If the TargetAttributeName is None, it will use SourceAttributeName instead.\n* \n* To do the same but with a Source param data, use CreateAttribute.\n*/" },
		{ "IncludePath", "Elements/PCGAttributeTransferElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeTransferElement.h" },
		{ "ToolTip", "Transfer an attribute from a source metadata to a target data.\nOnly support Spatial to Spatial and Points to Points, and they need to match.\n - For Spatial data, number of entries in the metadata should be the same between source and target.\n - For Point data, number of points should be the same between source and target.\n\nThe output will be the target data with the updated metadata.\nIf the TargetAttributeName is None, it will use SourceAttributeName instead.\n\nTo do the same but with a Source param data, use CreateAttribute." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_SourceAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//~End UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeTransferElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_SourceAttributeName = { "SourceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeTransferSettings, SourceAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_SourceAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_SourceAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_TargetAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGAttributeTransferElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_TargetAttributeName = { "TargetAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGAttributeTransferSettings, TargetAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_TargetAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_TargetAttributeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_SourceAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::NewProp_TargetAttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributeTransferSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::ClassParams = {
		&UPCGAttributeTransferSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGAttributeTransferSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributeTransferSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributeTransferSettings.OuterSingleton, Z_Construct_UClass_UPCGAttributeTransferSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributeTransferSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributeTransferSettings>()
	{
		return UPCGAttributeTransferSettings::StaticClass();
	}
	UPCGAttributeTransferSettings::UPCGAttributeTransferSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributeTransferSettings);
	UPCGAttributeTransferSettings::~UPCGAttributeTransferSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributeTransferSettings, UPCGAttributeTransferSettings::StaticClass, TEXT("UPCGAttributeTransferSettings"), &Z_Registration_Info_UClass_UPCGAttributeTransferSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributeTransferSettings), 2690214377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_3634030193(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeTransferElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
