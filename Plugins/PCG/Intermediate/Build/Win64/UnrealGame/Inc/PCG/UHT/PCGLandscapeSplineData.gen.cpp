// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGLandscapeSplineData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLandscapeSplineData() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeSplineData();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPolyLineData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGLandscapeSplineData::StaticRegisterNativesUPCGLandscapeSplineData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLandscapeSplineData);
	UClass* Z_Construct_UClass_UPCGLandscapeSplineData_NoRegister()
	{
		return UPCGLandscapeSplineData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLandscapeSplineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLandscapeSplineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGPolyLineData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeSplineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGLandscapeSplineData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeSplineData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeSplineData_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeSplineData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGLandscapeSplineData_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLandscapeSplineData, Spline), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeSplineData_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeSplineData_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLandscapeSplineData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeSplineData_Statics::NewProp_Spline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLandscapeSplineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLandscapeSplineData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLandscapeSplineData_Statics::ClassParams = {
		&UPCGLandscapeSplineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLandscapeSplineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeSplineData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeSplineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeSplineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGLandscapeSplineData()
	{
		if (!Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton, Z_Construct_UClass_UPCGLandscapeSplineData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLandscapeSplineData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLandscapeSplineData>()
	{
		return UPCGLandscapeSplineData::StaticClass();
	}
	UPCGLandscapeSplineData::UPCGLandscapeSplineData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLandscapeSplineData);
	UPCGLandscapeSplineData::~UPCGLandscapeSplineData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLandscapeSplineData, UPCGLandscapeSplineData::StaticClass, TEXT("UPCGLandscapeSplineData"), &Z_Registration_Info_UClass_UPCGLandscapeSplineData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLandscapeSplineData), 2929579685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_1615606013(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeSplineData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
