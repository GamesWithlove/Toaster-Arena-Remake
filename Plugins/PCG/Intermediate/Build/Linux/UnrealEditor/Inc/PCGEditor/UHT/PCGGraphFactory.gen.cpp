// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGEditor/Private/PCGGraphFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGGraphFactory() {}
// Cross Module References
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGGraphFactory();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGGraphFactory_NoRegister();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGGraphInstanceFactory();
	PCGEDITOR_API UClass* Z_Construct_UClass_UPCGGraphInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PCGEditor();
// End Cross Module References
	void UPCGGraphFactory::StaticRegisterNativesUPCGGraphFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphFactory);
	UClass* Z_Construct_UClass_UPCGGraphFactory_NoRegister()
	{
		return UPCGGraphFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PCGGraphFactory.h" },
		{ "ModuleRelativePath", "Private/PCGGraphFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphFactory_Statics::ClassParams = {
		&UPCGGraphFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraphFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraphFactory()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphFactory.OuterSingleton, Z_Construct_UClass_UPCGGraphFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphFactory.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGGraphFactory>()
	{
		return UPCGGraphFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphFactory);
	UPCGGraphFactory::~UPCGGraphFactory() {}
	void UPCGGraphInstanceFactory::StaticRegisterNativesUPCGGraphInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGGraphInstanceFactory);
	UClass* Z_Construct_UClass_UPCGGraphInstanceFactory_NoRegister()
	{
		return UPCGGraphInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPCGGraphInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PCGGraphFactory.h" },
		{ "ModuleRelativePath", "Private/PCGGraphFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGGraphInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::ClassParams = {
		&UPCGGraphInstanceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGGraphInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UPCGGraphInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGGraphInstanceFactory.OuterSingleton, Z_Construct_UClass_UPCGGraphInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGGraphInstanceFactory.OuterSingleton;
	}
	template<> PCGEDITOR_API UClass* StaticClass<UPCGGraphInstanceFactory>()
	{
		return UPCGGraphInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGGraphInstanceFactory);
	UPCGGraphInstanceFactory::~UPCGGraphInstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGGraphFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGGraphFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGGraphFactory, UPCGGraphFactory::StaticClass, TEXT("UPCGGraphFactory"), &Z_Registration_Info_UClass_UPCGGraphFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphFactory), 2704634382U) },
		{ Z_Construct_UClass_UPCGGraphInstanceFactory, UPCGGraphInstanceFactory::StaticClass, TEXT("UPCGGraphInstanceFactory"), &Z_Registration_Info_UClass_UPCGGraphInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGGraphInstanceFactory), 385597828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGGraphFactory_h_2897798205(TEXT("/Script/PCGEditor"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGGraphFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCGEditor_Private_PCGGraphFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
