// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshProTest_NaniteManualClusters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshProTest_NaniteManualClusters() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshProTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshProTest_NaniteManualClusters ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters;
UClass* ARealtimeMeshProTest_NaniteManualClusters::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshProTest_NaniteManualClusters;
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshProTest_NaniteManualClusters"),
			Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.InnerSingleton,
			StaticRegisterNativesARealtimeMeshProTest_NaniteManualClusters,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_NoRegister()
{
	return ARealtimeMeshProTest_NaniteManualClusters::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Comprehensive test for creating Nanite meshes from manually constructed clusters.\n *\n * This test demonstrates:\n * - Manual cluster creation with different configurations\n * - Multi-cluster box (one cluster per face)\n * - Single cluster with multiple material ranges\n * - Custom hierarchy building\n */" },
#endif
		{ "IncludePath", "RealtimeMeshProTest_NaniteManualClusters.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteManualClusters.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comprehensive test for creating Nanite meshes from manually constructed clusters.\n\nThis test demonstrates:\n- Manual cluster creation with different configurations\n- Multi-cluster box (one cluster per face)\n- Single cluster with multiple material ranges\n- Custom hierarchy building" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshProTest_NaniteManualClusters constinit property declarations 
// ********** End Class ARealtimeMeshProTest_NaniteManualClusters constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshProTest_NaniteManualClusters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshProTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::ClassParams = {
	&ARealtimeMeshProTest_NaniteManualClusters::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::Class_MetaDataParams)
};
void ARealtimeMeshProTest_NaniteManualClusters::StaticRegisterNativesARealtimeMeshProTest_NaniteManualClusters()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.OuterSingleton, Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshProTest_NaniteManualClusters);
ARealtimeMeshProTest_NaniteManualClusters::~ARealtimeMeshProTest_NaniteManualClusters() {}
// ********** End Class ARealtimeMeshProTest_NaniteManualClusters **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteManualClusters_h__Script_RealtimeMeshProTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshProTest_NaniteManualClusters, ARealtimeMeshProTest_NaniteManualClusters::StaticClass, TEXT("ARealtimeMeshProTest_NaniteManualClusters"), &Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteManualClusters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshProTest_NaniteManualClusters), 915299529U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteManualClusters_h__Script_RealtimeMeshProTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteManualClusters_h__Script_RealtimeMeshProTests_1047592724{
	TEXT("/Script/RealtimeMeshProTests"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteManualClusters_h__Script_RealtimeMeshProTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteManualClusters_h__Script_RealtimeMeshProTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
