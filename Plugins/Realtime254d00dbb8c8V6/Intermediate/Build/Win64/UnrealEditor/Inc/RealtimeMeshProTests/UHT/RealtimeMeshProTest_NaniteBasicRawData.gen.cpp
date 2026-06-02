// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshProTest_NaniteBasicRawData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshProTest_NaniteBasicRawData() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData();
REALTIMEMESHPROTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshProTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshProTest_NaniteBasicRawData **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData;
UClass* ARealtimeMeshProTest_NaniteBasicRawData::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshProTest_NaniteBasicRawData;
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshProTest_NaniteBasicRawData"),
			Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.InnerSingleton,
			StaticRegisterNativesARealtimeMeshProTest_NaniteBasicRawData,
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
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_NoRegister()
{
	return ARealtimeMeshProTest_NaniteBasicRawData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Test actor demonstrating basic Nanite mesh creation from raw vertex/triangle data.\n *\n * This test validates the core Nanite pipeline by creating meshes from raw arrays:\n * - Simple Sphere: Low-poly sphere (100 vertices) demonstrating basic Nanite usage\n * - Complex Torus: High-poly torus (5000+ vertices) to demonstrate Nanite benefit\n * - Tessellated Plane: Dense grid (100x100 = 10,000 vertices) with height variation\n *\n * Tests the complete workflow:\n * 1. CreateFromRawMesh() - Converts raw vertex/index arrays to Nanite cluster data\n * 2. BuildMinimalHierarchy() - Creates BVH hierarchy for efficient rendering\n * 3. BuildRealtimeNaniteMesh() - Compiles to GPU-ready Nanite resources\n * 4. SetNaniteResources() - Applies resources to RealtimeMesh\n */" },
#endif
		{ "IncludePath", "RealtimeMeshProTest_NaniteBasicRawData.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test actor demonstrating basic Nanite mesh creation from raw vertex/triangle data.\n\nThis test validates the core Nanite pipeline by creating meshes from raw arrays:\n- Simple Sphere: Low-poly sphere (100 vertices) demonstrating basic Nanite usage\n- Complex Torus: High-poly torus (5000+ vertices) to demonstrate Nanite benefit\n- Tessellated Plane: Dense grid (100x100 = 10,000 vertices) with height variation\n\nTests the complete workflow:\n1. CreateFromRawMesh() - Converts raw vertex/index arrays to Nanite cluster data\n2. BuildMinimalHierarchy() - Creates BVH hierarchy for efficient rendering\n3. BuildRealtimeNaniteMesh() - Compiles to GPU-ready Nanite resources\n4. SetNaniteResources() - Applies resources to RealtimeMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimpleSphere_MetaData[] = {
		{ "Category", "Nanite Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable low-poly sphere test (100 vertices) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable low-poly sphere test (100 vertices)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableComplexTorus_MetaData[] = {
		{ "Category", "Nanite Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable high-poly torus test (5000+ vertices) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable high-poly torus test (5000+ vertices)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTessellatedPlane_MetaData[] = {
		{ "Category", "Nanite Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable tessellated plane test (10,000 vertices) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable tessellated plane test (10,000 vertices)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereSubdivision_MetaData[] = {
		{ "Category", "Nanite Test" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere subdivision level (0-3) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere subdivision level (0-3)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorusSegments_MetaData[] = {
		{ "Category", "Nanite Test" },
		{ "ClampMax", "128" },
		{ "ClampMin", "16" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Torus segment count (higher = more detail) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Torus segment count (higher = more detail)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneGridSize_MetaData[] = {
		{ "Category", "Nanite Test" },
		{ "ClampMax", "200" },
		{ "ClampMin", "10" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plane grid resolution (NxN grid) */" },
#endif
		{ "ModuleRelativePath", "Public/RealtimeMeshProTest_NaniteBasicRawData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plane grid resolution (NxN grid)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshProTest_NaniteBasicRawData constinit property declarations **
	static void NewProp_bEnableSimpleSphere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimpleSphere;
	static void NewProp_bEnableComplexTorus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableComplexTorus;
	static void NewProp_bEnableTessellatedPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTessellatedPlane;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SphereSubdivision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TorusSegments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaneGridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshProTest_NaniteBasicRawData constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshProTest_NaniteBasicRawData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics

// ********** Begin Class ARealtimeMeshProTest_NaniteBasicRawData Property Definitions *************
void Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableSimpleSphere_SetBit(void* Obj)
{
	((ARealtimeMeshProTest_NaniteBasicRawData*)Obj)->bEnableSimpleSphere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableSimpleSphere = { "bEnableSimpleSphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshProTest_NaniteBasicRawData), &Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableSimpleSphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSimpleSphere_MetaData), NewProp_bEnableSimpleSphere_MetaData) };
void Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableComplexTorus_SetBit(void* Obj)
{
	((ARealtimeMeshProTest_NaniteBasicRawData*)Obj)->bEnableComplexTorus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableComplexTorus = { "bEnableComplexTorus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshProTest_NaniteBasicRawData), &Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableComplexTorus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableComplexTorus_MetaData), NewProp_bEnableComplexTorus_MetaData) };
void Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableTessellatedPlane_SetBit(void* Obj)
{
	((ARealtimeMeshProTest_NaniteBasicRawData*)Obj)->bEnableTessellatedPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableTessellatedPlane = { "bEnableTessellatedPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARealtimeMeshProTest_NaniteBasicRawData), &Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableTessellatedPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTessellatedPlane_MetaData), NewProp_bEnableTessellatedPlane_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_SphereSubdivision = { "SphereSubdivision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteBasicRawData, SphereSubdivision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereSubdivision_MetaData), NewProp_SphereSubdivision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_TorusSegments = { "TorusSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteBasicRawData, TorusSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorusSegments_MetaData), NewProp_TorusSegments_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_PlaneGridSize = { "PlaneGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshProTest_NaniteBasicRawData, PlaneGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneGridSize_MetaData), NewProp_PlaneGridSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableSimpleSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableComplexTorus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_bEnableTessellatedPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_SphereSubdivision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_TorusSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::NewProp_PlaneGridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshProTest_NaniteBasicRawData Property Definitions ***************
UObject* (*const Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshProTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::ClassParams = {
	&ARealtimeMeshProTest_NaniteBasicRawData::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::Class_MetaDataParams)
};
void ARealtimeMeshProTest_NaniteBasicRawData::StaticRegisterNativesARealtimeMeshProTest_NaniteBasicRawData()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.OuterSingleton, Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshProTest_NaniteBasicRawData);
ARealtimeMeshProTest_NaniteBasicRawData::~ARealtimeMeshProTest_NaniteBasicRawData() {}
// ********** End Class ARealtimeMeshProTest_NaniteBasicRawData ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteBasicRawData_h__Script_RealtimeMeshProTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshProTest_NaniteBasicRawData, ARealtimeMeshProTest_NaniteBasicRawData::StaticClass, TEXT("ARealtimeMeshProTest_NaniteBasicRawData"), &Z_Registration_Info_UClass_ARealtimeMeshProTest_NaniteBasicRawData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshProTest_NaniteBasicRawData), 885638938U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteBasicRawData_h__Script_RealtimeMeshProTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteBasicRawData_h__Script_RealtimeMeshProTests_524246192{
	TEXT("/Script/RealtimeMeshProTests"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteBasicRawData_h__Script_RealtimeMeshProTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshProTests_Public_RealtimeMeshProTest_NaniteBasicRawData_h__Script_RealtimeMeshProTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
