// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGPolyLineData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPolyLineData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGPolyLineData();
	PCG_API UClass* Z_Construct_UClass_UPCGPolyLineData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGPolyLineData::StaticRegisterNativesUPCGPolyLineData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPolyLineData);
	UClass* Z_Construct_UClass_UPCGPolyLineData_NoRegister()
	{
		return UPCGPolyLineData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPolyLineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPolyLineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPolyLineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGPolyLineData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGPolyLineData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPolyLineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPolyLineData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPolyLineData_Statics::ClassParams = {
		&UPCGPolyLineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPolyLineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPolyLineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPolyLineData()
	{
		if (!Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton, Z_Construct_UClass_UPCGPolyLineData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPolyLineData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPolyLineData>()
	{
		return UPCGPolyLineData::StaticClass();
	}
	UPCGPolyLineData::UPCGPolyLineData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPolyLineData);
	UPCGPolyLineData::~UPCGPolyLineData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPolyLineData, UPCGPolyLineData::StaticClass, TEXT("UPCGPolyLineData"), &Z_Registration_Info_UClass_UPCGPolyLineData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPolyLineData), 2903255170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_3951176013(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPolyLineData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
