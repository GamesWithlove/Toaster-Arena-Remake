// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSMMTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMTypes();
SKELETALMESHMERGER_API UClass* Z_Construct_UClass_USMMTypes_NoRegister();
UPackage* Z_Construct_UPackage__Script_SkeletalMeshMerger();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USMMTypes ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USMMTypes;
UClass* USMMTypes::GetPrivateStaticClass()
{
	using TClass = USMMTypes;
	if (!Z_Registration_Info_UClass_USMMTypes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SMMTypes"),
			Z_Registration_Info_UClass_USMMTypes.InnerSingleton,
			StaticRegisterNativesUSMMTypes,
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
	return Z_Registration_Info_UClass_USMMTypes.InnerSingleton;
}
UClass* Z_Construct_UClass_USMMTypes_NoRegister()
{
	return USMMTypes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USMMTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SMMTypes.h" },
		{ "ModuleRelativePath", "Public/SMMTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USMMTypes constinit property declarations ********************************
// ********** End Class USMMTypes constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMMTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USMMTypes_Statics
UObject* (*const Z_Construct_UClass_USMMTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMMTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMMTypes_Statics::ClassParams = {
	&USMMTypes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMMTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_USMMTypes_Statics::Class_MetaDataParams)
};
void USMMTypes::StaticRegisterNativesUSMMTypes()
{
}
UClass* Z_Construct_UClass_USMMTypes()
{
	if (!Z_Registration_Info_UClass_USMMTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMMTypes.OuterSingleton, Z_Construct_UClass_USMMTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMMTypes.OuterSingleton;
}
USMMTypes::USMMTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USMMTypes);
USMMTypes::~USMMTypes() {}
// ********** End Class USMMTypes ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h__Script_SkeletalMeshMerger_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMMTypes, USMMTypes::StaticClass, TEXT("USMMTypes"), &Z_Registration_Info_UClass_USMMTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMMTypes), 3411900484U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h__Script_SkeletalMeshMerger_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h__Script_SkeletalMeshMerger_2539042188{
	TEXT("/Script/SkeletalMeshMerger"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h__Script_SkeletalMeshMerger_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SMMTypes_h__Script_SkeletalMeshMerger_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
