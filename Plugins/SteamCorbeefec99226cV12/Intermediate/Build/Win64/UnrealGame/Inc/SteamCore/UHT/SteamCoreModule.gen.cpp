// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/SteamCoreModule.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreModule() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCore();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCore_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCore ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCore;
UClass* USteamCore::GetPrivateStaticClass()
{
	using TClass = USteamCore;
	if (!Z_Registration_Info_UClass_USteamCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCore"),
			Z_Registration_Info_UClass_USteamCore.InnerSingleton,
			StaticRegisterNativesUSteamCore,
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
	return Z_Registration_Info_UClass_USteamCore.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCore_NoRegister()
{
	return USteamCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCore constinit property declarations *******************************
// ********** End Class USteamCore constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCore_Statics
UObject* (*const Z_Construct_UClass_USteamCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCore_Statics::ClassParams = {
	&USteamCore::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams)
};
void USteamCore::StaticRegisterNativesUSteamCore()
{
}
UClass* Z_Construct_UClass_USteamCore()
{
	if (!Z_Registration_Info_UClass_USteamCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCore.OuterSingleton, Z_Construct_UClass_USteamCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCore.OuterSingleton;
}
USteamCore::USteamCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCore);
USteamCore::~USteamCore() {}
// ********** End Class USteamCore *****************************************************************

// ********** Begin Class USteamCoreSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreSubsystem;
UClass* USteamCoreSubsystem::GetPrivateStaticClass()
{
	using TClass = USteamCoreSubsystem;
	if (!Z_Registration_Info_UClass_USteamCoreSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreSubsystem"),
			Z_Registration_Info_UClass_USteamCoreSubsystem.InnerSingleton,
			StaticRegisterNativesUSteamCoreSubsystem,
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
	return Z_Registration_Info_UClass_USteamCoreSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister()
{
	return USteamCoreSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreSubsystem constinit property declarations **********************
// ********** End Class USteamCoreSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreSubsystem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSubsystem_Statics::ClassParams = {
	&USteamCoreSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams)
};
void USteamCoreSubsystem::StaticRegisterNativesUSteamCoreSubsystem()
{
}
UClass* Z_Construct_UClass_USteamCoreSubsystem()
{
	if (!Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreSubsystem);
USteamCoreSubsystem::~USteamCoreSubsystem() {}
// ********** End Class USteamCoreSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCore, USteamCore::StaticClass, TEXT("USteamCore"), &Z_Registration_Info_UClass_USteamCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCore), 1322046154U) },
		{ Z_Construct_UClass_USteamCoreSubsystem, USteamCoreSubsystem::StaticClass, TEXT("USteamCoreSubsystem"), &Z_Registration_Info_UClass_USteamCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSubsystem), 2282879488U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h__Script_SteamCore_2056620945{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
