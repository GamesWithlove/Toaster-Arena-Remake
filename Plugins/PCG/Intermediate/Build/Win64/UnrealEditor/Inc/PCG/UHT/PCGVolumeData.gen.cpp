// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGVolumeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGVolumeData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeData();
	PCG_API UClass* Z_Construct_UClass_UPCGVolumeData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGVolumeData::StaticRegisterNativesUPCGVolumeData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGVolumeData);
	UClass* Z_Construct_UClass_UPCGVolumeData_NoRegister()
	{
		return UPCGVolumeData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGVolumeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrictBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrictBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGVolumeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGVolumeData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGVolumeData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// ~End UPCGSpatialDataWithPointCache interface\n" },
		{ "ModuleRelativePath", "Public/Data/PCGVolumeData.h" },
		{ "ToolTip", "~End UPCGSpatialDataWithPointCache interface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGVolumeData, VoxelSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/Data/PCGVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGVolumeData, Volume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGVolumeData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_StrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGVolumeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_StrictBounds = { "StrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGVolumeData, StrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_StrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_StrictBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGVolumeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGVolumeData_Statics::NewProp_StrictBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGVolumeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGVolumeData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGVolumeData_Statics::ClassParams = {
		&UPCGVolumeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGVolumeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGVolumeData()
	{
		if (!Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton, Z_Construct_UClass_UPCGVolumeData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGVolumeData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGVolumeData>()
	{
		return UPCGVolumeData::StaticClass();
	}
	UPCGVolumeData::UPCGVolumeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGVolumeData);
	UPCGVolumeData::~UPCGVolumeData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGVolumeData, UPCGVolumeData::StaticClass, TEXT("UPCGVolumeData"), &Z_Registration_Info_UClass_UPCGVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGVolumeData), 3144055604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_3585161022(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGVolumeData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
