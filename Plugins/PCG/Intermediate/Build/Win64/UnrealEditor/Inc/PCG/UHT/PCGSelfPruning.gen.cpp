// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGSelfPruning.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSelfPruning() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGSelfPruningSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSelfPruningSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSelfPruningType();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSelfPruningType;
	static UEnum* EPCGSelfPruningType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSelfPruningType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSelfPruningType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSelfPruningType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSelfPruningType"));
		}
		return Z_Registration_Info_UEnum_EPCGSelfPruningType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSelfPruningType>()
	{
		return EPCGSelfPruningType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enumerators[] = {
		{ "EPCGSelfPruningType::LargeToSmall", (int64)EPCGSelfPruningType::LargeToSmall },
		{ "EPCGSelfPruningType::SmallToLarge", (int64)EPCGSelfPruningType::SmallToLarge },
		{ "EPCGSelfPruningType::AllEqual", (int64)EPCGSelfPruningType::AllEqual },
		{ "EPCGSelfPruningType::None", (int64)EPCGSelfPruningType::None },
		{ "EPCGSelfPruningType::RemoveDuplicates", (int64)EPCGSelfPruningType::RemoveDuplicates },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enum_MetaDataParams[] = {
		{ "AllEqual.Name", "EPCGSelfPruningType::AllEqual" },
		{ "LargeToSmall.Name", "EPCGSelfPruningType::LargeToSmall" },
		{ "ModuleRelativePath", "Public/Elements/PCGSelfPruning.h" },
		{ "None.Name", "EPCGSelfPruningType::None" },
		{ "RemoveDuplicates.Name", "EPCGSelfPruningType::RemoveDuplicates" },
		{ "SmallToLarge.Name", "EPCGSelfPruningType::SmallToLarge" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSelfPruningType",
		"EPCGSelfPruningType",
		Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSelfPruningType()
	{
		if (!Z_Registration_Info_UEnum_EPCGSelfPruningType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSelfPruningType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSelfPruningType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSelfPruningType.InnerSingleton;
	}
	void UPCGSelfPruningSettings::StaticRegisterNativesUPCGSelfPruningSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSelfPruningSettings);
	UClass* Z_Construct_UClass_UPCGSelfPruningSettings_NoRegister()
	{
		return UPCGSelfPruningSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSelfPruningSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PruningType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PruningType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PruningType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusSimilarityFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusSimilarityFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizedPruning_MetaData[];
#endif
		static void NewProp_bRandomizedPruning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizedPruning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSelfPruningSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSelfPruningSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSelfPruning.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSelfPruning.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSelfPruning.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType = { "PruningType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSelfPruningSettings, PruningType), Z_Construct_UEnum_PCG_EPCGSelfPruningType, METADATA_PARAMS(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType_MetaData)) }; // 8148687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_RadiusSimilarityFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "PruningType == EPCGSelfPruningType::LargeToSmall || PruningType == EPCGSelfPruningType::SmallToLarge" },
		{ "ModuleRelativePath", "Public/Elements/PCGSelfPruning.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_RadiusSimilarityFactor = { "RadiusSimilarityFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSelfPruningSettings, RadiusSimilarityFactor), METADATA_PARAMS(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_RadiusSimilarityFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_RadiusSimilarityFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSelfPruning.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning_SetBit(void* Obj)
	{
		((UPCGSelfPruningSettings*)Obj)->bRandomizedPruning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning = { "bRandomizedPruning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSelfPruningSettings), &Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSelfPruningSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_PruningType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_RadiusSimilarityFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSelfPruningSettings_Statics::NewProp_bRandomizedPruning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSelfPruningSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSelfPruningSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSelfPruningSettings_Statics::ClassParams = {
		&UPCGSelfPruningSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSelfPruningSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSelfPruningSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSelfPruningSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSelfPruningSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSelfPruningSettings.OuterSingleton, Z_Construct_UClass_UPCGSelfPruningSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSelfPruningSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSelfPruningSettings>()
	{
		return UPCGSelfPruningSettings::StaticClass();
	}
	UPCGSelfPruningSettings::UPCGSelfPruningSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSelfPruningSettings);
	UPCGSelfPruningSettings::~UPCGSelfPruningSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::EnumInfo[] = {
		{ EPCGSelfPruningType_StaticEnum, TEXT("EPCGSelfPruningType"), &Z_Registration_Info_UEnum_EPCGSelfPruningType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 8148687U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSelfPruningSettings, UPCGSelfPruningSettings::StaticClass, TEXT("UPCGSelfPruningSettings"), &Z_Registration_Info_UClass_UPCGSelfPruningSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSelfPruningSettings), 1752288601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_3699175184(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSelfPruning_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
