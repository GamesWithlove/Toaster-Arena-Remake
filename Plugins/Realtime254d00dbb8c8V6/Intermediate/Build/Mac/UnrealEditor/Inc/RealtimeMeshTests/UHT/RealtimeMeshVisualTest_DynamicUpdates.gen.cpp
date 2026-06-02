// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_DynamicUpdates.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_DynamicUpdates() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_DynamicUpdates ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates;
UClass* ARealtimeMeshVisualTest_DynamicUpdates::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_DynamicUpdates;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_DynamicUpdates"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_DynamicUpdates,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_NoRegister()
{
	return ARealtimeMeshVisualTest_DynamicUpdates::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visual test actor that demonstrates dynamic mesh updates.\n * Creates an animated mesh that updates its geometry every frame.\n * Useful for validating that mesh updates are correctly reflected in rendering.\n */" },
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_DynamicUpdates.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_DynamicUpdates.h" },
		{ "ToolTip", "Visual test actor that demonstrates dynamic mesh updates.\nCreates an animated mesh that updates its geometry every frame.\nUseful for validating that mesh updates are correctly reflected in rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Animation speed multiplier */" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_DynamicUpdates.h" },
		{ "ToolTip", "Animation speed multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnimation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether animation is enabled */" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_DynamicUpdates.h" },
		{ "ToolTip", "Whether animation is enabled" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_DynamicUpdates constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
	static void NewProp_bEnableAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshVisualTest_DynamicUpdates constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_DynamicUpdates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics

// ********** Begin Class ARealtimeMeshVisualTest_DynamicUpdates Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshVisualTest_DynamicUpdates, AnimationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSpeed_MetaData), NewProp_AnimationSpeed_MetaData) };
void Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_bEnableAnimation_SetBit(void* Obj)
{
	((ARealtimeMeshVisualTest_DynamicUpdates*)Obj)->bEnableAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_bEnableAnimation = { "bEnableAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshVisualTest_DynamicUpdates), &Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_bEnableAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAnimation_MetaData), NewProp_bEnableAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_AnimationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::NewProp_bEnableAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshVisualTest_DynamicUpdates Property Definitions ****************
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_DynamicUpdates::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_DynamicUpdates::StaticRegisterNativesARealtimeMeshVisualTest_DynamicUpdates()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_DynamicUpdates);
ARealtimeMeshVisualTest_DynamicUpdates::~ARealtimeMeshVisualTest_DynamicUpdates() {}
// ********** End Class ARealtimeMeshVisualTest_DynamicUpdates *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_DynamicUpdates_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_DynamicUpdates, ARealtimeMeshVisualTest_DynamicUpdates::StaticClass, TEXT("ARealtimeMeshVisualTest_DynamicUpdates"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_DynamicUpdates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_DynamicUpdates), 1326007246U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_DynamicUpdates_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_DynamicUpdates_h__Script_RealtimeMeshTests_3161625533{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_DynamicUpdates_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_DynamicUpdates_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
