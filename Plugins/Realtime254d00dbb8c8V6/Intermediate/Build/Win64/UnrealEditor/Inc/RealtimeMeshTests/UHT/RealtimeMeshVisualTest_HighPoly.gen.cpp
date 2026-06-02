// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_HighPoly.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_HighPoly() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_HighPoly *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly;
UClass* ARealtimeMeshVisualTest_HighPoly::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_HighPoly;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_HighPoly"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_HighPoly,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_NoRegister()
{
	return ARealtimeMeshVisualTest_HighPoly::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Visual test actor that creates a high-poly mesh to validate rendering\n * of complex geometry with many vertices and triangles.\n */" },
#endif
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_HighPoly.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_HighPoly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual test actor that creates a high-poly mesh to validate rendering\nof complex geometry with many vertices and triangles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionLevel_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "6" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Subdivision level (higher = more polygons) */" },
#endif
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_HighPoly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subdivision level (higher = more polygons)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_HighPoly constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_SubdivisionLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshVisualTest_HighPoly constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_HighPoly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics

// ********** Begin Class ARealtimeMeshVisualTest_HighPoly Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::NewProp_SubdivisionLevel = { "SubdivisionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshVisualTest_HighPoly, SubdivisionLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionLevel_MetaData), NewProp_SubdivisionLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::NewProp_SubdivisionLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshVisualTest_HighPoly Property Definitions **********************
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_HighPoly::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_HighPoly::StaticRegisterNativesARealtimeMeshVisualTest_HighPoly()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_HighPoly);
ARealtimeMeshVisualTest_HighPoly::~ARealtimeMeshVisualTest_HighPoly() {}
// ********** End Class ARealtimeMeshVisualTest_HighPoly *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_HighPoly_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_HighPoly, ARealtimeMeshVisualTest_HighPoly::StaticClass, TEXT("ARealtimeMeshVisualTest_HighPoly"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_HighPoly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_HighPoly), 307094309U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_HighPoly_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_HighPoly_h__Script_RealtimeMeshTests_857638081{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_HighPoly_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_HighPoly_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
