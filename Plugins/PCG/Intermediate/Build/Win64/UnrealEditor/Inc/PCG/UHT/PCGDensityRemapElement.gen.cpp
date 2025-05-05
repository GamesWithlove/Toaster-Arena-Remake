// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDensityRemapElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDensityRemapElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDensityRemapSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDensityRemapSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGDensityRemapSettings::StaticRegisterNativesUPCGDensityRemapSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDensityRemapSettings);
	UClass* Z_Construct_UClass_UPCGDensityRemapSettings_NoRegister()
	{
		return UPCGDensityRemapSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDensityRemapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeValuesOutsideInputRange_MetaData[];
#endif
		static void NewProp_bExcludeValuesOutsideInputRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeValuesOutsideInputRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDensityRemapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGDensityRemapElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If InRangeMin = InRangeMax, then that density value is mapped to the average of OutRangeMin and OutRangeMax */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If InRangeMin = InRangeMax, then that density value is mapped to the average of OutRangeMin and OutRangeMax" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMin = { "InRangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityRemapSettings, InRangeMin), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If InRangeMin = InRangeMax, then that density value is mapped to the average of OutRangeMin and OutRangeMax */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If InRangeMin = InRangeMax, then that density value is mapped to the average of OutRangeMin and OutRangeMax" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMax = { "InRangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityRemapSettings, InRangeMax), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMin = { "OutRangeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityRemapSettings, OutRangeMin), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMax = { "OutRangeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityRemapSettings, OutRangeMax), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Density values outside of the input range will be unaffected by the remapping */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityRemapElement.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Density values outside of the input range will be unaffected by the remapping" },
	};
#endif
	void Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange_SetBit(void* Obj)
	{
		((UPCGDensityRemapSettings*)Obj)->bExcludeValuesOutsideInputRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange = { "bExcludeValuesOutsideInputRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDensityRemapSettings), &Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDensityRemapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_InRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_OutRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityRemapSettings_Statics::NewProp_bExcludeValuesOutsideInputRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDensityRemapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDensityRemapSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDensityRemapSettings_Statics::ClassParams = {
		&UPCGDensityRemapSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDensityRemapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityRemapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDensityRemapSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDensityRemapSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDensityRemapSettings.OuterSingleton, Z_Construct_UClass_UPCGDensityRemapSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDensityRemapSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDensityRemapSettings>()
	{
		return UPCGDensityRemapSettings::StaticClass();
	}
	UPCGDensityRemapSettings::UPCGDensityRemapSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDensityRemapSettings);
	UPCGDensityRemapSettings::~UPCGDensityRemapSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDensityRemapSettings, UPCGDensityRemapSettings::StaticClass, TEXT("UPCGDensityRemapSettings"), &Z_Registration_Info_UClass_UPCGDensityRemapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDensityRemapSettings), 3099915471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_1901370706(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
