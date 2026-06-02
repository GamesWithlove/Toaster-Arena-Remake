// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/SteamCoreWebAsync.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamCoreWebAsync() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSteamCoreWebFailure ************************************************
struct Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSteamCoreWebFailure constinit property declarations ****************
// ********** End Delegate FOnSteamCoreWebFailure constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCoreWeb, nullptr, "OnSteamCoreWebFailure__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamCoreWebFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebFailure)
{
	OnSteamCoreWebFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSteamCoreWebFailure **************************************************

// ********** Begin Class USteamCoreWebAsyncAction Function HandleCallback *************************
struct Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics
{
	struct SteamCoreWebAsyncAction_eventHandleCallback_Parms
	{
		FString data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncAction_eventHandleCallback_Parms, data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) };
void Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreWebAsyncAction_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncAction_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncAction, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::SteamCoreWebAsyncAction_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::SteamCoreWebAsyncAction_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncAction::execHandleCallback)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncAction Function HandleCallback ***************************

// ********** Begin Class USteamCoreWebAsyncAction *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncAction;
UClass* USteamCoreWebAsyncAction::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncAction;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncAction"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncAction.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncAction,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncAction_NoRegister()
{
	return USteamCoreWebAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreWeb/SteamCoreWebAsync.h" },
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCoreWeb/SteamCoreWebAsync.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncAction constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreWebAsyncAction constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreWebAsyncAction::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncAction_HandleCallback, "HandleCallback" }, // 1693333739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncAction_Statics

// ********** Begin Class USteamCoreWebAsyncAction Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreWebAsyncAction, OnCallback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAsyncCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3636166941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreWebAsyncAction Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::ClassParams = {
	&USteamCoreWebAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncAction::StaticRegisterNativesUSteamCoreWebAsyncAction()
{
	UClass* Class = USteamCoreWebAsyncAction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncAction()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncAction.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncAction);
// ********** End Class USteamCoreWebAsyncAction ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebAsync_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncAction, USteamCoreWebAsyncAction::StaticClass, TEXT("USteamCoreWebAsyncAction"), &Z_Registration_Info_UClass_USteamCoreWebAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncAction), 1931647456U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebAsync_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebAsync_h__Script_SteamCoreWeb_1003407531{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebAsync_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_SteamCoreWeb_SteamCoreWebAsync_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
