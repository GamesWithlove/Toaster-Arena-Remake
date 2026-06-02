// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealtimeMeshDirect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshDirect() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMeshComponent_NoRegister();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshDirect();
REALTIMEMESHEXAMPLES_API UClass* Z_Construct_UClass_ARealtimeMeshDirect_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARealtimeMeshDirect ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARealtimeMeshDirect;
UClass* ARealtimeMeshDirect::GetPrivateStaticClass()
{
	using TClass = ARealtimeMeshDirect;
	if (!Z_Registration_Info_UClass_ARealtimeMeshDirect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshDirect"),
			Z_Registration_Info_UClass_ARealtimeMeshDirect.InnerSingleton,
			StaticRegisterNativesARealtimeMeshDirect,
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
	return Z_Registration_Info_UClass_ARealtimeMeshDirect.InnerSingleton;
}
UClass* Z_Construct_UClass_ARealtimeMeshDirect_NoRegister()
{
	return ARealtimeMeshDirect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARealtimeMeshDirect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09This example is meant to show how to use the RMC without using the RealtimeMeshActor,\n *\x09""and instead register a RealtimeMeshComponent yourself and work with it.\n */" },
#endif
		{ "IncludePath", "RealtimeMeshDirect.h" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDirect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     This example is meant to show how to use the RMC without using the RealtimeMeshActor,\n*     and instead register a RealtimeMeshComponent yourself and work with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeMeshComponent_MetaData[] = {
		{ "Category", "RealtimeMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RealtimeMeshDirect.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARealtimeMeshDirect constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtimeMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARealtimeMeshDirect constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtimeMeshDirect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARealtimeMeshDirect_Statics

// ********** Begin Class ARealtimeMeshDirect Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtimeMeshDirect_Statics::NewProp_RealtimeMeshComponent = { "RealtimeMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARealtimeMeshDirect, RealtimeMeshComponent), Z_Construct_UClass_URealtimeMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealtimeMeshComponent_MetaData), NewProp_RealtimeMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtimeMeshDirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtimeMeshDirect_Statics::NewProp_RealtimeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshDirect_Statics::PropPointers) < 2048);
// ********** End Class ARealtimeMeshDirect Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ARealtimeMeshDirect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshDirect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtimeMeshDirect_Statics::ClassParams = {
	&ARealtimeMeshDirect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARealtimeMeshDirect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshDirect_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARealtimeMeshDirect_Statics::Class_MetaDataParams), Z_Construct_UClass_ARealtimeMeshDirect_Statics::Class_MetaDataParams)
};
void ARealtimeMeshDirect::StaticRegisterNativesARealtimeMeshDirect()
{
}
UClass* Z_Construct_UClass_ARealtimeMeshDirect()
{
	if (!Z_Registration_Info_UClass_ARealtimeMeshDirect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtimeMeshDirect.OuterSingleton, Z_Construct_UClass_ARealtimeMeshDirect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARealtimeMeshDirect.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARealtimeMeshDirect);
ARealtimeMeshDirect::~ARealtimeMeshDirect() {}
// ********** End Class ARealtimeMeshDirect ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExamples_Public_RealtimeMeshDirect_h__Script_RealtimeMeshExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARealtimeMeshDirect, ARealtimeMeshDirect::StaticClass, TEXT("ARealtimeMeshDirect"), &Z_Registration_Info_UClass_ARealtimeMeshDirect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtimeMeshDirect), 3675817462U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExamples_Public_RealtimeMeshDirect_h__Script_RealtimeMeshExamples_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExamples_Public_RealtimeMeshDirect_h__Script_RealtimeMeshExamples_3039105989{
	TEXT("/Script/RealtimeMeshExamples"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExamples_Public_RealtimeMeshDirect_h__Script_RealtimeMeshExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExamples_Public_RealtimeMeshDirect_h__Script_RealtimeMeshExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
