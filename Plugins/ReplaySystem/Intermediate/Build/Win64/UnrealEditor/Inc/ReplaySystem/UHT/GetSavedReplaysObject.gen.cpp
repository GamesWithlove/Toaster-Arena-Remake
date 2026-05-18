// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetSavedReplaysObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGetSavedReplaysObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGetSavedReplaysObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UGetSavedReplaysObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGetSavedReplaysObject ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGetSavedReplaysObject;
UClass* UGetSavedReplaysObject::GetPrivateStaticClass()
{
	using TClass = UGetSavedReplaysObject;
	if (!Z_Registration_Info_UClass_UGetSavedReplaysObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GetSavedReplaysObject"),
			Z_Registration_Info_UClass_UGetSavedReplaysObject.InnerSingleton,
			StaticRegisterNativesUGetSavedReplaysObject,
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
	return Z_Registration_Info_UClass_UGetSavedReplaysObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UGetSavedReplaysObject_NoRegister()
{
	return UGetSavedReplaysObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGetSavedReplaysObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GetSavedReplaysObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GetSavedReplaysObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetReplaysComplete_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/GetSavedReplaysObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGetSavedReplaysObject constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetReplaysComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGetSavedReplaysObject constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetSavedReplaysObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGetSavedReplaysObject_Statics

// ********** Begin Class UGetSavedReplaysObject Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetSavedReplaysObject_Statics::NewProp_OnGetReplaysComplete = { "OnGetReplaysComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetSavedReplaysObject, OnGetReplaysComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnGetReplaysComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetReplaysComplete_MetaData), NewProp_OnGetReplaysComplete_MetaData) }; // 2979183819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetSavedReplaysObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetSavedReplaysObject_Statics::NewProp_OnGetReplaysComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetSavedReplaysObject_Statics::PropPointers) < 2048);
// ********** End Class UGetSavedReplaysObject Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UGetSavedReplaysObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetSavedReplaysObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetSavedReplaysObject_Statics::ClassParams = {
	&UGetSavedReplaysObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGetSavedReplaysObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGetSavedReplaysObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetSavedReplaysObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetSavedReplaysObject_Statics::Class_MetaDataParams)
};
void UGetSavedReplaysObject::StaticRegisterNativesUGetSavedReplaysObject()
{
}
UClass* Z_Construct_UClass_UGetSavedReplaysObject()
{
	if (!Z_Registration_Info_UClass_UGetSavedReplaysObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetSavedReplaysObject.OuterSingleton, Z_Construct_UClass_UGetSavedReplaysObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGetSavedReplaysObject.OuterSingleton;
}
UGetSavedReplaysObject::UGetSavedReplaysObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGetSavedReplaysObject);
UGetSavedReplaysObject::~UGetSavedReplaysObject() {}
// ********** End Class UGetSavedReplaysObject *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_GetSavedReplaysObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGetSavedReplaysObject, UGetSavedReplaysObject::StaticClass, TEXT("UGetSavedReplaysObject"), &Z_Registration_Info_UClass_UGetSavedReplaysObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetSavedReplaysObject), 552685470U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_GetSavedReplaysObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_GetSavedReplaysObject_h__Script_ReplaySystem_3111643551{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_GetSavedReplaysObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_GetSavedReplaysObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
