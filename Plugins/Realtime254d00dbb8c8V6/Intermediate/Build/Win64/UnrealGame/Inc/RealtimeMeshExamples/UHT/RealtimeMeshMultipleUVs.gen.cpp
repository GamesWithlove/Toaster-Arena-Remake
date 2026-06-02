// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshMultipleUVs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshMultipleUVs() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshMultipleUVs();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshMultipleUVs_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshMultipleUVs *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs;
UClass* ARealtimeMeshMultipleUVs::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshMultipleUVs;
	if (!Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshMultipleUVs"),
			Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.InnerSingleton,
			StaticRegisterNativesARealtimeMeshMultipleUVs,
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
	return Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshMultipleUVs_NoRegister()
{
	return ARealtimeMeshMultipleUVs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeMeshMultipleUVs.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshMultipleUVs.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshMultipleUVs constinit property declarations *****************
// ********** End Class ARealtimeMeshMultipleUVs constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshMultipleUVs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::ClassParams = {
	&ARealtimeMeshMultipleUVs::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::Class_MetaDataParams)
};
void ARealtimeMeshMultipleUVs::StaticRegisterNativesARealtimeMeshMultipleUVs()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshMultipleUVs()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.OuterSingleton, Z_Construct_UClass_ARealtimeMeshMultipleUVs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshMultipleUVs);
ARealtimeMeshMultipleUVs::~ARealtimeMeshMultipleUVs() {}
// ********** End Class ARealtimeMeshMultipleUVs ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshMultipleUVs_h__Script_RealtimeMeshExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshMultipleUVs, ARealtimeMeshMultipleUVs::StaticClass, TEXT("ARealtimeMeshMultipleUVs"), &Z_Registration_Info_UClass_ARealtimeMeshMultipleUVs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshMultipleUVs), 263288862U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshMultipleUVs_h__Script_RealtimeMeshExamples_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshMultipleUVs_h__Script_RealtimeMeshExamples_608648416{
	TEXT("/Script/RealtimeMeshExamples"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshMultipleUVs_h__Script_RealtimeMeshExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshMultipleUVs_h__Script_RealtimeMeshExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
