// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGMergeElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMergeElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMergeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMergeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMergeSettings::StaticRegisterNativesUPCGMergeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMergeSettings);
	UClass* Z_Construct_UClass_UPCGMergeSettings_NoRegister()
	{
		return UPCGMergeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMergeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMetadata_MetaData[];
#endif
		static void NewProp_bMergeMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMergeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMergeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Merges multiple data sources (currently only points supported) into a single output. */" },
		{ "IncludePath", "Elements/PCGMergeElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGMergeElement.h" },
		{ "ToolTip", "Merges multiple data sources (currently only points supported) into a single output." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls whether the resulting merge data will have any metadata */" },
		{ "ModuleRelativePath", "Public/Elements/PCGMergeElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls whether the resulting merge data will have any metadata" },
	};
#endif
	void Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata_SetBit(void* Obj)
	{
		((UPCGMergeSettings*)Obj)->bMergeMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata = { "bMergeMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGMergeSettings), &Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGMergeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGMergeSettings_Statics::NewProp_bMergeMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMergeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMergeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMergeSettings_Statics::ClassParams = {
		&UPCGMergeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGMergeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMergeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGMergeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMergeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGMergeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMergeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMergeSettings.OuterSingleton, Z_Construct_UClass_UPCGMergeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMergeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMergeSettings>()
	{
		return UPCGMergeSettings::StaticClass();
	}
	UPCGMergeSettings::UPCGMergeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMergeSettings);
	UPCGMergeSettings::~UPCGMergeSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMergeSettings, UPCGMergeSettings::StaticClass, TEXT("UPCGMergeSettings"), &Z_Registration_Info_UClass_UPCGMergeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMergeSettings), 2393774597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeElement_h_2596548158(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGMergeElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
