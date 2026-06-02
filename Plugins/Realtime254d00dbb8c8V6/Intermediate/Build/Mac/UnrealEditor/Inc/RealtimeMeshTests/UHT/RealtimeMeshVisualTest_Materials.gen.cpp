// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_Materials.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_Materials() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_Materials();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_Materials ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials;
UClass* ARealtimeMeshVisualTest_Materials::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_Materials;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_Materials"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_Materials,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_NoRegister()
{
	return ARealtimeMeshVisualTest_Materials::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that creates multiple boxes with different material slots\n * to validate material assignment and rendering.\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_Materials.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_Materials.h" },
		{ "ToolTip", "Visual test actor that creates multiple boxes with different material slots\nto validate material assignment and rendering." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_Materials constinit property declarations ********
// ********** End Class ARealtimeMeshVisualTest_Materials constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_Materials>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_Materials::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_Materials::StaticRegisterNativesARealtimeMeshVisualTest_Materials()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_Materials()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_Materials_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_Materials);
ARealtimeMeshVisualTest_Materials::~ARealtimeMeshVisualTest_Materials() {}
// ********** End Class ARealtimeMeshVisualTest_Materials ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_Materials_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_Materials, ARealtimeMeshVisualTest_Materials::StaticClass, TEXT("ARealtimeMeshVisualTest_Materials"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_Materials, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_Materials), 2803113133U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_Materials_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_Materials_h__Script_RealtimeMeshTests_1432926919{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_Materials_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_Materials_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
