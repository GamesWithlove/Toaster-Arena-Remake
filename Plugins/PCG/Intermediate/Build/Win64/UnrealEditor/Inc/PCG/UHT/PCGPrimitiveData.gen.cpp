// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGPrimitiveData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPrimitiveData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPrimitiveData();
	PCG_API UClass* Z_Construct_UClass_UPCGPrimitiveData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGPrimitiveData::StaticRegisterNativesUPCGPrimitiveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPrimitiveData);
	UClass* Z_Construct_UClass_UPCGPrimitiveData_NoRegister()
	{
		return UPCGPrimitiveData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPrimitiveData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Primitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStrictBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStrictBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPrimitiveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPrimitiveData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGPrimitiveData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGPrimitiveData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// ~End UPCGSpatialDataWithPointCache implementation\n" },
		{ "ModuleRelativePath", "Public/Data/PCGPrimitiveData.h" },
		{ "ToolTip", "~End UPCGSpatialDataWithPointCache implementation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPrimitiveData, VoxelSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_Primitive_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Data/PCGPrimitiveData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPrimitiveData, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_Primitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGPrimitiveData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPrimitiveData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedStrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGPrimitiveData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedStrictBounds = { "CachedStrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGPrimitiveData, CachedStrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedStrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedStrictBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPrimitiveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPrimitiveData_Statics::NewProp_CachedStrictBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPrimitiveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPrimitiveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPrimitiveData_Statics::ClassParams = {
		&UPCGPrimitiveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPrimitiveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGPrimitiveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPrimitiveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGPrimitiveData()
	{
		if (!Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton, Z_Construct_UClass_UPCGPrimitiveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPrimitiveData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPrimitiveData>()
	{
		return UPCGPrimitiveData::StaticClass();
	}
	UPCGPrimitiveData::UPCGPrimitiveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPrimitiveData);
	UPCGPrimitiveData::~UPCGPrimitiveData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPrimitiveData, UPCGPrimitiveData::StaticClass, TEXT("UPCGPrimitiveData"), &Z_Registration_Info_UClass_UPCGPrimitiveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPrimitiveData), 4221735967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_796360724(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPrimitiveData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
