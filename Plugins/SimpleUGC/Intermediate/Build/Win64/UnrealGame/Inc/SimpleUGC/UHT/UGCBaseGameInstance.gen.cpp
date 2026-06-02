// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UGCBaseGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUGCBaseGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister();
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleUGC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUGCBaseGameInstance *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UUGCBaseGameInstance;
UClass* UUGCBaseGameInstance::GetPrivateStaticClass()
{
	using TClass = UUGCBaseGameInstance;
	if (!Z_Registration_Info_UClass_UUGCBaseGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UGCBaseGameInstance"),
			Z_Registration_Info_UClass_UUGCBaseGameInstance.InnerSingleton,
			StaticRegisterNativesUUGCBaseGameInstance,
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
	return Z_Registration_Info_UClass_UUGCBaseGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister()
{
	return UUGCBaseGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUGCBaseGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UGCBaseGameInstance.h" },
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCRegistry_MetaData[] = {
		{ "Category", "SimpleUGC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Registry that holds information about UGC and assigned class overrides\n" },
#endif
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Registry that holds information about UGC and assigned class overrides" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UUGCBaseGameInstance constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UGCRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUGCBaseGameInstance constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBaseGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UUGCBaseGameInstance_Statics

// ********** Begin Class UUGCBaseGameInstance Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry = { "UGCRegistry", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUGCBaseGameInstance, UGCRegistry), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCRegistry_MetaData), NewProp_UGCRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers) < 2048);
// ********** End Class UUGCBaseGameInstance Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UUGCBaseGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams = {
	&UUGCBaseGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams)
};
void UUGCBaseGameInstance::StaticRegisterNativesUUGCBaseGameInstance()
{
}
UClass* Z_Construct_UClass_UUGCBaseGameInstance()
{
	if (!Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton, Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUGCBaseGameInstance.OuterSingleton;
}
UUGCBaseGameInstance::UUGCBaseGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUGCBaseGameInstance);
UUGCBaseGameInstance::~UUGCBaseGameInstance() {}
// ********** End Class UUGCBaseGameInstance *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h__Script_SimpleUGC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUGCBaseGameInstance, UUGCBaseGameInstance::StaticClass, TEXT("UUGCBaseGameInstance"), &Z_Registration_Info_UClass_UUGCBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUGCBaseGameInstance), 4011605572U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h__Script_SimpleUGC_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h__Script_SimpleUGC_3503696192{
	TEXT("/Script/SimpleUGC"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h__Script_SimpleUGC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCBaseGameInstance_h__Script_SimpleUGC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
