// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowsCodePlugin/Public/FixedCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixedCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_AFixedCharacter();
	SHADOWSCODEPLUGIN_API UClass* Z_Construct_UClass_AFixedCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShadowsCodePlugin();
// End Cross Module References
	void AFixedCharacter::StaticRegisterNativesAFixedCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFixedCharacter);
	UClass* Z_Construct_UClass_AFixedCharacter_NoRegister()
	{
		return AFixedCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFixedCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionSocketLocationSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AIPerceptionSocketLocationSocket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFixedCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowsCodePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFixedCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FixedCharacter.h" },
		{ "ModuleRelativePath", "Public/FixedCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/FixedCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket = { "AIPerceptionSocketLocationSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFixedCharacter, AIPerceptionSocketLocationSocket), METADATA_PARAMS(Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFixedCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFixedCharacter_Statics::NewProp_AIPerceptionSocketLocationSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFixedCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFixedCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFixedCharacter_Statics::ClassParams = {
		&AFixedCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFixedCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFixedCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFixedCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFixedCharacter()
	{
		if (!Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton, Z_Construct_UClass_AFixedCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFixedCharacter.OuterSingleton;
	}
	template<> SHADOWSCODEPLUGIN_API UClass* StaticClass<AFixedCharacter>()
	{
		return AFixedCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFixedCharacter);
	AFixedCharacter::~AFixedCharacter() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFixedCharacter, AFixedCharacter::StaticClass, TEXT("AFixedCharacter"), &Z_Registration_Info_UClass_AFixedCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFixedCharacter), 3544879802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h_834165974(TEXT("/Script/ShadowsCodePlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ShadowsCodePlugin_Source_ShadowsCodePlugin_Public_FixedCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
