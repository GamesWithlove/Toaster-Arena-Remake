// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDensityNoise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDensityNoise() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDensityNoiseSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDensityNoiseSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDensityNoiseMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDensityNoiseMode;
	static UEnum* EPCGDensityNoiseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDensityNoiseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDensityNoiseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDensityNoiseMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDensityNoiseMode"));
		}
		return Z_Registration_Info_UEnum_EPCGDensityNoiseMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDensityNoiseMode>()
	{
		return EPCGDensityNoiseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enumerators[] = {
		{ "EPCGDensityNoiseMode::Set", (int64)EPCGDensityNoiseMode::Set },
		{ "EPCGDensityNoiseMode::Minimum", (int64)EPCGDensityNoiseMode::Minimum },
		{ "EPCGDensityNoiseMode::Maximum", (int64)EPCGDensityNoiseMode::Maximum },
		{ "EPCGDensityNoiseMode::Add", (int64)EPCGDensityNoiseMode::Add },
		{ "EPCGDensityNoiseMode::Multiply", (int64)EPCGDensityNoiseMode::Multiply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EPCGDensityNoiseMode::Add" },
		{ "Maximum.Name", "EPCGDensityNoiseMode::Maximum" },
		{ "Minimum.Name", "EPCGDensityNoiseMode::Minimum" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
		{ "Multiply.Name", "EPCGDensityNoiseMode::Multiply" },
		{ "Set.Name", "EPCGDensityNoiseMode::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDensityNoiseMode",
		"EPCGDensityNoiseMode",
		Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDensityNoiseMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGDensityNoiseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDensityNoiseMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDensityNoiseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDensityNoiseMode.InnerSingleton;
	}
	void UPCGDensityNoiseSettings::StaticRegisterNativesUPCGDensityNoiseSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDensityNoiseSettings);
	UClass* Z_Construct_UClass_UPCGDensityNoiseSettings_NoRegister()
	{
		return UPCGDensityNoiseSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDensityNoiseSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityNoiseMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityNoiseMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityNoiseMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityNoiseMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertSourceDensity_MetaData[];
#endif
		static void NewProp_bInvertSourceDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSourceDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGDensityNoise.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Density = (OriginalDensity op DensityNoise), DensityNoise in [DensityNoiseMin, DensityNoiseMax] */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Density = (OriginalDensity op DensityNoise), DensityNoise in [DensityNoiseMin, DensityNoiseMax]" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode = { "DensityMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityNoiseSettings, DensityMode), Z_Construct_UEnum_PCG_EPCGDensityNoiseMode, METADATA_PARAMS(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode_MetaData)) }; // 3835789789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMin = { "DensityNoiseMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityNoiseSettings, DensityNoiseMin), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMax = { "DensityNoiseMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDensityNoiseSettings, DensityNoiseMax), METADATA_PARAMS(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Density = 1 - Density before applying the DensityMode operation */" },
		{ "ModuleRelativePath", "Public/Elements/PCGDensityNoise.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Density = 1 - Density before applying the DensityMode operation" },
	};
#endif
	void Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity_SetBit(void* Obj)
	{
		((UPCGDensityNoiseSettings*)Obj)->bInvertSourceDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity = { "bInvertSourceDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDensityNoiseSettings), &Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_DensityNoiseMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::NewProp_bInvertSourceDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDensityNoiseSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::ClassParams = {
		&UPCGDensityNoiseSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDensityNoiseSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDensityNoiseSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDensityNoiseSettings.OuterSingleton, Z_Construct_UClass_UPCGDensityNoiseSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDensityNoiseSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDensityNoiseSettings>()
	{
		return UPCGDensityNoiseSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDensityNoiseSettings);
	UPCGDensityNoiseSettings::~UPCGDensityNoiseSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::EnumInfo[] = {
		{ EPCGDensityNoiseMode_StaticEnum, TEXT("EPCGDensityNoiseMode"), &Z_Registration_Info_UEnum_EPCGDensityNoiseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3835789789U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDensityNoiseSettings, UPCGDensityNoiseSettings::StaticClass, TEXT("UPCGDensityNoiseSettings"), &Z_Registration_Info_UClass_UPCGDensityNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDensityNoiseSettings), 3901895640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_1551845229(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityNoise_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
