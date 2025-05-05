// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDensityRemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDensityRemap() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGLinearDensityRemapSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGLinearDensityRemapSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGLinearDensityRemapSettings::StaticRegisterNativesUPCGLinearDensityRemapSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLinearDensityRemapSettings);
	UClass* Z_Construct_UClass_UPCGLinearDensityRemapSettings_NoRegister()
	{
		return UPCGLinearDensityRemapSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemapMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemapMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiplyDensity_MetaData[];
#endif
		static void NewProp_bMultiplyDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiplyDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Deprecated", "5.1" },
		{ "DeprecationMessage", "Use DensityNoise instead." },
		{ "IncludePath", "Elements/PCGDensityRemap.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemap.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMin = { "RemapMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLinearDensityRemapSettings, RemapMin), METADATA_PARAMS(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemap.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMax = { "RemapMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLinearDensityRemapSettings, RemapMax), METADATA_PARAMS(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemap.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity_SetBit(void* Obj)
	{
		((UPCGLinearDensityRemapSettings*)Obj)->bMultiplyDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity = { "bMultiplyDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGLinearDensityRemapSettings), &Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_RemapMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::NewProp_bMultiplyDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLinearDensityRemapSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::ClassParams = {
		&UPCGLinearDensityRemapSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::PropPointers),
		0,
		0x011000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGLinearDensityRemapSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGLinearDensityRemapSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLinearDensityRemapSettings.OuterSingleton, Z_Construct_UClass_UPCGLinearDensityRemapSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLinearDensityRemapSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLinearDensityRemapSettings>()
	{
		return UPCGLinearDensityRemapSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLinearDensityRemapSettings);
	UPCGLinearDensityRemapSettings::~UPCGLinearDensityRemapSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLinearDensityRemapSettings, UPCGLinearDensityRemapSettings::StaticClass, TEXT("UPCGLinearDensityRemapSettings"), &Z_Registration_Info_UClass_UPCGLinearDensityRemapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLinearDensityRemapSettings), 2137974678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemap_h_2121602489(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
