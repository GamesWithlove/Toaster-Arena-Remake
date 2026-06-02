// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_ComplexCollision.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_ComplexCollision() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_ComplexCollision *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision;
UClass* ARealtimeMeshVisualTest_ComplexCollision::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_ComplexCollision;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_ComplexCollision"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_ComplexCollision,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_NoRegister()
{
	return ARealtimeMeshVisualTest_ComplexCollision::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that demonstrates complex (per-triangle) collision on a RealtimeMesh.\n * Creates a stepped platform using manual mesh building with complex collision enabled.\n * Drop a static mesh box on it to verify collision works correctly.\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_ComplexCollision.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_ComplexCollision.h" },
		{ "ToolTip", "Visual test actor that demonstrates complex (per-triangle) collision on a RealtimeMesh.\nCreates a stepped platform using manual mesh building with complex collision enabled.\nDrop a static mesh box on it to verify collision works correctly." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_ComplexCollision constinit property declarations *
// ********** End Class ARealtimeMeshVisualTest_ComplexCollision constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_ComplexCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_ComplexCollision::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_ComplexCollision::StaticRegisterNativesARealtimeMeshVisualTest_ComplexCollision()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_ComplexCollision);
ARealtimeMeshVisualTest_ComplexCollision::~ARealtimeMeshVisualTest_ComplexCollision() {}
// ********** End Class ARealtimeMeshVisualTest_ComplexCollision ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_ComplexCollision_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_ComplexCollision, ARealtimeMeshVisualTest_ComplexCollision::StaticClass, TEXT("ARealtimeMeshVisualTest_ComplexCollision"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_ComplexCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_ComplexCollision), 784357811U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_ComplexCollision_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_ComplexCollision_h__Script_RealtimeMeshTests_1427273643{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_ComplexCollision_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_ComplexCollision_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
