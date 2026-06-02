// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSubsystem();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshComponent();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshSubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshSubsystem;
UClass* URealtimeMeshSubsystem::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshSubsystem;
	if (!Z_Registration_Info_UClass_URealtimeMeshSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshSubsystem"),
			Z_Registration_Info_UClass_URealtimeMeshSubsystem.InnerSingleton,
			StaticRegisterNativesURealtimeMeshSubsystem,
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
	return Z_Registration_Info_UClass_URealtimeMeshSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshSubsystem_NoRegister()
{
	return URealtimeMeshSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URealtimeMeshEditorSubsystem manages recomputation of \"generated\" mesh actors, eg\n * to provide procedural mesh generation in-Editor. Generally such procedural mesh generation\n * is expensive, and if many objects need to be generated, the regeneration needs to be \n * managed at a higher level to ensure that the Editor remains responsive/interactive.\n * \n * ARealtimeMeshActors register themselves with this Subsystem, and\n * allow the Subsystem to tell them when they should regenerate themselves (if necessary).\n * The current behavior is to run all pending generations on a Tick, however in future\n * this regeneration will be more carefully managed via throttling / timeslicing / etc.\n * \n */" },
#endif
		{ "IncludePath", "RealtimeMeshSubsystem.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URealtimeMeshEditorSubsystem manages recomputation of \"generated\" mesh actors, eg\nto provide procedural mesh generation in-Editor. Generally such procedural mesh generation\nis expensive, and if many objects need to be generated, the regeneration needs to be\nmanaged at a higher level to ensure that the Editor remains responsive/interactive.\n\nARealtimeMeshActors register themselves with this Subsystem, and\nallow the Subsystem to tell them when they should regenerate themselves (if necessary).\nThe current behavior is to run all pending generations on a Tick, however in future\nthis regeneration will be more carefully managed via throttling / timeslicing / etc." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshSubsystem constinit property declarations *******************
// ********** End Class URealtimeMeshSubsystem constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshSubsystem_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshSubsystem_Statics::ClassParams = {
	&URealtimeMeshSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshSubsystem_Statics::Class_MetaDataParams)
};
void URealtimeMeshSubsystem::StaticRegisterNativesURealtimeMeshSubsystem()
{
}
UClass* Z_Construct_UClass_URealtimeMeshSubsystem()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshSubsystem.OuterSingleton, Z_Construct_UClass_URealtimeMeshSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshSubsystem);
URealtimeMeshSubsystem::~URealtimeMeshSubsystem() {}
// ********** End Class URealtimeMeshSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSubsystem_h__Script_RealtimeMeshComponent_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshSubsystem, URealtimeMeshSubsystem::StaticClass, TEXT("URealtimeMeshSubsystem"), &Z_Registration_Info_UClass_URealtimeMeshSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshSubsystem), 1118837898U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSubsystem_h__Script_RealtimeMeshComponent_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSubsystem_h__Script_RealtimeMeshComponent_1122578151{
	TEXT("/Script/RealtimeMeshComponent"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSubsystem_h__Script_RealtimeMeshComponent_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshComponent_Public_RealtimeMeshSubsystem_h__Script_RealtimeMeshComponent_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
