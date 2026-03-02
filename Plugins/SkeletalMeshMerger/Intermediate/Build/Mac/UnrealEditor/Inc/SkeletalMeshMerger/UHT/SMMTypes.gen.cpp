// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshMerger/Public/SMMTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMMTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMTypes();
	SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMTypes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshMerger();
// End Cross Module References
	void USMMTypes::StaticRegisterNativesUSMMTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMMTypes);
	UClass* Z_Construct_UClass_USMMTypes_NoRegister()
	{
		return USMMTypes::StaticClass();
	}
	struct Z_Construct_UClass_USMMTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMMTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMMTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMMTypes.h" },
		{ "ModuleRelativePath", "Public/SMMTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMMTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMMTypes_Statics::ClassParams = {
		&USMMTypes::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMMTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMMTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMMTypes()
	{
		if (!Z_Registration_Info_UClass_USMMTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMTypes.OuterSingleton, Z_Construct_UClass_USMMTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMMTypes.OuterSingleton;
	}
	template<> SKELETALMESHMERGER_API UClass* StaticClass<USMMTypes>()
	{
		return USMMTypes::StaticClass();
	}
	USMMTypes::USMMTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMMTypes);
	USMMTypes::~USMMTypes() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMMTypes, USMMTypes::StaticClass, TEXT("USMMTypes"), &Z_Registration_Info_UClass_USMMTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMTypes), 2393583211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h_3477063678(TEXT("/Script/SkeletalMeshMerger"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
