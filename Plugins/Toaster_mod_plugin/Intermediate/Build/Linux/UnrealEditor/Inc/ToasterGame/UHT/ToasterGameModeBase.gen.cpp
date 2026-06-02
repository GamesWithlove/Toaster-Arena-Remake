// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterGame/Public/ToasterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameModeBase();
	TOASTERGAME_API UClass* Z_Construct_UClass_AToasterGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToasterGame();
// End Cross Module References
	void AToasterGameModeBase::StaticRegisterNativesAToasterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToasterGameModeBase);
	UClass* Z_Construct_UClass_AToasterGameModeBase_NoRegister()
	{
		return AToasterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AToasterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToasterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToasterGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToasterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToasterGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ToasterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToasterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToasterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToasterGameModeBase_Statics::ClassParams = {
		&AToasterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AToasterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToasterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToasterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AToasterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToasterGameModeBase.OuterSingleton, Z_Construct_UClass_AToasterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToasterGameModeBase.OuterSingleton;
	}
	template<> TOASTERGAME_API UClass* StaticClass<AToasterGameModeBase>()
	{
		return AToasterGameModeBase::StaticClass();
	}
	AToasterGameModeBase::AToasterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToasterGameModeBase);
	AToasterGameModeBase::~AToasterGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToasterGameModeBase, AToasterGameModeBase::StaticClass, TEXT("AToasterGameModeBase"), &Z_Registration_Info_UClass_AToasterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToasterGameModeBase), 2024625292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_1899853033(TEXT("/Script/ToasterGame"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGame_Public_ToasterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
