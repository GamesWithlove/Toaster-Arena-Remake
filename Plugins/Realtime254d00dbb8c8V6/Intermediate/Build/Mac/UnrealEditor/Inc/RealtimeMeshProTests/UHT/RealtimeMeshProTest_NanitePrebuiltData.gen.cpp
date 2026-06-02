// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshProTest_NanitePrebuiltData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshProTest_NanitePrebuiltData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshProTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshProTest_NanitePrebuiltData **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData;
UClass* ARealtimeMeshProTest_NanitePrebuiltData::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshProTest_NanitePrebuiltData;
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshProTest_NanitePrebuiltData"),
			Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.InnerSingleton,
			StaticRegisterNativesARealtimeMeshProTest_NanitePrebuiltData,
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
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_NoRegister()
{
	return ARealtimeMeshProTest_NanitePrebuiltData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test actor that validates Nanite rendering by copying prebuilt Nanite resources\n * from a StaticMesh asset directly to a RealtimeMesh component.\n *\n * This bypasses RMC's Nanite build pipeline entirely, allowing us to isolate\n * whether rendering issues are in the component or the build pipeline.\n *\n * Usage:\n * 1. Assign a StaticMesh with \"Enable Nanite Support\" checked\n * 2. If it renders: Component is fine, problem is in RMC's Nanite builder\n * 3. If it doesn't render: Problem is in component's Nanite scene proxy\n */" },
		{ "IncludePath", "RealtimeMeshProTest_NanitePrebuiltData.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NanitePrebuiltData.h" },
		{ "ToolTip", "Test actor that validates Nanite rendering by copying prebuilt Nanite resources\nfrom a StaticMesh asset directly to a RealtimeMesh component.\n\nThis bypasses RMC's Nanite build pipeline entirely, allowing us to isolate\nwhether rendering issues are in the component or the build pipeline.\n\nUsage:\n1. Assign a StaticMesh with \"Enable Nanite Support\" checked\n2. If it renders: Component is fine, problem is in RMC's Nanite builder\n3. If it doesn't render: Problem is in component's Nanite scene proxy" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStaticMesh_MetaData[] = {
		{ "Category", "Nanite Test" },
		{ "Comment", "/** Source StaticMesh with Nanite data to copy. Must have \"Enable Nanite Support\" checked. */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NanitePrebuiltData.h" },
		{ "ToolTip", "Source StaticMesh with Nanite data to copy. Must have \"Enable Nanite Support\" checked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVerboseLogging_MetaData[] = {
		{ "Category", "Nanite Test|Debug" },
		{ "Comment", "/** Enable verbose logging for debugging */" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NanitePrebuiltData.h" },
		{ "ToolTip", "Enable verbose logging for debugging" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshProTest_NanitePrebuiltData constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStaticMesh;
	static void NewProp_bEnableVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVerboseLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshProTest_NanitePrebuiltData constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshProTest_NanitePrebuiltData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics

// ********** Begin Class ARealtimeMeshProTest_NanitePrebuiltData Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NanitePrebuiltData, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStaticMesh_MetaData), NewProp_SourceStaticMesh_MetaData) };
void Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_bEnableVerboseLogging_SetBit(void* Obj)
{
	((ARealtimeMeshProTest_NanitePrebuiltData*)Obj)->bEnableVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_bEnableVerboseLogging = { "bEnableVerboseLogging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshProTest_NanitePrebuiltData), &Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_bEnableVerboseLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVerboseLogging_MetaData), NewProp_bEnableVerboseLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_SourceStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::NewProp_bEnableVerboseLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshProTest_NanitePrebuiltData Property Definitions ***************
UObject* (*const Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshProTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::ClassParams = {
	&ARealtimeMeshProTest_NanitePrebuiltData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::Class_MetaDataParams)
};
void ARealtimeMeshProTest_NanitePrebuiltData::StaticRegisterNativesARealtimeMeshProTest_NanitePrebuiltData()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.OuterSingleton, Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshProTest_NanitePrebuiltData);
ARealtimeMeshProTest_NanitePrebuiltData::~ARealtimeMeshProTest_NanitePrebuiltData() {}
// ********** End Class ARealtimeMeshProTest_NanitePrebuiltData ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NanitePrebuiltData_h__Script_RealtimeMeshProTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshProTest_NanitePrebuiltData, ARealtimeMeshProTest_NanitePrebuiltData::StaticClass, TEXT("ARealtimeMeshProTest_NanitePrebuiltData"), &Z_Registration_Info_UClass_ARealtimeMeshProTest_NanitePrebuiltData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshProTest_NanitePrebuiltData), 3786449696U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NanitePrebuiltData_h__Script_RealtimeMeshProTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NanitePrebuiltData_h__Script_RealtimeMeshProTests_2508630767{
	TEXT("/Script/RealtimeMeshProTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NanitePrebuiltData_h__Script_RealtimeMeshProTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NanitePrebuiltData_h__Script_RealtimeMeshProTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
