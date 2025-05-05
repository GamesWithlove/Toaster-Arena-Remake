// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGUnionElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGUnionElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGUnionSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGUnionDensityFunction();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGUnionType();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGUnionSettings::StaticRegisterNativesUPCGUnionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGUnionSettings);
	UClass* Z_Construct_UClass_UPCGUnionSettings_NoRegister()
	{
		return UPCGUnionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGUnionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGUnionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGUnionElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGUnionElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGUnionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionSettings, Type), Z_Construct_UEnum_PCG_EPCGUnionType, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type_MetaData)) }; // 422985877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGUnionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGUnionSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGUnionDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction_MetaData)) }; // 2650195071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGUnionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGUnionSettings_Statics::NewProp_DensityFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGUnionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGUnionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGUnionSettings_Statics::ClassParams = {
		&UPCGUnionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGUnionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGUnionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGUnionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGUnionSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton, Z_Construct_UClass_UPCGUnionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGUnionSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGUnionSettings>()
	{
		return UPCGUnionSettings::StaticClass();
	}
	UPCGUnionSettings::UPCGUnionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGUnionSettings);
	UPCGUnionSettings::~UPCGUnionSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGUnionSettings, UPCGUnionSettings::StaticClass, TEXT("UPCGUnionSettings"), &Z_Registration_Info_UClass_UPCGUnionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGUnionSettings), 3644883962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_2271932926(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGUnionElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
