// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGSurfaceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSurfaceData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSurfaceData::StaticRegisterNativesUPCGSurfaceData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSurfaceData);
	UClass* Z_Construct_UClass_UPCGSurfaceData_NoRegister()
	{
		return UPCGSurfaceData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSurfaceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSurfaceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGSurfaceData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGSurfaceData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSurfaceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGSurfaceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSurfaceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGSurfaceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSurfaceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSurfaceData_Statics::NewProp_Transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSurfaceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSurfaceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSurfaceData_Statics::ClassParams = {
		&UPCGSurfaceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSurfaceData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGSurfaceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSurfaceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGSurfaceData()
	{
		if (!Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton, Z_Construct_UClass_UPCGSurfaceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSurfaceData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSurfaceData>()
	{
		return UPCGSurfaceData::StaticClass();
	}
	UPCGSurfaceData::UPCGSurfaceData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSurfaceData);
	UPCGSurfaceData::~UPCGSurfaceData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSurfaceData, UPCGSurfaceData::StaticClass, TEXT("UPCGSurfaceData"), &Z_Registration_Info_UClass_UPCGSurfaceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSurfaceData), 2009294855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_4011903693(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSurfaceData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
