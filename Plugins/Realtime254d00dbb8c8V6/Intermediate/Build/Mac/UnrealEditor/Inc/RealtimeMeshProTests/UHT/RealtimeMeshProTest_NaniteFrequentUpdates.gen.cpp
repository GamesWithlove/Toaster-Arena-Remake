// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshProTest_NaniteFrequentUpdates.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshProTest_NaniteFrequentUpdates() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshProTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshProTest_NaniteFrequentUpdates *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates;
UClass* ARealtimeMeshProTest_NaniteFrequentUpdates::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshProTest_NaniteFrequentUpdates;
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshProTest_NaniteFrequentUpdates"),
			Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.InnerSingleton,
			StaticRegisterNativesARealtimeMeshProTest_NaniteFrequentUpdates,
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
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_NoRegister()
{
	return ARealtimeMeshProTest_NaniteFrequentUpdates::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test actor for demonstrating frequent (frame-by-frame) Nanite mesh updates.\n *\n * This test creates three different scenarios to stress-test Nanite's ability\n * to handle real-time mesh updates at various frequencies:\n *\n * - Test 1: Every Frame - Animated wave surface (50x50 grid)\n * - Test 2: Every 5 Frames - Morphing sphere/cube\n * - Test 3: Every 30 Frames - Growing/shrinking structure\n */" },
		{ "IncludePath", "RealtimeMeshProTest_NaniteFrequentUpdates.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
		{ "ToolTip", "Test actor for demonstrating frequent (frame-by-frame) Nanite mesh updates.\n\nThis test creates three different scenarios to stress-test Nanite's ability\nto handle real-time mesh updates at various frequencies:\n\n- Test 1: Every Frame - Animated wave surface (50x50 grid)\n- Test 2: Every 5 Frames - Morphing sphere/cube\n- Test 3: Every 30 Frames - Growing/shrinking structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Comment", "// Timing and performance tracking\n" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
		{ "ToolTip", "Timing and performance tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveMeshComponent_MetaData[] = {
		{ "Comment", "// Test mesh components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
		{ "ToolTip", "Test mesh components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteFrequentUpdates.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshProTest_NaniteFrequentUpdates constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateCounter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MorphMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrowMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshProTest_NaniteFrequentUpdates constinit property declarations *
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshProTest_NaniteFrequentUpdates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics

// ********** Begin Class ARealtimeMeshProTest_NaniteFrequentUpdates Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteFrequentUpdates, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_UpdateCounter = { "UpdateCounter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteFrequentUpdates, UpdateCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCounter_MetaData), NewProp_UpdateCounter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_WaveMeshComponent = { "WaveMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteFrequentUpdates, WaveMeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveMeshComponent_MetaData), NewProp_WaveMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_MorphMeshComponent = { "MorphMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteFrequentUpdates, MorphMeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphMeshComponent_MetaData), NewProp_MorphMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_GrowMeshComponent = { "GrowMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteFrequentUpdates, GrowMeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowMeshComponent_MetaData), NewProp_GrowMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_ElapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_UpdateCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_WaveMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_MorphMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::NewProp_GrowMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshProTest_NaniteFrequentUpdates Property Definitions ************
UObject* (*const Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshProTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::ClassParams = {
	&ARealtimeMeshProTest_NaniteFrequentUpdates::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::Class_MetaDataParams)
};
void ARealtimeMeshProTest_NaniteFrequentUpdates::StaticRegisterNativesARealtimeMeshProTest_NaniteFrequentUpdates()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.OuterSingleton, Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshProTest_NaniteFrequentUpdates);
ARealtimeMeshProTest_NaniteFrequentUpdates::~ARealtimeMeshProTest_NaniteFrequentUpdates() {}
// ********** End Class ARealtimeMeshProTest_NaniteFrequentUpdates *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteFrequentUpdates_h__Script_RealtimeMeshProTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates, ARealtimeMeshProTest_NaniteFrequentUpdates::StaticClass, TEXT("ARealtimeMeshProTest_NaniteFrequentUpdates"), &Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteFrequentUpdates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshProTest_NaniteFrequentUpdates), 2321289896U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteFrequentUpdates_h__Script_RealtimeMeshProTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteFrequentUpdates_h__Script_RealtimeMeshProTests_3729987062{
	TEXT("/Script/RealtimeMeshProTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteFrequentUpdates_h__Script_RealtimeMeshProTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteFrequentUpdates_h__Script_RealtimeMeshProTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
