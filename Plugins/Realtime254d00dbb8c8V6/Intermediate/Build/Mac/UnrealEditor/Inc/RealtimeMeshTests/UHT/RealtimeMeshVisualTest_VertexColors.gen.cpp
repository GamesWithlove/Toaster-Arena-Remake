// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_VertexColors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_VertexColors() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_VertexColors *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors;
UClass* ARealtimeMeshVisualTest_VertexColors::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_VertexColors;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_VertexColors"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_VertexColors,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_NoRegister()
{
	return ARealtimeMeshVisualTest_VertexColors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that demonstrates vertex color rendering with various gradient patterns.\n * Creates multiple meshes showcasing different vertex color techniques including:\n * - Rainbow gradient sphere\n * - RGB corner boxes\n * - Smooth radial gradients\n * - Height-based color gradients\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_VertexColors.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_VertexColors.h" },
		{ "ToolTip", "Visual test actor that demonstrates vertex color rendering with various gradient patterns.\nCreates multiple meshes showcasing different vertex color techniques including:\n- Rainbow gradient sphere\n- RGB corner boxes\n- Smooth radial gradients\n- Height-based color gradients" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_VertexColors constinit property declarations *****
// ********** End Class ARealtimeMeshVisualTest_VertexColors constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_VertexColors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_VertexColors::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_VertexColors::StaticRegisterNativesARealtimeMeshVisualTest_VertexColors()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_VertexColors);
ARealtimeMeshVisualTest_VertexColors::~ARealtimeMeshVisualTest_VertexColors() {}
// ********** End Class ARealtimeMeshVisualTest_VertexColors ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_VertexColors_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_VertexColors, ARealtimeMeshVisualTest_VertexColors::StaticClass, TEXT("ARealtimeMeshVisualTest_VertexColors"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_VertexColors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_VertexColors), 3949987779U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_VertexColors_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_VertexColors_h__Script_RealtimeMeshTests_3393381529{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_VertexColors_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_VertexColors_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
