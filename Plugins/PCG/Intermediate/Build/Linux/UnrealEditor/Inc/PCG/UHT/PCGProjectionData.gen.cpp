// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGProjectionData.h"
#include "PCG/Public/Elements/PCGProjectionParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGProjectionData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	PCG_API UClass* Z_Construct_UClass_UPCGProjectionData();
	PCG_API UClass* Z_Construct_UClass_UPCGProjectionData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSpatialDataWithPointCache();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGProjectionParams();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGProjectionData::StaticRegisterNativesUPCGProjectionData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGProjectionData);
	UClass* Z_Construct_UClass_UPCGProjectionData_NoRegister()
	{
		return UPCGProjectionData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGProjectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStrictBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStrictBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGProjectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSpatialDataWithPointCache,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Generic projection class (A projected onto B) that intercepts spatial queries\n*/" },
		{ "IncludePath", "Data/PCGProjectionData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
		{ "ToolTip", "Generic projection class (A projected onto B) that intercepts spatial queries" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGProjectionData, Source), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGProjectionData, Target), Z_Construct_UClass_UPCGSpatialData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedBounds = { "CachedBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGProjectionData, CachedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedStrictBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedStrictBounds = { "CachedStrictBounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGProjectionData, CachedStrictBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedStrictBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedStrictBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_ProjectionParams_MetaData[] = {
		{ "Category", "SpatialData" },
		{ "ModuleRelativePath", "Public/Data/PCGProjectionData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_ProjectionParams = { "ProjectionParams", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGProjectionData, ProjectionParams), Z_Construct_UScriptStruct_FPCGProjectionParams, METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_ProjectionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_ProjectionParams_MetaData)) }; // 304869056
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGProjectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_CachedStrictBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGProjectionData_Statics::NewProp_ProjectionParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGProjectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGProjectionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGProjectionData_Statics::ClassParams = {
		&UPCGProjectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGProjectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGProjectionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGProjectionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGProjectionData()
	{
		if (!Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton, Z_Construct_UClass_UPCGProjectionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGProjectionData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGProjectionData>()
	{
		return UPCGProjectionData::StaticClass();
	}
	UPCGProjectionData::UPCGProjectionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGProjectionData);
	UPCGProjectionData::~UPCGProjectionData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGProjectionData, UPCGProjectionData::StaticClass, TEXT("UPCGProjectionData"), &Z_Registration_Info_UClass_UPCGProjectionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGProjectionData), 1647609383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_1004101751(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGProjectionData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
