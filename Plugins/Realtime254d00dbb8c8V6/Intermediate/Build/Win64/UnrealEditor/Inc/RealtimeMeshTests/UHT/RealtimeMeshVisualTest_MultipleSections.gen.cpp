// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_MultipleSections.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_MultipleSections() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_MultipleSections *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections;
UClass* ARealtimeMeshVisualTest_MultipleSections::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_MultipleSections;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_MultipleSections"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_MultipleSections,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_NoRegister()
{
	return ARealtimeMeshVisualTest_MultipleSections::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Visual test actor that demonstrates multiple sections within section groups using polygroups.\n *\n * This test creates two distinct section groups:\n * - Group 1: Contains 3 sections using polygroups 0, 1, 2 (three boxes in one streamset)\n * - Group 2: Contains 2 sections using polygroups 0, 1 (two boxes in one streamset)\n *\n * Each section uses a different material slot to visually distinguish them.\n */" },
#endif
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_MultipleSections.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_MultipleSections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual test actor that demonstrates multiple sections within section groups using polygroups.\n\nThis test creates two distinct section groups:\n- Group 1: Contains 3 sections using polygroups 0, 1, 2 (three boxes in one streamset)\n- Group 2: Contains 2 sections using polygroups 0, 1 (two boxes in one streamset)\n\nEach section uses a different material slot to visually distinguish them." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_MultipleSections constinit property declarations *
// ********** End Class ARealtimeMeshVisualTest_MultipleSections constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_MultipleSections>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_MultipleSections::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_MultipleSections::StaticRegisterNativesARealtimeMeshVisualTest_MultipleSections()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_MultipleSections);
ARealtimeMeshVisualTest_MultipleSections::~ARealtimeMeshVisualTest_MultipleSections() {}
// ********** End Class ARealtimeMeshVisualTest_MultipleSections ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MultipleSections_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_MultipleSections, ARealtimeMeshVisualTest_MultipleSections::StaticClass, TEXT("ARealtimeMeshVisualTest_MultipleSections"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_MultipleSections, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_MultipleSections), 929948585U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MultipleSections_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MultipleSections_h__Script_RealtimeMeshTests_3718371822{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MultipleSections_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_MultipleSections_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
