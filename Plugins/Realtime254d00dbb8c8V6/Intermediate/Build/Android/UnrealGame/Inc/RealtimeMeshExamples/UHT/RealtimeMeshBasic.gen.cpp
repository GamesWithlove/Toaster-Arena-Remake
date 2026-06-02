// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshBasic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshBasic() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshBasic();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshBasic_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshBasic *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshBasic;
UClass* ARealtimeMeshBasic::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshBasic;
	if (!Z_Registration_Info_UClass_ARealtimeMeshBasic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshBasic"),
			Z_Registration_Info_UClass_ARealtimeMeshBasic.InnerSingleton,
			StaticRegisterNativesARealtimeMeshBasic,
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
	return Z_Registration_Info_UClass_ARealtimeMeshBasic.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshBasic_NoRegister()
{
	return ARealtimeMeshBasic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshBasic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RealtimeMeshBasic.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshBasic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshBasic constinit property declarations ***********************
// ********** End Class ARealtimeMeshBasic constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshBasic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshBasic_Statics
UObject* (*const Z_Construct_UClass_ARealtimeMeshBasic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshBasic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshBasic_Statics::ClassParams = {
	&ARealtimeMeshBasic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshBasic_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshBasic_Statics::Class_MetaDataParams)
};
void ARealtimeMeshBasic::StaticRegisterNativesARealtimeMeshBasic()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshBasic()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshBasic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshBasic.OuterSingleton, Z_Construct_UClass_ARealtimeMeshBasic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshBasic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshBasic);
ARealtimeMeshBasic::~ARealtimeMeshBasic() {}
// ********** End Class ARealtimeMeshBasic *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshBasic_h__Script_RealtimeMeshExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshBasic, ARealtimeMeshBasic::StaticClass, TEXT("ARealtimeMeshBasic"), &Z_Registration_Info_UClass_ARealtimeMeshBasic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshBasic), 2291700185U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshBasic_h__Script_RealtimeMeshExamples_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshBasic_h__Script_RealtimeMeshExamples_2701882652{
	TEXT("/Script/RealtimeMeshExamples"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshBasic_h__Script_RealtimeMeshExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshExamples_Public_RealtimeMeshBasic_h__Script_RealtimeMeshExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
