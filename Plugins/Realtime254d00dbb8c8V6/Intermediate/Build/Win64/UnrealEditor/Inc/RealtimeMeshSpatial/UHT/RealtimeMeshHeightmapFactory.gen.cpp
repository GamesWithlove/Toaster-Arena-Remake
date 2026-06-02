// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Heightmap/RealtimeMeshHeightmapFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshHeightmapFactory() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshFactory();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshHeightmapFactory();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshHeightmapFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshHeightmapFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory;
UClass* URealtimeMeshHeightmapFactory::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshHeightmapFactory;
	if (!Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshHeightmapFactory"),
			Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.InnerSingleton,
			StaticRegisterNativesURealtimeMeshHeightmapFactory,
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
	return Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshHeightmapFactory_NoRegister()
{
	return URealtimeMeshHeightmapFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Heightmap/RealtimeMeshHeightmapFactory.h" },
		{ "ModuleRelativePath", "Public/Heightmap/RealtimeMeshHeightmapFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshHeightmapFactory constinit property declarations ************
// ********** End Class URealtimeMeshHeightmapFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshHeightmapFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URealtimeMeshFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::ClassParams = {
	&URealtimeMeshHeightmapFactory::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::Class_MetaDataParams)
};
void URealtimeMeshHeightmapFactory::StaticRegisterNativesURealtimeMeshHeightmapFactory()
{
}
UClass* Z_Construct_UClass_URealtimeMeshHeightmapFactory()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.OuterSingleton, Z_Construct_UClass_URealtimeMeshHeightmapFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory.OuterSingleton;
}
URealtimeMeshHeightmapFactory::URealtimeMeshHeightmapFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshHeightmapFactory);
URealtimeMeshHeightmapFactory::~URealtimeMeshHeightmapFactory() {}
// ********** End Class URealtimeMeshHeightmapFactory **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_Heightmap_RealtimeMeshHeightmapFactory_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshHeightmapFactory, URealtimeMeshHeightmapFactory::StaticClass, TEXT("URealtimeMeshHeightmapFactory"), &Z_Registration_Info_UClass_URealtimeMeshHeightmapFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshHeightmapFactory), 3859244525U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_Heightmap_RealtimeMeshHeightmapFactory_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_Heightmap_RealtimeMeshHeightmapFactory_h__Script_RealtimeMeshSpatial_2407586529{
	TEXT("/Script/RealtimeMeshSpatial"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_Heightmap_RealtimeMeshHeightmapFactory_h__Script_RealtimeMeshSpatial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_Heightmap_RealtimeMeshHeightmapFactory_h__Script_RealtimeMeshSpatial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
