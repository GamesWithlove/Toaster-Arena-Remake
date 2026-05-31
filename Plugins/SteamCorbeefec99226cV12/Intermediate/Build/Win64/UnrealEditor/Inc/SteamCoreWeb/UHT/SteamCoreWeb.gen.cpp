// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreWeb() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWeb ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWeb;
UClass* USteamCoreWeb::GetPrivateStaticClass()
{
	using TClass = USteamCoreWeb;
	if (!Z_Registration_Info_UClass_USteamCoreWeb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWeb"),
			Z_Registration_Info_UClass_USteamCoreWeb.InnerSingleton,
			StaticRegisterNativesUSteamCoreWeb,
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
	return Z_Registration_Info_UClass_USteamCoreWeb.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister()
{
	return USteamCoreWeb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWeb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWeb constinit property declarations ****************************
// ********** End Class USteamCoreWeb constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWeb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWeb_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWeb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWeb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWeb_Statics::ClassParams = {
	&USteamCoreWeb::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams)
};
void USteamCoreWeb::StaticRegisterNativesUSteamCoreWeb()
{
}
UClass* Z_Construct_UClass_USteamCoreWeb()
{
	if (!Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton, Z_Construct_UClass_USteamCoreWeb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton;
}
USteamCoreWeb::USteamCoreWeb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWeb);
USteamCoreWeb::~USteamCoreWeb() {}
// ********** End Class USteamCoreWeb **************************************************************

// ********** Begin Class USteamCoreWebSubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebSubsystem;
UClass* USteamCoreWebSubsystem::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebSubsystem;
	if (!Z_Registration_Info_UClass_USteamCoreWebSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebSubsystem"),
			Z_Registration_Info_UClass_USteamCoreWebSubsystem.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebSubsystem,
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
	return Z_Registration_Info_UClass_USteamCoreWebSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister()
{
	return USteamCoreWebSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebSubsystem constinit property declarations *******************
// ********** End Class USteamCoreWebSubsystem constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebSubsystem_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebSubsystem_Statics::ClassParams = {
	&USteamCoreWebSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams)
};
void USteamCoreWebSubsystem::StaticRegisterNativesUSteamCoreWebSubsystem()
{
}
UClass* Z_Construct_UClass_USteamCoreWebSubsystem()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreWebSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebSubsystem);
USteamCoreWebSubsystem::~USteamCoreWebSubsystem() {}
// ********** End Class USteamCoreWebSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWeb, USteamCoreWeb::StaticClass, TEXT("USteamCoreWeb"), &Z_Registration_Info_UClass_USteamCoreWeb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWeb), 1402381779U) },
		{ Z_Construct_UClass_USteamCoreWebSubsystem, USteamCoreWebSubsystem::StaticClass, TEXT("USteamCoreWebSubsystem"), &Z_Registration_Info_UClass_USteamCoreWebSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebSubsystem), 3262159308U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h__Script_SteamCoreWeb_3240093331{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
