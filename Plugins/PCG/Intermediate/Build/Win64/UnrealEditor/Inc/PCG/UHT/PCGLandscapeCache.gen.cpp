// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Grid/PCGLandscapeCache.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGLandscapeCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeCache();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeCache_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight;
class UScriptStruct* FPCGLandscapeLayerWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGLandscapeLayerWeight"));
	}
	return Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGLandscapeLayerWeight>()
{
	return FPCGLandscapeLayerWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/PCGLandscapeCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGLandscapeLayerWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Landscape Attribute" },
		{ "ModuleRelativePath", "Public/Grid/PCGLandscapeCache.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGLandscapeLayerWeight, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Landscape Attribute" },
		{ "ModuleRelativePath", "Public/Grid/PCGLandscapeCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPCGLandscapeLayerWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGLandscapeLayerWeight",
		sizeof(FPCGLandscapeLayerWeight),
		alignof(FPCGLandscapeLayerWeight),
		Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.InnerSingleton, Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight.InnerSingleton;
	}
	void UPCGLandscapeCache::StaticRegisterNativesUPCGLandscapeCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGLandscapeCache);
	UClass* Z_Construct_UClass_UPCGLandscapeCache_NoRegister()
	{
		return UPCGLandscapeCache::StaticClass();
	}
	struct Z_Construct_UClass_UPCGLandscapeCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedLayerNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CachedLayerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGLandscapeCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeCache_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid/PCGLandscapeCache.h" },
		{ "ModuleRelativePath", "Public/Grid/PCGLandscapeCache.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames_ElementProp = { "CachedLayerNames", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "//TODO: separate by landscape\n" },
		{ "ModuleRelativePath", "Public/Grid/PCGLandscapeCache.h" },
		{ "ToolTip", "TODO: separate by landscape" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames = { "CachedLayerNames", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGLandscapeCache, CachedLayerNames), METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGLandscapeCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGLandscapeCache_Statics::NewProp_CachedLayerNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGLandscapeCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGLandscapeCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGLandscapeCache_Statics::ClassParams = {
		&UPCGLandscapeCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGLandscapeCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeCache_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGLandscapeCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGLandscapeCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGLandscapeCache()
	{
		if (!Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton, Z_Construct_UClass_UPCGLandscapeCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGLandscapeCache>()
	{
		return UPCGLandscapeCache::StaticClass();
	}
	UPCGLandscapeCache::UPCGLandscapeCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGLandscapeCache);
	UPCGLandscapeCache::~UPCGLandscapeCache() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGLandscapeCache)
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ScriptStructInfo[] = {
		{ FPCGLandscapeLayerWeight::StaticStruct, Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewStructOps, TEXT("PCGLandscapeLayerWeight"), &Z_Registration_Info_UScriptStruct_PCGLandscapeLayerWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGLandscapeLayerWeight), 3286644734U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGLandscapeCache, UPCGLandscapeCache::StaticClass, TEXT("UPCGLandscapeCache"), &Z_Registration_Info_UClass_UPCGLandscapeCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGLandscapeCache), 1769807660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_2424065963(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
