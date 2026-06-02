// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_BasicShapes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_BasicShapes() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_BasicShapes **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes;
UClass* ARealtimeMeshVisualTest_BasicShapes::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_BasicShapes;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_BasicShapes"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_BasicShapes,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_NoRegister()
{
	return ARealtimeMeshVisualTest_BasicShapes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that creates basic geometric shapes (box, sphere, cylinder)\n * arranged in a row for visual validation.\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_BasicShapes.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_BasicShapes.h" },
		{ "ToolTip", "Visual test actor that creates basic geometric shapes (box, sphere, cylinder)\narranged in a row for visual validation." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_BasicShapes constinit property declarations ******
// ********** End Class ARealtimeMeshVisualTest_BasicShapes constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_BasicShapes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_BasicShapes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_BasicShapes::StaticRegisterNativesARealtimeMeshVisualTest_BasicShapes()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_BasicShapes);
ARealtimeMeshVisualTest_BasicShapes::~ARealtimeMeshVisualTest_BasicShapes() {}
// ********** End Class ARealtimeMeshVisualTest_BasicShapes ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_BasicShapes_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_BasicShapes, ARealtimeMeshVisualTest_BasicShapes::StaticClass, TEXT("ARealtimeMeshVisualTest_BasicShapes"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_BasicShapes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_BasicShapes), 671759021U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_BasicShapes_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_BasicShapes_h__Script_RealtimeMeshTests_3254477536{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_BasicShapes_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_BasicShapes_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
