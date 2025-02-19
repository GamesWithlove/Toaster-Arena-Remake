// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGVolumeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGVolumeFactory() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGVolumeFactory();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGVolumeFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxVolume();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGVolumeFactory::StaticRegisterNativesUPCGVolumeFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGVolumeFactory);
	UClass* Z_Construct_UClass_UPCGVolumeFactory_NoRegister()
	{
		return UPCGVolumeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPCGVolumeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGVolumeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryBoxVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGVolumeFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "PCGVolumeFactory.h" },
		{ "ModuleRelativePath", "Private/PCGVolumeFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGVolumeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGVolumeFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGVolumeFactory_Statics::ClassParams = {
		&UPCGVolumeFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPCGVolumeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGVolumeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGVolumeFactory()
	{
		if (!Z_Registration_Info_UClass_UPCGVolumeFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGVolumeFactory.OuterSingleton, Z_Construct_UClass_UPCGVolumeFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGVolumeFactory.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGVolumeFactory>()
	{
		return UPCGVolumeFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGVolumeFactory);
	UPCGVolumeFactory::~UPCGVolumeFactory() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGVolumeFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGVolumeFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGVolumeFactory, UPCGVolumeFactory::StaticClass, TEXT("UPCGVolumeFactory"), &Z_Registration_Info_UClass_UPCGVolumeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGVolumeFactory), 1085919385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGVolumeFactory_h_908907042(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGVolumeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGVolumeFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
