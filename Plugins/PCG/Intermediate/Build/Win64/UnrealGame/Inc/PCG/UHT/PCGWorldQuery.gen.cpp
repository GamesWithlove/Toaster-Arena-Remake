// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGWorldQuery.h"
#include "PCG/Public/Data/PCGWorldData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGWorldQuery() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldQuerySettings();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldQuerySettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldRayHitSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGWorldRayHitSettings_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGWorldQuerySettings::StaticRegisterNativesUPCGWorldQuerySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGWorldQuerySettings);
	UClass* Z_Construct_UClass_UPCGWorldQuerySettings_NoRegister()
	{
		return UPCGWorldQuerySettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGWorldQuerySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGWorldQuerySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldQuerySettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGWorldQuery.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGWorldQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldQuerySettings_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Elements/PCGWorldQuery.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorldQuerySettings_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldQuerySettings, QueryParams), Z_Construct_UScriptStruct_FPCGWorldVolumetricQueryParams, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldQuerySettings_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldQuerySettings_Statics::NewProp_QueryParams_MetaData)) }; // 2445480103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorldQuerySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldQuerySettings_Statics::NewProp_QueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGWorldQuerySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorldQuerySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGWorldQuerySettings_Statics::ClassParams = {
		&UPCGWorldQuerySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGWorldQuerySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldQuerySettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGWorldQuerySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldQuerySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGWorldQuerySettings()
	{
		if (!Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton, Z_Construct_UClass_UPCGWorldQuerySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGWorldQuerySettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGWorldQuerySettings>()
	{
		return UPCGWorldQuerySettings::StaticClass();
	}
	UPCGWorldQuerySettings::UPCGWorldQuerySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGWorldQuerySettings);
	UPCGWorldQuerySettings::~UPCGWorldQuerySettings() {}
	void UPCGWorldRayHitSettings::StaticRegisterNativesUPCGWorldRayHitSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGWorldRayHitSettings);
	UClass* Z_Construct_UClass_UPCGWorldRayHitSettings_NoRegister()
	{
		return UPCGWorldRayHitSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGWorldRayHitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGWorldQuery.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGWorldQuery.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Elements/PCGWorldQuery.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGWorldRayHitSettings, QueryParams), Z_Construct_UScriptStruct_FPCGWorldRayHitQueryParams, METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::NewProp_QueryParams_MetaData)) }; // 2934727496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::NewProp_QueryParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGWorldRayHitSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::ClassParams = {
		&UPCGWorldRayHitSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGWorldRayHitSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton, Z_Construct_UClass_UPCGWorldRayHitSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGWorldRayHitSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGWorldRayHitSettings>()
	{
		return UPCGWorldRayHitSettings::StaticClass();
	}
	UPCGWorldRayHitSettings::UPCGWorldRayHitSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGWorldRayHitSettings);
	UPCGWorldRayHitSettings::~UPCGWorldRayHitSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGWorldQuerySettings, UPCGWorldQuerySettings::StaticClass, TEXT("UPCGWorldQuerySettings"), &Z_Registration_Info_UClass_UPCGWorldQuerySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorldQuerySettings), 1148315978U) },
		{ Z_Construct_UClass_UPCGWorldRayHitSettings, UPCGWorldRayHitSettings::StaticClass, TEXT("UPCGWorldRayHitSettings"), &Z_Registration_Info_UClass_UPCGWorldRayHitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGWorldRayHitSettings), 2357124060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h_1843845961(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
