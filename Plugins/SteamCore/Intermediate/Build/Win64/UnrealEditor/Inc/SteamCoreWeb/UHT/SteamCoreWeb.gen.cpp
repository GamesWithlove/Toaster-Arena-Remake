// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamCoreWeb/SteamCoreWeb.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreWeb() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	void USteamCoreWeb::StaticRegisterNativesUSteamCoreWeb()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWeb);
	UClass* Z_Construct_UClass_USteamCoreWeb_NoRegister()
	{
		return USteamCoreWeb::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWeb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWeb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWeb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWeb>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWeb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWeb()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton, Z_Construct_UClass_USteamCoreWeb_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWeb.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWeb>()
	{
		return USteamCoreWeb::StaticClass();
	}
	USteamCoreWeb::USteamCoreWeb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWeb);
	USteamCoreWeb::~USteamCoreWeb() {}
	void USteamCoreWebSubsystem::StaticRegisterNativesUSteamCoreWebSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebSubsystem);
	UClass* Z_Construct_UClass_USteamCoreWebSubsystem_NoRegister()
	{
		return USteamCoreWebSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWeb.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWeb.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebSubsystem>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebSubsystem()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreWebSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebSubsystem.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebSubsystem>()
	{
		return USteamCoreWebSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebSubsystem);
	USteamCoreWebSubsystem::~USteamCoreWebSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWeb, USteamCoreWeb::StaticClass, TEXT("USteamCoreWeb"), &Z_Registration_Info_UClass_USteamCoreWeb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWeb), 1721422004U) },
		{ Z_Construct_UClass_USteamCoreWebSubsystem, USteamCoreWebSubsystem::StaticClass, TEXT("USteamCoreWebSubsystem"), &Z_Registration_Info_UClass_USteamCoreWebSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebSubsystem), 3965822109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h_3560200705(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWeb_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
