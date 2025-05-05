// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGPointSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointSampler() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGPointSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointSamplerSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGPointSamplerSettings::StaticRegisterNativesUPCGPointSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointSamplerSettings);
	UClass* Z_Construct_UClass_UPCGPointSamplerSettings_NoRegister()
	{
		return UPCGPointSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepZeroDensityPoints_MetaData[];
#endif
		static void NewProp_bKeepZeroDensityPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepZeroDensityPoints;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGPointSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPointSamplerSettings, Ratio), METADATA_PARAMS(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGPointSamplerSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGPointSamplerSettings), &Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_Ratio,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointSamplerSettings_Statics::ClassParams = {
		&UPCGPointSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPointSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGPointSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointSamplerSettings>()
	{
		return UPCGPointSamplerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointSamplerSettings);
	UPCGPointSamplerSettings::~UPCGPointSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointSamplerSettings, UPCGPointSamplerSettings::StaticClass, TEXT("UPCGPointSamplerSettings"), &Z_Registration_Info_UClass_UPCGPointSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointSamplerSettings), 1984267955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointSampler_h_3248478131(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
