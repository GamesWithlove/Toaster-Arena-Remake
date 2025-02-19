// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode();
	STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	void ASteamCoreGameMode::StaticRegisterNativesASteamCoreGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamCoreGameMode);
	UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister()
	{
		return ASteamCoreGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASteamCoreGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamCoreGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamCore/SteamCoreGameMode.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamCoreGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamCoreGameMode>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamCoreGameMode()
	{
		if (!Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton, Z_Construct_UClass_ASteamCoreGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASteamCoreGameMode.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<ASteamCoreGameMode>()
	{
		return ASteamCoreGameMode::StaticClass();
	}
	ASteamCoreGameMode::ASteamCoreGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamCoreGameMode);
	ASteamCoreGameMode::~ASteamCoreGameMode() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASteamCoreGameMode, ASteamCoreGameMode::StaticClass, TEXT("ASteamCoreGameMode"), &Z_Registration_Info_UClass_ASteamCoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamCoreGameMode), 3930874401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_2622621361(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
