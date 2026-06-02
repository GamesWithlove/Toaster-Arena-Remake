// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/RealtimeMeshBasicShapeTools.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshBasicShapeTools() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshBasicShapeTools();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshBasicShapeTools_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshBasicShapeTools *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools;
UClass* URealtimeMeshBasicShapeTools::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshBasicShapeTools;
	if (!Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshBasicShapeTools"),
			Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.InnerSingleton,
			StaticRegisterNativesURealtimeMeshBasicShapeTools,
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
	return Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshBasicShapeTools_NoRegister()
{
	return URealtimeMeshBasicShapeTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Mesh/RealtimeMeshBasicShapeTools.h" },
		{ "ModuleRelativePath", "Public/Mesh/RealtimeMeshBasicShapeTools.h" },
		{ "ScriptName", "RealtimeMeshBasicShapeTools" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshBasicShapeTools constinit property declarations *************
// ********** End Class URealtimeMeshBasicShapeTools constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshBasicShapeTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::ClassParams = {
	&URealtimeMeshBasicShapeTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::Class_MetaDataParams)
};
void URealtimeMeshBasicShapeTools::StaticRegisterNativesURealtimeMeshBasicShapeTools()
{
}
UClass* Z_Construct_UClass_URealtimeMeshBasicShapeTools()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.OuterSingleton, Z_Construct_UClass_URealtimeMeshBasicShapeTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools.OuterSingleton;
}
URealtimeMeshBasicShapeTools::URealtimeMeshBasicShapeTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshBasicShapeTools);
URealtimeMeshBasicShapeTools::~URealtimeMeshBasicShapeTools() {}
// ********** End Class URealtimeMeshBasicShapeTools ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBasicShapeTools_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshBasicShapeTools, URealtimeMeshBasicShapeTools::StaticClass, TEXT("URealtimeMeshBasicShapeTools"), &Z_Registration_Info_UClass_URealtimeMeshBasicShapeTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshBasicShapeTools), 666474759U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBasicShapeTools_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBasicShapeTools_h__Script_RealtimeMeshComponent_1347281278{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBasicShapeTools_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_Mesh_RealtimeMeshBasicShapeTools_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
