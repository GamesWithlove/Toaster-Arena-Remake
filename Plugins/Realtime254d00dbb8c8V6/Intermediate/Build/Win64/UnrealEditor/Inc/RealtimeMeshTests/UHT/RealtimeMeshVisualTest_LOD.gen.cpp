// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTests/RealtimeMeshVisualTest_LOD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshVisualTest_LOD() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_LOD();
REALTIMEMESHTESTS_API UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshTests();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshVisualTest_LOD **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD;
UClass* ARealtimeMeshVisualTest_LOD::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshVisualTest_LOD;
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshVisualTest_LOD"),
			Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.InnerSingleton,
			StaticRegisterNativesARealtimeMeshVisualTest_LOD,
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
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_NoRegister()
{
	return ARealtimeMeshVisualTest_LOD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Visual test actor that creates a mesh with multiple LOD levels.\n * Each LOD has visually distinct geometry (different colors) to validate LOD switching.\n */" },
#endif
		{ "IncludePath", "FunctionalTests/RealtimeMeshVisualTest_LOD.h" },
		{ "ModuleRelativePath", "Public/FunctionalTests/RealtimeMeshVisualTest_LOD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual test actor that creates a mesh with multiple LOD levels.\nEach LOD has visually distinct geometry (different colors) to validate LOD switching." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshVisualTest_LOD constinit property declarations **************
// ********** End Class ARealtimeMeshVisualTest_LOD constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshVisualTest_LOD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshTests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::ClassParams = {
	&ARealtimeMeshVisualTest_LOD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::Class_MetaDataParams)
};
void ARealtimeMeshVisualTest_LOD::StaticRegisterNativesARealtimeMeshVisualTest_LOD()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshVisualTest_LOD()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.OuterSingleton, Z_Construct_UClass_ARealtimeMeshVisualTest_LOD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshVisualTest_LOD);
ARealtimeMeshVisualTest_LOD::~ARealtimeMeshVisualTest_LOD() {}
// ********** End Class ARealtimeMeshVisualTest_LOD ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_LOD_h__Script_RealtimeMeshTests_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshVisualTest_LOD, ARealtimeMeshVisualTest_LOD::StaticClass, TEXT("ARealtimeMeshVisualTest_LOD"), &Z_Registration_Info_UClass_ARealtimeMeshVisualTest_LOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshVisualTest_LOD), 2705474774U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_LOD_h__Script_RealtimeMeshTests_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_LOD_h__Script_RealtimeMeshTests_3995403825{
	TEXT("/Script/RealtimeMeshTests"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_LOD_h__Script_RealtimeMeshTests_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshTests_Public_FunctionalTests_RealtimeMeshVisualTest_LOD_h__Script_RealtimeMeshTests_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
