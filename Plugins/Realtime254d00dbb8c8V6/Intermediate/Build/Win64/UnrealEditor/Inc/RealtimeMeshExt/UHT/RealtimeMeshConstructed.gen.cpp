// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factory/RealtimeMeshConstructed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRealtimeMeshConstructed() {}

// ********** Begin Cross Module References ********************************************************
REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URealtimeMesh();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshConstructed();
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshConstructed_NoRegister();
UPackage* Z_Construct_UPackage__Script_RealtimeMeshExt();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URealtimeMeshConstructed *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URealtimeMeshConstructed;
UClass* URealtimeMeshConstructed::GetPrivateStaticClass()
{
	using TClass = URealtimeMeshConstructed;
	if (!Z_Registration_Info_UClass_URealtimeMeshConstructed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RealtimeMeshConstructed"),
			Z_Registration_Info_UClass_URealtimeMeshConstructed.InnerSingleton,
			StaticRegisterNativesURealtimeMeshConstructed,
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
	return Z_Registration_Info_UClass_URealtimeMeshConstructed.InnerSingleton;
}
UClass* Z_Construct_UClass_URealtimeMeshConstructed_NoRegister()
{
	return URealtimeMeshConstructed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URealtimeMeshConstructed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Cooking" },
		{ "IncludePath", "Factory/RealtimeMeshConstructed.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Factory/RealtimeMeshConstructed.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URealtimeMeshConstructed constinit property declarations *****************
// ********** End Class URealtimeMeshConstructed constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtimeMeshConstructed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URealtimeMeshConstructed_Statics
UObject* (*const Z_Construct_UClass_URealtimeMeshConstructed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URealtimeMesh,
	(UObject* (*)())Z_Construct_UPackage__Script_RealtimeMeshExt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshConstructed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtimeMeshConstructed_Statics::ClassParams = {
	&URealtimeMeshConstructed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URealtimeMeshConstructed_Statics::Class_MetaDataParams), Z_Construct_UClass_URealtimeMeshConstructed_Statics::Class_MetaDataParams)
};
void URealtimeMeshConstructed::StaticRegisterNativesURealtimeMeshConstructed()
{
}
UClass* Z_Construct_UClass_URealtimeMeshConstructed()
{
	if (!Z_Registration_Info_UClass_URealtimeMeshConstructed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtimeMeshConstructed.OuterSingleton, Z_Construct_UClass_URealtimeMeshConstructed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URealtimeMeshConstructed.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URealtimeMeshConstructed);
URealtimeMeshConstructed::~URealtimeMeshConstructed() {}
// ********** End Class URealtimeMeshConstructed ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshConstructed_h__Script_RealtimeMeshExt_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URealtimeMeshConstructed, URealtimeMeshConstructed::StaticClass, TEXT("URealtimeMeshConstructed"), &Z_Registration_Info_UClass_URealtimeMeshConstructed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtimeMeshConstructed), 848993914U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshConstructed_h__Script_RealtimeMeshExt_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshConstructed_h__Script_RealtimeMeshExt_3867529156{
	TEXT("/Script/RealtimeMeshExt"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshConstructed_h__Script_RealtimeMeshExt_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_Factory_RealtimeMeshConstructed_h__Script_RealtimeMeshExt_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
