// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenameReplayObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRenameReplayObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URenameReplayObject();
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URenameReplayObject_NoRegister();
REPLAYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ReplaySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URenameReplayObject ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URenameReplayObject;
UClass* URenameReplayObject::GetPrivateStaticClass()
{
	using TClass = URenameReplayObject;
	if (!Z_Registration_Info_UClass_URenameReplayObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RenameReplayObject"),
			Z_Registration_Info_UClass_URenameReplayObject.InnerSingleton,
			StaticRegisterNativesURenameReplayObject,
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
	return Z_Registration_Info_UClass_URenameReplayObject.InnerSingleton;
}
UClass* Z_Construct_UClass_URenameReplayObject_NoRegister()
{
	return URenameReplayObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URenameReplayObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RenameReplayObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenameReplayObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRenameComplete_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/RenameReplayObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URenameReplayObject constinit property declarations **********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenameComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URenameReplayObject constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenameReplayObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URenameReplayObject_Statics

// ********** Begin Class URenameReplayObject Property Definitions *********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URenameReplayObject_Statics::NewProp_OnRenameComplete = { "OnRenameComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URenameReplayObject, OnRenameComplete), Z_Construct_UDelegateFunction_ReplaySystem_OnRenameReplayComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRenameComplete_MetaData), NewProp_OnRenameComplete_MetaData) }; // 2968939633
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenameReplayObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenameReplayObject_Statics::NewProp_OnRenameComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenameReplayObject_Statics::PropPointers) < 2048);
// ********** End Class URenameReplayObject Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_URenameReplayObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ReplaySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenameReplayObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URenameReplayObject_Statics::ClassParams = {
	&URenameReplayObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URenameReplayObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URenameReplayObject_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URenameReplayObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URenameReplayObject_Statics::Class_MetaDataParams)
};
void URenameReplayObject::StaticRegisterNativesURenameReplayObject()
{
}
UClass* Z_Construct_UClass_URenameReplayObject()
{
	if (!Z_Registration_Info_UClass_URenameReplayObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenameReplayObject.OuterSingleton, Z_Construct_UClass_URenameReplayObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URenameReplayObject.OuterSingleton;
}
URenameReplayObject::URenameReplayObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URenameReplayObject);
URenameReplayObject::~URenameReplayObject() {}
// ********** End Class URenameReplayObject ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h__Script_ReplaySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenameReplayObject, URenameReplayObject::StaticClass, TEXT("URenameReplayObject"), &Z_Registration_Info_UClass_URenameReplayObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenameReplayObject), 2686985267U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h__Script_ReplaySystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h__Script_ReplaySystem_4151050770{
	TEXT("/Script/ReplaySystem"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h__Script_ReplaySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h__Script_ReplaySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
