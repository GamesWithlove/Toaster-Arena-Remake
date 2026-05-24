// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeleteReplayObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDeleteReplayObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UDeleteReplayObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UDeleteReplayObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDeleteReplayObject ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDeleteReplayObject;
UClass* UDeleteReplayObject::GetPrivateStaticClass()
{
	using TClass = UDeleteReplayObject;
	if (!Z_Registration_Info_UClass_UDeleteReplayObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DeleteReplayObject"),
			Z_Registration_Info_UClass_UDeleteReplayObject.InnerSingleton,
			StaticRegisterNativesUDeleteReplayObject,
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
	return Z_Registration_Info_UClass_UDeleteReplayObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UDeleteReplayObject_NoRegister()
{
	return UDeleteReplayObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDeleteReplayObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeleteReplayObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeleteReplayObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteComplete_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/DeleteReplayObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDeleteReplayObject constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDeleteReplayObject constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteReplayObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDeleteReplayObject_Statics

// ********** Begin Class UDeleteReplayObject Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDeleteReplayObject_Statics::NewProp_OnDeleteComplete = { "OnDeleteComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteReplayObject, OnDeleteComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnDeleteComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeleteComplete_MetaData), NewProp_OnDeleteComplete_MetaData) }; // 2306908096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeleteReplayObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeleteReplayObject_Statics::NewProp_OnDeleteComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteReplayObject_Statics::PropPointers) < 2048);
// ********** End Class UDeleteReplayObject Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UDeleteReplayObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteReplayObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeleteReplayObject_Statics::ClassParams = {
	&UDeleteReplayObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeleteReplayObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteReplayObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteReplayObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeleteReplayObject_Statics::Class_MetaDataParams)
};
void UDeleteReplayObject::StaticRegisterNativesUDeleteReplayObject()
{
}
UClass* Z_Construct_UClass_UDeleteReplayObject()
{
	if (!Z_Registration_Info_UClass_UDeleteReplayObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeleteReplayObject.OuterSingleton, Z_Construct_UClass_UDeleteReplayObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeleteReplayObject.OuterSingleton;
}
UDeleteReplayObject::UDeleteReplayObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDeleteReplayObject);
UDeleteReplayObject::~UDeleteReplayObject() {}
// ********** End Class UDeleteReplayObject ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_DeleteReplayObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeleteReplayObject, UDeleteReplayObject::StaticClass, TEXT("UDeleteReplayObject"), &Z_Registration_Info_UClass_UDeleteReplayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeleteReplayObject), 443084985U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_DeleteReplayObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_DeleteReplayObject_h__Script_ReplaySystem_807583419{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_DeleteReplayObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_DeleteReplayObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
