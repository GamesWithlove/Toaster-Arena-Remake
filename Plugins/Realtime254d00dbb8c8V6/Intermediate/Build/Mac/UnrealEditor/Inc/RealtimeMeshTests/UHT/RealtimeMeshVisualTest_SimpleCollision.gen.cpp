// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_SimpleCollision.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_SimpleCollision() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_SimpleCollision **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision;
UClass* ARealtimeMeshVisualTest_SimpleCollision::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_SimpleCollision;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_SimpleCollision"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_SimpleCollision,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_NoRegister()
{
	return ARealtimeMeshVisualTest_SimpleCollision::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that demonstrates simple collision on a RealtimeMesh floor.\n * Creates a large flat box mesh positioned at ground level with simple box collision.\n * When placed in a level, objects should collide with it and land on top.\n * If collision fails, objects will fall through.\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_SimpleCollision.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_SimpleCollision.h" },
		{ "ToolTip", "Visual test actor that demonstrates simple collision on a RealtimeMesh floor.\nCreates a large flat box mesh positioned at ground level with simple box collision.\nWhen placed in a level, objects should collide with it and land on top.\nIf collision fails, objects will fall through." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_SimpleCollision constinit property declarations **
// ********** End Class ARealtimeMeshVisualTest_SimpleCollision constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_SimpleCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_SimpleCollision::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_SimpleCollision::StaticRegisterNativesARealtimeMeshVisualTest_SimpleCollision()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_SimpleCollision);
ARealtimeMeshVisualTest_SimpleCollision::~ARealtimeMeshVisualTest_SimpleCollision() {}
// ********** End Class ARealtimeMeshVisualTest_SimpleCollision ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_SimpleCollision_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_SimpleCollision, ARealtimeMeshVisualTest_SimpleCollision::StaticClass, TEXT("ARealtimeMeshVisualTest_SimpleCollision"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_SimpleCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_SimpleCollision), 1669252160U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_SimpleCollision_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_SimpleCollision_h__Script_RealtimeMeshTests_3143777780{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_SimpleCollision_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_SimpleCollision_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
