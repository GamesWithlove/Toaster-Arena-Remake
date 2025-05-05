// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGSplineData.h"
#include "PCG/Public/Data/PCGSplineStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSplineData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector2D();
	PCG_API UClass* Z_Construct_UClass_UPCGPolyLineData();
	PCG_API UClass* Z_Construct_UClass_UPCGProjectionData();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineData();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineProjectionData();
	PCG_API UClass* Z_Construct_UClass_UPCGSplineProjectionData_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGSplineStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSplineData::StaticRegisterNativesUPCGSplineData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSplineData);
	UClass* Z_Construct_UClass_UPCGSplineData_NoRegister()
	{
		return UPCGSplineData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSplineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSplineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGPolyLineData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGSplineData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineData_Statics::NewProp_SplineStruct_MetaData[] = {
		{ "Comment", "// Minimal data needed to replicate the behavior from USplineComponent\n" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineData.h" },
		{ "ToolTip", "Minimal data needed to replicate the behavior from USplineComponent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSplineData_Statics::NewProp_SplineStruct = { "SplineStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSplineData, SplineStruct), Z_Construct_UScriptStruct_FPCGSplineStruct, METADATA_PARAMS(Z_Construct_UClass_UPCGSplineData_Statics::NewProp_SplineStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineData_Statics::NewProp_SplineStruct_MetaData)) }; // 3113372838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSplineData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSplineData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGSplineData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineData_Statics::NewProp_CachedBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSplineData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSplineData_Statics::NewProp_SplineStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSplineData_Statics::NewProp_CachedBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSplineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSplineData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSplineData_Statics::ClassParams = {
		&UPCGSplineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSplineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSplineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSplineData()
	{
		if (!Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton, Z_Construct_UClass_UPCGSplineData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSplineData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSplineData>()
	{
		return UPCGSplineData::StaticClass();
	}
	UPCGSplineData::UPCGSplineData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSplineData);
	UPCGSplineData::~UPCGSplineData() {}
	void UPCGSplineProjectionData::StaticRegisterNativesUPCGSplineProjectionData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSplineProjectionData);
	UClass* Z_Construct_UClass_UPCGSplineProjectionData_NoRegister()
	{
		return UPCGSplineProjectionData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSplineProjectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSplineProjectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGProjectionData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineProjectionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/* The projection of a spline onto a surface. */" },
		{ "IncludePath", "Data/PCGSplineData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineData.h" },
		{ "ToolTip", "The projection of a spline onto a surface." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSplineProjectionData_Statics::NewProp_ProjectedPosition_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "Comment", "//~End UPCGSpatialData interface\n" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSplineProjectionData_Statics::NewProp_ProjectedPosition = { "ProjectedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSplineProjectionData, ProjectedPosition), Z_Construct_UScriptStruct_FInterpCurveVector2D, METADATA_PARAMS(Z_Construct_UClass_UPCGSplineProjectionData_Statics::NewProp_ProjectedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineProjectionData_Statics::NewProp_ProjectedPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSplineProjectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSplineProjectionData_Statics::NewProp_ProjectedPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSplineProjectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSplineProjectionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSplineProjectionData_Statics::ClassParams = {
		&UPCGSplineProjectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSplineProjectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineProjectionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSplineProjectionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSplineProjectionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSplineProjectionData()
	{
		if (!Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton, Z_Construct_UClass_UPCGSplineProjectionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSplineProjectionData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSplineProjectionData>()
	{
		return UPCGSplineProjectionData::StaticClass();
	}
	UPCGSplineProjectionData::UPCGSplineProjectionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSplineProjectionData);
	UPCGSplineProjectionData::~UPCGSplineProjectionData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSplineData, UPCGSplineData::StaticClass, TEXT("UPCGSplineData"), &Z_Registration_Info_UClass_UPCGSplineData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSplineData), 3704346726U) },
		{ Z_Construct_UClass_UPCGSplineProjectionData, UPCGSplineProjectionData::StaticClass, TEXT("UPCGSplineProjectionData"), &Z_Registration_Info_UClass_UPCGSplineProjectionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSplineProjectionData), 1589766750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_445642847(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSplineData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
