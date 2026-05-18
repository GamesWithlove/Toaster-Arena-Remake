// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModifyReplayObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeModifyReplayObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UModifyReplayObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UModifyReplayObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UModifyReplayObject ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UModifyReplayObject;
UClass* UModifyReplayObject::GetPrivateStaticClass()
{
	using TClass = UModifyReplayObject;
	if (!Z_Registration_Info_UClass_UModifyReplayObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ModifyReplayObject"),
			Z_Registration_Info_UClass_UModifyReplayObject.InnerSingleton,
			StaticRegisterNativesUModifyReplayObject,
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
	return Z_Registration_Info_UClass_UModifyReplayObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UModifyReplayObject_NoRegister()
{
	return UModifyReplayObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModifyReplayObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModifyReplayObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModifyReplayObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModifyReplayObject constinit property declarations **********************
// ********** End Class UModifyReplayObject constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyReplayObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UModifyReplayObject_Statics
UObject* (*const Z_Construct_UClass_UModifyReplayObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyReplayObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyReplayObject_Statics::ClassParams = {
	&UModifyReplayObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyReplayObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyReplayObject_Statics::Class_MetaDataParams)
};
void UModifyReplayObject::StaticRegisterNativesUModifyReplayObject()
{
}
UClass* Z_Construct_UClass_UModifyReplayObject()
{
	if (!Z_Registration_Info_UClass_UModifyReplayObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyReplayObject.OuterSingleton, Z_Construct_UClass_UModifyReplayObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyReplayObject.OuterSingleton;
}
UModifyReplayObject::UModifyReplayObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModifyReplayObject);
UModifyReplayObject::~UModifyReplayObject() {}
// ********** End Class UModifyReplayObject ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModifyReplayObject, UModifyReplayObject::StaticClass, TEXT("UModifyReplayObject"), &Z_Registration_Info_UClass_UModifyReplayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyReplayObject), 1127891423U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h__Script_ReplaySystem_2761194099{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
