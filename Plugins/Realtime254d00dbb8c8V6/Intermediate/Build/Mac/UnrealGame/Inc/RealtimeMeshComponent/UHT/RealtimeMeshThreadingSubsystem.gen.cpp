// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshThreadingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshThreadingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshThreadingSubsystem();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshThreadingSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshThreadingSubsystem ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem;
UClass* URealtimeMeshThreadingSubsystem::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshThreadingSubsystem;
	if (!Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshThreadingSubsystem"),
			Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.InnerSingleton,
			StaticRegisterNativesURealtimeMeshThreadingSubsystem,
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
	return Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshThreadingSubsystem_NoRegister()
{
	return URealtimeMeshThreadingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RealtimeMeshThreadingSubsystem.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshThreadingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshThreadingSubsystem constinit property declarations **********
// ********** End Class URealtimeMeshThreadingSubsystem constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshThreadingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::ClassParams = {
	&URealtimeMeshThreadingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::Class_MetaDataParams)
};
void URealtimeMeshThreadingSubsystem::StaticRegisterNativesURealtimeMeshThreadingSubsystem()
{
}
UClass* Z_Construct_UClass_URealtimeMeshThreadingSubsystem()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.OuterSingleton, Z_Construct_UClass_URealtimeMeshThreadingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem.OuterSingleton;
}
URealtimeMeshThreadingSubsystem::URealtimeMeshThreadingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshThreadingSubsystem);
URealtimeMeshThreadingSubsystem::~URealtimeMeshThreadingSubsystem() {}
// ********** End Class URealtimeMeshThreadingSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshThreadingSubsystem_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshThreadingSubsystem, URealtimeMeshThreadingSubsystem::StaticClass, TEXT("URealtimeMeshThreadingSubsystem"), &Z_Registration_Info_UClass_URealtimeMeshThreadingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshThreadingSubsystem), 2579351751U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshThreadingSubsystem_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshThreadingSubsystem_h__Script_RealtimeMeshComponent_4052722974{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshThreadingSubsystem_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RealtimeMeshComponent_Source_RealtimeMeshComponent_Public_RealtimeMeshThreadingSubsystem_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
