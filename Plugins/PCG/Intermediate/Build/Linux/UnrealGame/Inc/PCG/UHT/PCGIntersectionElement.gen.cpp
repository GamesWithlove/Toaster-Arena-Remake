// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGIntersectionElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGIntersectionElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGIntersectionSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGIntersectionSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGIntersectionSettings::StaticRegisterNativesUPCGIntersectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGIntersectionSettings);
	UClass* Z_Construct_UClass_UPCGIntersectionSettings_NoRegister()
	{
		return UPCGIntersectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGIntersectionSettings_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGIntersectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGIntersectionElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGIntersectionElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGIntersectionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction = { "DensityFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGIntersectionSettings, DensityFunction), Z_Construct_UEnum_PCG_EPCGIntersectionDensityFunction, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction_MetaData)) }; // 2206197230
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "ModuleRelativePath", "Public/Elements/PCGIntersectionElement.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGIntersectionSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGIntersectionSettings), &Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGIntersectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_DensityFunction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGIntersectionSettings_Statics::NewProp_bKeepZeroDensityPoints,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGIntersectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGIntersectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGIntersectionSettings_Statics::ClassParams = {
		&UPCGIntersectionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGIntersectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGIntersectionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGIntersectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGIntersectionSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGIntersectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGIntersectionSettings.OuterSingleton, Z_Construct_UClass_UPCGIntersectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGIntersectionSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGIntersectionSettings>()
	{
		return UPCGIntersectionSettings::StaticClass();
	}
	UPCGIntersectionSettings::UPCGIntersectionSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGIntersectionSettings);
	UPCGIntersectionSettings::~UPCGIntersectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGIntersectionElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGIntersectionElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGIntersectionSettings, UPCGIntersectionSettings::StaticClass, TEXT("UPCGIntersectionSettings"), &Z_Registration_Info_UClass_UPCGIntersectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGIntersectionSettings), 4129589063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGIntersectionElement_h_3399969460(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGIntersectionElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGIntersectionElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
