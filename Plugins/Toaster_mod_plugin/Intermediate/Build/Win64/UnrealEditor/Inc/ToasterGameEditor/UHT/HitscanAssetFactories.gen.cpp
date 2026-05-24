// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitscanAssetFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHitscanAssetFactories() {}

// ********** Begin Cross Module References ********************************************************
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UHitscanImpactDefinitionFactory();
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UHitscanImpactDefinitionFactory_NoRegister();
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UHitscanTracerDefinitionFactory();
TOASTERGAMEEDITOR_API UClass* Z_Construct_UClass_UHitscanTracerDefinitionFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ToasterGameEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitscanTracerDefinitionFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory;
UClass* UHitscanTracerDefinitionFactory::GetPrivateStaticClass()
{
	using TClass = UHitscanTracerDefinitionFactory;
	if (!Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HitscanTracerDefinitionFactory"),
			Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.InnerSingleton,
			StaticRegisterNativesUHitscanTracerDefinitionFactory,
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
	return Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitscanTracerDefinitionFactory_NoRegister()
{
	return UHitscanTracerDefinitionFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitscanAssetFactories.h" },
		{ "ModuleRelativePath", "Private/HitscanAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHitscanTracerDefinitionFactory constinit property declarations **********
// ********** End Class UHitscanTracerDefinitionFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanTracerDefinitionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics
UObject* (*const Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGameEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::ClassParams = {
	&UHitscanTracerDefinitionFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::Class_MetaDataParams)
};
void UHitscanTracerDefinitionFactory::StaticRegisterNativesUHitscanTracerDefinitionFactory()
{
}
UClass* Z_Construct_UClass_UHitscanTracerDefinitionFactory()
{
	if (!Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.OuterSingleton, Z_Construct_UClass_UHitscanTracerDefinitionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHitscanTracerDefinitionFactory);
UHitscanTracerDefinitionFactory::~UHitscanTracerDefinitionFactory() {}
// ********** End Class UHitscanTracerDefinitionFactory ********************************************

// ********** Begin Class UHitscanImpactDefinitionFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory;
UClass* UHitscanImpactDefinitionFactory::GetPrivateStaticClass()
{
	using TClass = UHitscanImpactDefinitionFactory;
	if (!Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HitscanImpactDefinitionFactory"),
			Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.InnerSingleton,
			StaticRegisterNativesUHitscanImpactDefinitionFactory,
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
	return Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitscanImpactDefinitionFactory_NoRegister()
{
	return UHitscanImpactDefinitionFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitscanAssetFactories.h" },
		{ "ModuleRelativePath", "Private/HitscanAssetFactories.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHitscanImpactDefinitionFactory constinit property declarations **********
// ********** End Class UHitscanImpactDefinitionFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitscanImpactDefinitionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics
UObject* (*const Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterGameEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::ClassParams = {
	&UHitscanImpactDefinitionFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::Class_MetaDataParams)
};
void UHitscanImpactDefinitionFactory::StaticRegisterNativesUHitscanImpactDefinitionFactory()
{
}
UClass* Z_Construct_UClass_UHitscanImpactDefinitionFactory()
{
	if (!Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.OuterSingleton, Z_Construct_UClass_UHitscanImpactDefinitionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHitscanImpactDefinitionFactory);
UHitscanImpactDefinitionFactory::~UHitscanImpactDefinitionFactory() {}
// ********** End Class UHitscanImpactDefinitionFactory ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_HitscanAssetFactories_h__Script_ToasterGameEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitscanTracerDefinitionFactory, UHitscanTracerDefinitionFactory::StaticClass, TEXT("UHitscanTracerDefinitionFactory"), &Z_Registration_Info_UClass_UHitscanTracerDefinitionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanTracerDefinitionFactory), 1571312663U) },
		{ Z_Construct_UClass_UHitscanImpactDefinitionFactory, UHitscanImpactDefinitionFactory::StaticClass, TEXT("UHitscanImpactDefinitionFactory"), &Z_Registration_Info_UClass_UHitscanImpactDefinitionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitscanImpactDefinitionFactory), 1108223692U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_HitscanAssetFactories_h__Script_ToasterGameEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_HitscanAssetFactories_h__Script_ToasterGameEditor_2376496275{
	TEXT("/Script/ToasterGameEditor"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_HitscanAssetFactories_h__Script_ToasterGameEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Toaster_mod_plugin_Source_ToasterGameEditor_Private_HitscanAssetFactories_h__Script_ToasterGameEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
