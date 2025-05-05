// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Elements/PCGSurfaceSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSurfaceSampler() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceSamplerSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSurfaceSamplerSettings::StaticRegisterNativesUPCGSurfaceSamplerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSurfaceSamplerSettings);
	UClass* Z_Construct_UClass_UPCGSurfaceSamplerSettings_NoRegister()
	{
		return UPCGSurfaceSamplerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerSquaredMeter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerSquaredMeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Looseness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Looseness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnbounded_MetaData[];
#endif
		static void NewProp_bUnbounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnbounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDensityToPoints_MetaData[];
#endif
		static void NewProp_bApplyDensityToPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDensityToPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSteepness;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepZeroDensityPoints_MetaData[];
#endif
		static void NewProp_bKeepZeroDensityPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepZeroDensityPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointRadius;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGSurfaceSampler.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointsPerSquaredMeter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointsPerSquaredMeter = { "PointsPerSquaredMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceSamplerSettings, PointsPerSquaredMeter), METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointsPerSquaredMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointsPerSquaredMeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointExtents_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointExtents = { "PointExtents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceSamplerSettings, PointExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_Looseness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_Looseness = { "Looseness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceSamplerSettings, Looseness), METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_Looseness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_Looseness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If no Bounding Shape input is provided the actor bounds are used to limit the sample generation area.\n\x09* This option allows ignoring the actor bounds and generating over the entire surface. Use with caution as this\n\x09* may generate a lot of points.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If no Bounding Shape input is provided the actor bounds are used to limit the sample generation area.\nThis option allows ignoring the actor bounds and generating over the entire surface. Use with caution as this\nmay generate a lot of points." },
	};
#endif
	void Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_SetBit(void* Obj)
	{
		((UPCGSurfaceSamplerSettings*)Obj)->bUnbounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded = { "bUnbounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSurfaceSamplerSettings), &Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_MetaData[] = {
		{ "Category", "Settings|Points" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_SetBit(void* Obj)
	{
		((UPCGSurfaceSamplerSettings*)Obj)->bApplyDensityToPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints = { "bApplyDensityToPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSurfaceSamplerSettings), &Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointSteepness_MetaData[] = {
		{ "Category", "Settings|Points" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointSteepness = { "PointSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceSamplerSettings, PointSteepness), METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointSteepness_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData[] = {
		{ "Category", "Settings|Debug" },
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit(void* Obj)
	{
		((UPCGSurfaceSamplerSettings*)Obj)->bKeepZeroDensityPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints = { "bKeepZeroDensityPoints", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGSurfaceSamplerSettings), &Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGSurfaceSampler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointRadius = { "PointRadius", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceSamplerSettings, PointRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointRadius_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointsPerSquaredMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_Looseness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bUnbounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bApplyDensityToPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointSteepness,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_bKeepZeroDensityPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::NewProp_PointRadius,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSurfaceSamplerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::ClassParams = {
		&UPCGSurfaceSamplerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSurfaceSamplerSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton, Z_Construct_UClass_UPCGSurfaceSamplerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSurfaceSamplerSettings>()
	{
		return UPCGSurfaceSamplerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSurfaceSamplerSettings);
	UPCGSurfaceSamplerSettings::~UPCGSurfaceSamplerSettings() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSurfaceSamplerSettings, UPCGSurfaceSamplerSettings::StaticClass, TEXT("UPCGSurfaceSamplerSettings"), &Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSurfaceSamplerSettings), 2398189269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_1249093259(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGSurfaceSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
