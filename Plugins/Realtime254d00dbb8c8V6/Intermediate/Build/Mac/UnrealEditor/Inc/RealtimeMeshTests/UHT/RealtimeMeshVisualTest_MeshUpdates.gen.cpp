// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_MeshUpdates() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_MeshUpdates **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates;
UClass* ARealtimeMeshVisualTest_MeshUpdates::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_MeshUpdates;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_MeshUpdates"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_MeshUpdates,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_NoRegister()
{
	return ARealtimeMeshVisualTest_MeshUpdates::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that demonstrates various mesh update operations.\n * Cycles through different update scenarios to validate mesh modification capabilities:\n * 1. Full mesh replacement - Cycles between different geometric shapes\n * 2. Partial vertex updates - Updates only vertex positions and colors\n * 3. Section visibility toggling - Shows/hides sections dynamically\n * 4. Material slot changes - Swaps material assignments on sections\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h" },
		{ "ToolTip", "Visual test actor that demonstrates various mesh update operations.\nCycles through different update scenarios to validate mesh modification capabilities:\n1. Full mesh replacement - Cycles between different geometric shapes\n2. Partial vertex updates - Updates only vertex positions and colors\n3. Section visibility toggling - Shows/hides sections dynamically\n4. Material slot changes - Swaps material assignments on sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScenarioDuration_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Time in seconds for each update scenario */" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h" },
		{ "ToolTip", "Time in seconds for each update scenario" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Animation speed multiplier */" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h" },
		{ "ToolTip", "Animation speed multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether animation is enabled */" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_MeshUpdates.h" },
		{ "ToolTip", "Whether animation is enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_MeshUpdates constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScenarioDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
	static void NewProp_bEnableAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshVisualTest_MeshUpdates constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_MeshUpdates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics

// ********** Begin Class ARealtimeMeshVisualTest_MeshUpdates Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_ScenarioDuration = { "ScenarioDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshVisualTest_MeshUpdates, ScenarioDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScenarioDuration_MetaData), NewProp_ScenarioDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshVisualTest_MeshUpdates, AnimationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSpeed_MetaData), NewProp_AnimationSpeed_MetaData) };
void Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_bEnableAnimation_SetBit(void* Obj)
{
	((ARealtimeMeshVisualTest_MeshUpdates*)Obj)->bEnableAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_bEnableAnimation = { "bEnableAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshVisualTest_MeshUpdates), &Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_bEnableAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAnimation_MetaData), NewProp_bEnableAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_ScenarioDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_AnimationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::NewProp_bEnableAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshVisualTest_MeshUpdates Property Definitions *******************
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_MeshUpdates::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_MeshUpdates::StaticRegisterNativesARealtimeMeshVisualTest_MeshUpdates()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_MeshUpdates);
ARealtimeMeshVisualTest_MeshUpdates::~ARealtimeMeshVisualTest_MeshUpdates() {}
// ********** End Class ARealtimeMeshVisualTest_MeshUpdates ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MeshUpdates_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_MeshUpdates, ARealtimeMeshVisualTest_MeshUpdates::StaticClass, TEXT("ARealtimeMeshVisualTest_MeshUpdates"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MeshUpdates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_MeshUpdates), 3777018146U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MeshUpdates_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MeshUpdates_h__Script_RealtimeMeshTests_419658279{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MeshUpdates_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MeshUpdates_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
