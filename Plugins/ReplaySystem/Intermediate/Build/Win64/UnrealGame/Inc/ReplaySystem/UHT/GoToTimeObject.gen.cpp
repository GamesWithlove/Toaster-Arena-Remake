// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoToTimeObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGoToTimeObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGoToTimeObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGoToTimeObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGoToTimeObject **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGoToTimeObject;
UClass* UGoToTimeObject::GetPrivateStaticClass()
{
	using TClass = UGoToTimeObject;
	if (!Z_Registration_Info_UClass_UGoToTimeObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GoToTimeObject"),
			Z_Registration_Info_UClass_UGoToTimeObject.InnerSingleton,
			StaticRegisterNativesUGoToTimeObject,
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
	return Z_Registration_Info_UClass_UGoToTimeObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UGoToTimeObject_NoRegister()
{
	return UGoToTimeObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGoToTimeObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GoToTimeObject.h" },
		{ "ModuleRelativePath", "Public/GoToTimeObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGotoTimeComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoToTimeObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WCO_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoToTimeObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGoToTimeObject constinit property declarations **************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGotoTimeComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WCO;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGoToTimeObject constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoToTimeObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGoToTimeObject_Statics

// ********** Begin Class UGoToTimeObject Property Definitions *************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoToTimeObject_Statics::NewProp_OnGotoTimeComplete = { "OnGotoTimeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoToTimeObject, OnGotoTimeComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnGotoTimeComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGotoTimeComplete_MetaData), NewProp_OnGotoTimeComplete_MetaData) }; // 267519335
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoToTimeObject_Statics::NewProp_WCO = { "WCO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoToTimeObject, WCO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WCO_MetaData), NewProp_WCO_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoToTimeObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToTimeObject_Statics::NewProp_OnGotoTimeComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToTimeObject_Statics::NewProp_WCO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToTimeObject_Statics::PropPointers) < 2048);
// ********** End Class UGoToTimeObject Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UGoToTimeObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToTimeObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoToTimeObject_Statics::ClassParams = {
	&UGoToTimeObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGoToTimeObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoToTimeObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToTimeObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoToTimeObject_Statics::Class_MetaDataParams)
};
void UGoToTimeObject::StaticRegisterNativesUGoToTimeObject()
{
}
UClass* Z_Construct_UClass_UGoToTimeObject()
{
	if (!Z_Registration_Info_UClass_UGoToTimeObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoToTimeObject.OuterSingleton, Z_Construct_UClass_UGoToTimeObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoToTimeObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGoToTimeObject);
UGoToTimeObject::~UGoToTimeObject() {}
// ********** End Class UGoToTimeObject ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_GoToTimeObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoToTimeObject, UGoToTimeObject::StaticClass, TEXT("UGoToTimeObject"), &Z_Registration_Info_UClass_UGoToTimeObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoToTimeObject), 2434930766U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_GoToTimeObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_GoToTimeObject_h__Script_ReplaySystem_374826374{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_GoToTimeObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_GoToTimeObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
