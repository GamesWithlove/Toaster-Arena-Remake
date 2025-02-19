// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGDifferenceElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGDifferenceElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGDifferenceSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGDifferenceSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDifferenceMode();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGDifferenceSettings::StaticRegisterNativesUPCGDifferenceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGDifferenceSettings);
	UClass* Z_Construct_UClass_UPCGDifferenceSettings_NoRegister()
	{
		return UPCGDifferenceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGDifferenceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiffMetadata_MetaData[];
#endif
		static void NewProp_bDiffMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiffMetadata;
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
	UObject* (*const Z_Construct_UClass_UPCGDifferenceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGDifferenceElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGDifferenceElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDifferenceElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGDifferenceDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction_MetaData)) }; // 4219407711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDifferenceElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGDifferenceSettings, Mode), Z_Construct_UEnum_PCG_EPCGDifferenceMode, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode_MetaData)) }; // 2042654028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGDifferenceElement.h" },
	};
#endif
	void Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata_SetBit(void* Obj)
	{
		((UPCGDifferenceSettings*)Obj)->bDiffMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata = { "bDiffMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDifferenceSettings), &Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "ModuleRelativePath", "Public/Elements/PCGDifferenceElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGDifferenceSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGDifferenceSettings), &Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGDifferenceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_DensityFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bDiffMetadata,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGDifferenceSettings_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGDifferenceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGDifferenceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGDifferenceSettings_Statics::ClassParams = {
		&UPCGDifferenceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGDifferenceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGDifferenceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGDifferenceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGDifferenceSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGDifferenceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGDifferenceSettings.OuterSingleton, Z_Construct_UClass_UPCGDifferenceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGDifferenceSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGDifferenceSettings>()
	{
		return UPCGDifferenceSettings::StaticClass();
	}
	UPCGDifferenceSettings::UPCGDifferenceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGDifferenceSettings);
	UPCGDifferenceSettings::~UPCGDifferenceSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGDifferenceSettings, UPCGDifferenceSettings::StaticClass, TEXT("UPCGDifferenceSettings"), &Z_Registration_Info_UClass_UPCGDifferenceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGDifferenceSettings), 1440571052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_468922807(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
