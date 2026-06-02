// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/SteamCoreGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode();
STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASteamCoreGameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASteamCoreGameMode;
UClass* ASteamCoreGameMode::GetPrivateStaticClass()
{
	using TClass = ASteamCoreGameMode;
	if (!Z_Registration_Info_UClass_ASteamCoreGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreGameMode"),
			Z_Registration_Info_UClass_ASteamCoreGameMode.InnerSingleton,
			StaticRegisterNativesASteamCoreGameMode,
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
	return Z_Registration_Info_UClass_ASteamCoreGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister()
{
	return ASteamCoreGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASteamCoreGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamCore/SteamCoreGameMode.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASteamCoreGameMode constinit property declarations ***********************
// ********** End Class ASteamCoreGameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamCoreGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASteamCoreGameMode_Statics
UObject* (*const Z_Construct_UClass_ASteamCoreGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamCoreGameMode_Statics::ClassParams = {
	&ASteamCoreGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams)
};
void ASteamCoreGameMode::StaticRegisterNativesASteamCoreGameMode()
{
}
UClass* Z_Construct_UClass_ASteamCoreGameMode()
{
	if (!Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton, Z_Construct_UClass_ASteamCoreGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton;
}
ASteamCoreGameMode::ASteamCoreGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASteamCoreGameMode);
ASteamCoreGameMode::~ASteamCoreGameMode() {}
// ********** End Class ASteamCoreGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamCoreGameMode, ASteamCoreGameMode::StaticClass, TEXT("ASteamCoreGameMode"), &Z_Registration_Info_UClass_ASteamCoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamCoreGameMode), 282105649U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h__Script_SteamCore_4094665867{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
