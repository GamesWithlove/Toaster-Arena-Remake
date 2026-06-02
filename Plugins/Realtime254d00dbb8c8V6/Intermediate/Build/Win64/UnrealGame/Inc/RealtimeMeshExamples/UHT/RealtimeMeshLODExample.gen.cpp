// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshLODExample.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshLODExample() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshLODExample();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshLODExample_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshLODExample **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshLODExample;
UClass* ARealtimeMeshLODExample::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshLODExample;
	if (!Z_Registration_Info_UClass_ARealtimeMeshLODExample.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshLODExample"),
			Z_Registration_Info_UClass_ARealtimeMeshLODExample.InnerSingleton,
			StaticRegisterNativesARealtimeMeshLODExample,
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
	return Z_Registration_Info_UClass_ARealtimeMeshLODExample.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshLODExample_NoRegister()
{
	return ARealtimeMeshLODExample::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshLODExample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeMeshLODExample.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshLODExample.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshLODExample constinit property declarations ******************
// ********** End Class ARealtimeMeshLODExample constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshLODExample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshLODExample_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshLODExample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshLODExample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshLODExample_Statics::ClassParams = {
	&ARealtimeMeshLODExample::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshLODExample_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshLODExample_Statics::Class_MetaDataParams)
};
void ARealtimeMeshLODExample::StaticRegisterNativesARealtimeMeshLODExample()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshLODExample()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshLODExample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshLODExample.OuterSingleton, Z_Construct_UClass_ARealtimeMeshLODExample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshLODExample.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshLODExample);
ARealtimeMeshLODExample::~ARealtimeMeshLODExample() {}
// ********** End Class ARealtimeMeshLODExample ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshLODExample_h__Script_RealtimeMeshExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshLODExample, ARealtimeMeshLODExample::StaticClass, TEXT("ARealtimeMeshLODExample"), &Z_Registration_Info_UClass_ARealtimeMeshLODExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshLODExample), 2954420799U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshLODExample_h__Script_RealtimeMeshExamples_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshLODExample_h__Script_RealtimeMeshExamples_1192705800{
	TEXT("/Script/RealtimeMeshExamples"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshLODExample_h__Script_RealtimeMeshExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshLODExample_h__Script_RealtimeMeshExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
