// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/Metadata/PCGMetadataPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMetadataPartition() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataPartitionSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadataPartitionSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMetadataPartitionSettings::StaticRegisterNativesUPCGMetadataPartitionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMetadataPartitionSettings);
	UClass* Z_Construct_UClass_UPCGMetadataPartitionSettings_NoRegister()
	{
		return UPCGMetadataPartitionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartitionAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PartitionAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/Metadata/PCGMetadataPartition.h" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataPartition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::NewProp_PartitionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/Metadata/PCGMetadataPartition.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::NewProp_PartitionAttribute = { "PartitionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGMetadataPartitionSettings, PartitionAttribute), METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::NewProp_PartitionAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::NewProp_PartitionAttribute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::NewProp_PartitionAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMetadataPartitionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::ClassParams = {
		&UPCGMetadataPartitionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMetadataPartitionSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMetadataPartitionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMetadataPartitionSettings.OuterSingleton, Z_Construct_UClass_UPCGMetadataPartitionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMetadataPartitionSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMetadataPartitionSettings>()
	{
		return UPCGMetadataPartitionSettings::StaticClass();
	}
	UPCGMetadataPartitionSettings::UPCGMetadataPartitionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMetadataPartitionSettings);
	UPCGMetadataPartitionSettings::~UPCGMetadataPartitionSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMetadataPartitionSettings, UPCGMetadataPartitionSettings::StaticClass, TEXT("UPCGMetadataPartitionSettings"), &Z_Registration_Info_UClass_UPCGMetadataPartitionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMetadataPartitionSettings), 3114104240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartition_h_2215888126(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGMetadataPartition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
