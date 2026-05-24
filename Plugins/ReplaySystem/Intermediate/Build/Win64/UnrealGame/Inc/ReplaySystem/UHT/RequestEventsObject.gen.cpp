// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RequestEventsObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRequestEventsObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URequestEventsObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URequestEventsObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URequestEventsObject *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URequestEventsObject;
UClass* URequestEventsObject::GetPrivateStaticClass()
{
	using TClass = URequestEventsObject;
	if (!Z_Registration_Info_UClass_URequestEventsObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RequestEventsObject"),
			Z_Registration_Info_UClass_URequestEventsObject.InnerSingleton,
			StaticRegisterNativesURequestEventsObject,
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
	return Z_Registration_Info_UClass_URequestEventsObject.InnerSingleton;
}
UClass* Z_Construct_UClass_URequestEventsObject_NoRegister()
{
	return URequestEventsObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URequestEventsObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "RequestEventsObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RequestEventsObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestEventsComplete_MetaData[] = {
		{ "Category", "Replay|Events" },
		{ "ModuleRelativePath", "Public/RequestEventsObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URequestEventsObject constinit property declarations *********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestEventsComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URequestEventsObject constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestEventsObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URequestEventsObject_Statics

// ********** Begin Class URequestEventsObject Property Definitions ********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequestEventsObject_Statics::NewProp_OnRequestEventsComplete = { "OnRequestEventsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URequestEventsObject, OnRequestEventsComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnRequestEventsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRequestEventsComplete_MetaData), NewProp_OnRequestEventsComplete_MetaData) }; // 2458229898
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequestEventsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestEventsObject_Statics::NewProp_OnRequestEventsComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URequestEventsObject_Statics::PropPointers) < 2048);
// ********** End Class URequestEventsObject Property Definitions **********************************
UObject* (*const Z_Construct_UClass_URequestEventsObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URequestEventsObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URequestEventsObject_Statics::ClassParams = {
	&URequestEventsObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URequestEventsObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URequestEventsObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URequestEventsObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URequestEventsObject_Statics::Class_MetaDataParams)
};
void URequestEventsObject::StaticRegisterNativesURequestEventsObject()
{
}
UClass* Z_Construct_UClass_URequestEventsObject()
{
	if (!Z_Registration_Info_UClass_URequestEventsObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URequestEventsObject.OuterSingleton, Z_Construct_UClass_URequestEventsObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URequestEventsObject.OuterSingleton;
}
URequestEventsObject::URequestEventsObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URequestEventsObject);
URequestEventsObject::~URequestEventsObject() {}
// ********** End Class URequestEventsObject *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URequestEventsObject, URequestEventsObject::StaticClass, TEXT("URequestEventsObject"), &Z_Registration_Info_UClass_URequestEventsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URequestEventsObject), 282185845U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h__Script_ReplaySystem_3490374026{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_RequestEventsObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
