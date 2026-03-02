// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataRenameElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataRenameElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataRenameSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataRenameSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMetadataRenameSettings::StaticRegisterNativesUPCGMetadataRenameSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataRenameSettings);
	UClass* Z_Construct_UClass_UPCGMetadataRenameSettings_NoRegister()
	{
		return UPCGMetadataRenameSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataRenameSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeToRename_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeToRename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataRenameElement.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataRenameElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_AttributeToRename_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataRenameElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_AttributeToRename = { "AttributeToRename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataRenameSettings, AttributeToRename), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_AttributeToRename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_AttributeToRename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_NewAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataRenameElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_NewAttributeName = { "NewAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataRenameSettings, NewAttributeName), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_NewAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_NewAttributeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_AttributeToRename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::NewProp_NewAttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataRenameSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::ClassParams = {
		&UPCGMetadataRenameSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataRenameSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataRenameSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataRenameSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataRenameSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataRenameSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataRenameSettings>()
	{
		return UPCGMetadataRenameSettings::StaticClass();
	}
	UPCGMetadataRenameSettings::UPCGMetadataRenameSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataRenameSettings);
	UPCGMetadataRenameSettings::~UPCGMetadataRenameSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataRenameSettings, UPCGMetadataRenameSettings::StaticClass, TEXT("UPCGMetadataRenameSettings"), &Z_Registration_Info_UClass_UPCGMetadataRenameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataRenameSettings), 1640220145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_1816371358(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataRenameElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
