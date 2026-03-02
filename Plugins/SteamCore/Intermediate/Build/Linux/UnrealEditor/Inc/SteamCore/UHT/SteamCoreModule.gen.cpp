// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreModule.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreModule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCore();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCore_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	void USteamCore::StaticRegisterNativesUSteamCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCore);
	UClass* Z_Construct_UClass_USteamCore_NoRegister()
	{
		return USteamCore::StaticClass();
	}
	struct Z_Construct_UClass_USteamCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCore>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCore()
	{
		if (!Z_Registration_Info_UClass_USteamCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCore.OuterSingleton, Z_Construct_UClass_USteamCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCore.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCore>()
	{
		return USteamCore::StaticClass();
	}
	USteamCore::USteamCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCore);
	USteamCore::~USteamCore() {}
	void USteamCoreSubsystem::StaticRegisterNativesUSteamCoreSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSubsystem);
	UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister()
	{
		return USteamCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSubsystem>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreSubsystem.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSubsystem>()
	{
		return USteamCoreSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSubsystem);
	USteamCoreSubsystem::~USteamCoreSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCore, USteamCore::StaticClass, TEXT("USteamCore"), &Z_Registration_Info_UClass_USteamCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCore), 693164111U) },
		{ Z_Construct_UClass_USteamCoreSubsystem, USteamCoreSubsystem::StaticClass, TEXT("USteamCoreSubsystem"), &Z_Registration_Info_UClass_USteamCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSubsystem), 3545687224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h_2103927677(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
