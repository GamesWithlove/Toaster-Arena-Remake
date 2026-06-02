// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSpatialStreamingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSpatialStreamingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem();
REALTIMEMESHSPATIAL_API UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshSpatial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshSpatialStreamingSubsystem ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem;
UClass* URealtimeMeshSpatialStreamingSubsystem::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSpatialStreamingSubsystem;
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSpatialStreamingSubsystem"),
			Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSpatialStreamingSubsystem,
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
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_NoRegister()
{
	return URealtimeMeshSpatialStreamingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RealtimeMeshSpatialStreamingSubsystem.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSpatialStreamingSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSpatialStreamingSubsystem constinit property declarations ***
// ********** End Class URealtimeMeshSpatialStreamingSubsystem constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSpatialStreamingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshSpatial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::ClassParams = {
	&URealtimeMeshSpatialStreamingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::Class_MetaDataParams)
};
void URealtimeMeshSpatialStreamingSubsystem::StaticRegisterNativesURealtimeMeshSpatialStreamingSubsystem()
{
}
UClass* Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.OuterSingleton, Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem.OuterSingleton;
}
URealtimeMeshSpatialStreamingSubsystem::URealtimeMeshSpatialStreamingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSpatialStreamingSubsystem);
URealtimeMeshSpatialStreamingSubsystem::~URealtimeMeshSpatialStreamingSubsystem() {}
// ********** End Class URealtimeMeshSpatialStreamingSubsystem *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSubsystem_h__Script_RealtimeMeshSpatial_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshSpatialStreamingSubsystem, URealtimeMeshSpatialStreamingSubsystem::StaticClass, TEXT("URealtimeMeshSpatialStreamingSubsystem"), &Z_Registration_Info_UClass_URealtimeMeshSpatialStreamingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSpatialStreamingSubsystem), 478557284U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSubsystem_h__Script_RealtimeMeshSpatial_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSubsystem_h__Script_RealtimeMeshSpatial_3561960739{
	TEXT("/Script/RealtimeMeshSpatial"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSubsystem_h__Script_RealtimeMeshSpatial_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshSpatial_Public_RealtimeMeshSpatialStreamingSubsystem_h__Script_RealtimeMeshSpatial_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
