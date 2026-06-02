// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreAsync.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreAsync() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFailure ************************************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFailure constinit property declarations ****************************
// ********** End Delegate FOnFailure constinit property declarations ******************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFailure__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure)
{
	OnFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnFailure **************************************************************

// ********** Begin Class USteamCoreAsyncAction ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAsyncAction;
UClass* USteamCoreAsyncAction::GetPrivateStaticClass()
{
	using TClass = USteamCoreAsyncAction;
	if (!Z_Registration_Info_UClass_USteamCoreAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAsyncAction"),
			Z_Registration_Info_UClass_USteamCoreAsyncAction.InnerSingleton,
			StaticRegisterNativesUSteamCoreAsyncAction,
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
	return Z_Registration_Info_UClass_USteamCoreAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAsyncAction_NoRegister()
{
	return USteamCoreAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreAsync.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAsyncAction constinit property declarations ********************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_m_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreAsyncAction constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAsyncAction_Statics

// ********** Begin Class USteamCoreAsyncAction Property Definitions *******************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject = { "m_WorldContextObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreAsyncAction, m_WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_WorldContextObject_MetaData), NewProp_m_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAsyncAction_Statics::NewProp_m_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreAsyncAction Property Definitions *********************************
UObject* (*const Z_Construct_UClass_USteamCoreAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams = {
	&USteamCoreAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAsyncAction_Statics::Class_MetaDataParams)
};
void USteamCoreAsyncAction::StaticRegisterNativesUSteamCoreAsyncAction()
{
}
UClass* Z_Construct_UClass_USteamCoreAsyncAction()
{
	if (!Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton, Z_Construct_UClass_USteamCoreAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAsyncAction.OuterSingleton;
}
USteamCoreAsyncAction::USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAsyncAction);
USteamCoreAsyncAction::~USteamCoreAsyncAction() {}
// ********** End Class USteamCoreAsyncAction ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreAsyncAction, USteamCoreAsyncAction::StaticClass, TEXT("USteamCoreAsyncAction"), &Z_Registration_Info_UClass_USteamCoreAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAsyncAction), 2357550093U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h__Script_SteamCore_1619535832{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
