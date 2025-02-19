// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGCollisionShapeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCollisionShapeData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PCG_API UClass* Z_Construct_UClass_UPCGCollisionShapeData();
	PCG_API UClass* Z_Construct_UClass_UPCGCollisionShapeData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGCollisionShapeData::StaticRegisterNativesUPCGCollisionShapeData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCollisionShapeData);
	UClass* Z_Construct_UClass_UPCGCollisionShapeData_NoRegister()
	{
		return UPCGCollisionShapeData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCollisionShapeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
	UObject* (*const Z_Construct_UClass_UPCGCollisionShapeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCollisionShapeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/PCGCollisionShapeData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGCollisionShapeData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGCollisionShapeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCollisionShapeData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGCollisionShapeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCollisionShapeData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedStrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGCollisionShapeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedStrictBounds = { "CachedStrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGCollisionShapeData, CachedStrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedStrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedStrictBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCollisionShapeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCollisionShapeData_Statics::NewProp_CachedStrictBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCollisionShapeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCollisionShapeData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCollisionShapeData_Statics::ClassParams = {
		&UPCGCollisionShapeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGCollisionShapeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollisionShapeData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGCollisionShapeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCollisionShapeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGCollisionShapeData()
	{
		if (!Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton, Z_Construct_UClass_UPCGCollisionShapeData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCollisionShapeData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCollisionShapeData>()
	{
		return UPCGCollisionShapeData::StaticClass();
	}
	UPCGCollisionShapeData::UPCGCollisionShapeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCollisionShapeData);
	UPCGCollisionShapeData::~UPCGCollisionShapeData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCollisionShapeData, UPCGCollisionShapeData::StaticClass, TEXT("UPCGCollisionShapeData"), &Z_Registration_Info_UClass_UPCGCollisionShapeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCollisionShapeData), 1772012239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_2190011196(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGCollisionShapeData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
