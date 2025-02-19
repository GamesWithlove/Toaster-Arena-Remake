// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Data/PCGLandscapeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLandscapeData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeData();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeData_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSurfaceData();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGLandscapeData::StaticRegisterNativesUPCGLandscapeData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLandscapeData);
	UClass* Z_Construct_UClass_UPCGLandscapeData_NoRegister()
	{
		return UPCGLandscapeData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLandscapeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Landscapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Landscapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHeightOnly_MetaData[];
#endif
		static void NewProp_bHeightOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMetadata_MetaData[];
#endif
		static void NewProp_bUseMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLandscapeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSurfaceData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Landscape data access abstraction for PCG. Supports multi-landscape access, but it assumes that they are not overlapping.\n*/" },
		{ "IncludePath", "Data/PCGLandscapeData.h" },
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeData.h" },
		{ "ToolTip", "Landscape data access abstraction for PCG. Supports multi-landscape access, but it assumes that they are not overlapping." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes_Inner = { "Landscapes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes_MetaData[] = {
		{ "Category", "SourceData" },
		{ "Comment", "// TODO: add on property changed to clear cached data. This is used to populate the LandscapeInfos array.\n" },
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeData.h" },
		{ "ToolTip", "TODO: add on property changed to clear cached data. This is used to populate the LandscapeInfos array." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes = { "Landscapes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLandscapeData, Landscapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLandscapeData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly_SetBit(void* Obj)
	{
		((UPCGLandscapeData*)Obj)->bHeightOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly = { "bHeightOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGLandscapeData), &Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGLandscapeData.h" },
	};
#endif
	void Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata_SetBit(void* Obj)
	{
		((UPCGLandscapeData*)Obj)->bUseMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata = { "bUseMetadata", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGLandscapeData), &Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLandscapeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Landscapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bHeightOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeData_Statics::NewProp_bUseMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLandscapeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLandscapeData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLandscapeData_Statics::ClassParams = {
		&UPCGLandscapeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLandscapeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGLandscapeData()
	{
		if (!Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton, Z_Construct_UClass_UPCGLandscapeData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLandscapeData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLandscapeData>()
	{
		return UPCGLandscapeData::StaticClass();
	}
	UPCGLandscapeData::UPCGLandscapeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLandscapeData);
	UPCGLandscapeData::~UPCGLandscapeData() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLandscapeData, UPCGLandscapeData::StaticClass, TEXT("UPCGLandscapeData"), &Z_Registration_Info_UClass_UPCGLandscapeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLandscapeData), 3567615317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_122990176(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGLandscapeData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
