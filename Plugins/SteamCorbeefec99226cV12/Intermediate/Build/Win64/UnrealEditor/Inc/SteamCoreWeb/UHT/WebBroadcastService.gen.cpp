// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BroadcastService/WebBroadcastService.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebBroadcastService() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebBroadcastService Function PostGameDataFrame **************************
struct Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics
{
	struct WebBroadcastService_eventPostGameDataFrame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppID;
		FString SteamID;
		FString BroadcastId;
		FString FrameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|Apps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppID           The App ID to get the betas of." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PostGameDataFrame constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcastId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PostGameDataFrame constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PostGameDataFrame Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, SteamID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_BroadcastId = { "BroadcastId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, BroadcastId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebBroadcastService_eventPostGameDataFrame_Parms, FrameData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_BroadcastId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::NewProp_FrameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers) < 2048);
// ********** End Function PostGameDataFrame Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebBroadcastService, nullptr, "PostGameDataFrame", 	Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::WebBroadcastService_eventPostGameDataFrame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::WebBroadcastService_eventPostGameDataFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebBroadcastService::execPostGameDataFrame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BroadcastId);
	P_GET_PROPERTY(FStrProperty,Z_Param_FrameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostGameDataFrame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_SteamID,Z_Param_BroadcastId,Z_Param_FrameData);
	P_NATIVE_END;
}
// ********** End Class UWebBroadcastService Function PostGameDataFrame ****************************

// ********** Begin Class UWebBroadcastService *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebBroadcastService;
UClass* UWebBroadcastService::GetPrivateStaticClass()
{
	using TClass = UWebBroadcastService;
	if (!Z_Registration_Info_UClass_UWebBroadcastService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebBroadcastService"),
			Z_Registration_Info_UClass_UWebBroadcastService.InnerSingleton,
			StaticRegisterNativesUWebBroadcastService,
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
	return Z_Registration_Info_UClass_UWebBroadcastService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebBroadcastService_NoRegister()
{
	return UWebBroadcastService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebBroadcastService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BroadcastService/WebBroadcastService.h" },
		{ "ModuleRelativePath", "Public/BroadcastService/WebBroadcastService.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebBroadcastService constinit property declarations *********************
// ********** End Class UWebBroadcastService constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PostGameDataFrame"), .Pointer = &UWebBroadcastService::execPostGameDataFrame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBroadcastService_PostGameDataFrame, "PostGameDataFrame" }, // 877434269
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBroadcastService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebBroadcastService_Statics
UObject* (*const Z_Construct_UClass_UWebBroadcastService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBroadcastService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams = {
	&UWebBroadcastService::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebBroadcastService_Statics::Class_MetaDataParams)
};
void UWebBroadcastService::StaticRegisterNativesUWebBroadcastService()
{
	UClass* Class = UWebBroadcastService::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebBroadcastService_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebBroadcastService()
{
	if (!Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton, Z_Construct_UClass_UWebBroadcastService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebBroadcastService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebBroadcastService);
UWebBroadcastService::~UWebBroadcastService() {}
// ********** End Class UWebBroadcastService *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebBroadcastService, UWebBroadcastService::StaticClass, TEXT("UWebBroadcastService"), &Z_Registration_Info_UClass_UWebBroadcastService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBroadcastService), 1373353124U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h__Script_SteamCoreWeb_81131024{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_BroadcastService_WebBroadcastService_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
