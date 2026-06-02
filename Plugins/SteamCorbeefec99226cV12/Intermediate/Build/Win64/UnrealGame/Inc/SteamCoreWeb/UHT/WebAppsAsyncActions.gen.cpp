// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apps/WebAppsAsyncActions.h"
#include "SteamCoreWeb/SteamWebTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebAppsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature();
STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FWebAppsGetAppList();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBetas Function GetAppBetasAsync ***********
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		USteamCoreAppsAsyncActionGetAppBetas* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* Gets all of the beta branches for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\x09\x09\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the betas of.\n\x09*/" },
		{ "DisplayName", "Get App Betas" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "Gets all of the beta branches for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppID           The App ID to get the betas of." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppBetasAsync constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppBetasAsync constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppBetasAsync Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAppBetasAsync Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas, nullptr, "GetAppBetasAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::SteamCoreAppsAsyncActionGetAppBetas_eventGetAppBetasAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppBetas::execGetAppBetasAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetAppBetas**)Z_Param__Result=USteamCoreAppsAsyncActionGetAppBetas::GetAppBetasAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetAppBetas Function GetAppBetasAsync *************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBetas *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas;
UClass* USteamCoreAppsAsyncActionGetAppBetas::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetAppBetas;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetAppBetas"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppBetas,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_NoRegister()
{
	return USteamCoreAppsAsyncActionGetAppBetas::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetAppBetas\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetAppBetas\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBetas constinit property declarations *****
// ********** End Class USteamCoreAppsAsyncActionGetAppBetas constinit property declarations *******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppBetasAsync"), .Pointer = &USteamCoreAppsAsyncActionGetAppBetas::execGetAppBetasAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBetas_GetAppBetasAsync, "GetAppBetasAsync" }, // 3522045960
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetAppBetas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetAppBetas::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetAppBetas::StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppBetas()
{
	UClass* Class = USteamCoreAppsAsyncActionGetAppBetas::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas.OuterSingleton;
}
USteamCoreAppsAsyncActionGetAppBetas::USteamCoreAppsAsyncActionGetAppBetas() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetAppBetas);
USteamCoreAppsAsyncActionGetAppBetas::~USteamCoreAppsAsyncActionGetAppBetas() {}
// ********** End Class USteamCoreAppsAsyncActionGetAppBetas ***************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBuilds Function GetAppBuildsAsync *********
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 Count;
		USteamCoreAppsAsyncActionGetAppBuilds* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09*\xef\xbf\xbdGets an applications build history.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the build history of.\n\x09* @param\x09""Count\x09\x09The number of builds to retrieve, the default is 10.\n\x09*/" },
		{ "CPP_Default_Count", "10" },
		{ "DisplayName", "Get App Builds" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "\xef\xbf\xbdGets an applications build history.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppID           The App ID to get the build history of.\n@param        Count           The number of builds to retrieve, the default is 10." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppBuildsAsync constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppBuildsAsync constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppBuildsAsync Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAppBuildsAsync Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds, nullptr, "GetAppBuildsAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::SteamCoreAppsAsyncActionGetAppBuilds_eventGetAppBuildsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppBuilds::execGetAppBuildsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetAppBuilds**)Z_Param__Result=USteamCoreAppsAsyncActionGetAppBuilds::GetAppBuildsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetAppBuilds Function GetAppBuildsAsync ***********

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBuilds ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds;
UClass* USteamCoreAppsAsyncActionGetAppBuilds::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetAppBuilds;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetAppBuilds"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppBuilds,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_NoRegister()
{
	return USteamCoreAppsAsyncActionGetAppBuilds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetAppBuilds\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetAppBuilds\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetAppBuilds constinit property declarations ****
// ********** End Class USteamCoreAppsAsyncActionGetAppBuilds constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppBuildsAsync"), .Pointer = &USteamCoreAppsAsyncActionGetAppBuilds::execGetAppBuildsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppBuilds_GetAppBuildsAsync, "GetAppBuildsAsync" }, // 2044937660
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetAppBuilds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetAppBuilds::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetAppBuilds::StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppBuilds()
{
	UClass* Class = USteamCoreAppsAsyncActionGetAppBuilds::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds.OuterSingleton;
}
USteamCoreAppsAsyncActionGetAppBuilds::USteamCoreAppsAsyncActionGetAppBuilds() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetAppBuilds);
USteamCoreAppsAsyncActionGetAppBuilds::~USteamCoreAppsAsyncActionGetAppBuilds() {}
// ********** End Class USteamCoreAppsAsyncActionGetAppBuilds **************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppDepotVersions Function GetAppDepotVersionsAsync 
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		USteamCoreAppsAsyncActionGetAppDepotVersions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* Gets all the versions of all the depots for the specified application.\n\x09*\n\x09* NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09The App ID to get the depot versions for.\n\x09*/" },
		{ "DisplayName", "Get App Depot Versions" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "Gets all the versions of all the depots for the specified application.\n\nNOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        AppID           The App ID to get the depot versions for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppDepotVersionsAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppDepotVersionsAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppDepotVersionsAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAppDepotVersionsAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions, nullptr, "GetAppDepotVersionsAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::SteamCoreAppsAsyncActionGetAppDepotVersions_eventGetAppDepotVersionsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppDepotVersions::execGetAppDepotVersionsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetAppDepotVersions**)Z_Param__Result=USteamCoreAppsAsyncActionGetAppDepotVersions::GetAppDepotVersionsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetAppDepotVersions Function GetAppDepotVersionsAsync 

// ********** Begin Class USteamCoreAppsAsyncActionGetAppDepotVersions *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions;
UClass* USteamCoreAppsAsyncActionGetAppDepotVersions::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetAppDepotVersions;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetAppDepotVersions"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppDepotVersions,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_NoRegister()
{
	return USteamCoreAppsAsyncActionGetAppDepotVersions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetAppDepotVersions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetAppDepotVersions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetAppDepotVersions constinit property declarations 
// ********** End Class USteamCoreAppsAsyncActionGetAppDepotVersions constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppDepotVersionsAsync"), .Pointer = &USteamCoreAppsAsyncActionGetAppDepotVersions::execGetAppDepotVersionsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppDepotVersions_GetAppDepotVersionsAsync, "GetAppDepotVersionsAsync" }, // 3867937767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetAppDepotVersions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetAppDepotVersions::StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppDepotVersions()
{
	UClass* Class = USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions.OuterSingleton;
}
USteamCoreAppsAsyncActionGetAppDepotVersions::USteamCoreAppsAsyncActionGetAppDepotVersions() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetAppDepotVersions);
USteamCoreAppsAsyncActionGetAppDepotVersions::~USteamCoreAppsAsyncActionGetAppDepotVersions() {}
// ********** End Class USteamCoreAppsAsyncActionGetAppDepotVersions *******************************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppList Function GetAppListAsync *************
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms
	{
		UObject* WorldContextObject;
		USteamCoreAppsAsyncActionGetAppList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* Gets the complete list of public apps.\n\x09*/" },
		{ "DisplayName", "Get App List" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "Gets the complete list of public apps." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAppListAsync constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAppListAsync constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAppListAsync Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers) < 2048);
// ********** End Function GetAppListAsync Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList, nullptr, "GetAppListAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::SteamCoreAppsAsyncActionGetAppList_eventGetAppListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppList::execGetAppListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetAppList**)Z_Param__Result=USteamCoreAppsAsyncActionGetAppList::GetAppListAsync(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetAppList Function GetAppListAsync ***************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppList Function HandleCallback **************
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics
{
	struct SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms
	{
		TArray<FWebAppsGetAppList> data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWebAppsGetAppList, METADATA_PARAMS(0, nullptr) }; // 532025641
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 532025641
void Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::SteamCoreAppsAsyncActionGetAppList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetAppList::execHandleCallback)
{
	P_GET_TARRAY_REF(FWebAppsGetAppList,Z_Param_Out_data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetAppList Function HandleCallback ****************

// ********** Begin Class USteamCoreAppsAsyncActionGetAppList **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList;
UClass* USteamCoreAppsAsyncActionGetAppList::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetAppList;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetAppList"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppList,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_NoRegister()
{
	return USteamCoreAppsAsyncActionGetAppList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetAppList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetAppList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetAppList constinit property declarations ******
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreAppsAsyncActionGetAppList constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAppListAsync"), .Pointer = &USteamCoreAppsAsyncActionGetAppList::execGetAppListAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreAppsAsyncActionGetAppList::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_GetAppListAsync, "GetAppListAsync" }, // 2503031952
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetAppList_HandleCallback, "HandleCallback" }, // 2980059024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetAppList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics

// ********** Begin Class USteamCoreAppsAsyncActionGetAppList Property Definitions *****************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreAppsAsyncActionGetAppList, OnCallback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebAppListAsyncCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1455069866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreAppsAsyncActionGetAppList Property Definitions *******************
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetAppList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetAppList::StaticRegisterNativesUSteamCoreAppsAsyncActionGetAppList()
{
	UClass* Class = USteamCoreAppsAsyncActionGetAppList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetAppList);
// ********** End Class USteamCoreAppsAsyncActionGetAppList ****************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetCheatingReports Function GetCheatingReportsAsync 
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 TimeBegin;
		int32 TimeEnd;
		bool bIncludeReports;
		bool bIncludeBans;
		int32 ReportidMin;
		USteamCoreAppsAsyncActionGetCheatingReports* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09\x09\x09""AppID of game\n\x09* @param\x09TimeBegin\x09\x09\x09Time range begin\n\x09* @param\x09TimeEnd\x09\x09\x09\x09Time range end\n\x09* @param\x09""bIncludeReports\x09\x09include reports that were not bans\n\x09* @param\x09""bIncludeBans\x09\x09include reports that were bans\n\x09* @param\x09ReportidMin\x09\x09\x09minimum report id\n\x09*/" },
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\nNOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                                     Steamworks Web API publisher authentication key.\n@param        AppID                           AppID of game\n@param        TimeBegin                       Time range begin\n@param        TimeEnd                         Time range end\n@param        bIncludeReports         include reports that were not bans\n@param        bIncludeBans            include reports that were bans\n@param        ReportidMin                     minimum report id" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCheatingReportsAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReportidMin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCheatingReportsAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCheatingReportsAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportidMin = { "ReportidMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReportidMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportidMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetCheatingReportsAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::SteamCoreAppsAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReportidMin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetCheatingReports**)Z_Param__Result=USteamCoreAppsAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_TimeBegin,Z_Param_TimeEnd,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_ReportidMin);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetCheatingReports Function GetCheatingReportsAsync 

// ********** Begin Class USteamCoreAppsAsyncActionGetCheatingReports ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports;
UClass* USteamCoreAppsAsyncActionGetCheatingReports::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetCheatingReports;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetCheatingReports"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetCheatingReports,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_NoRegister()
{
	return USteamCoreAppsAsyncActionGetCheatingReports::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetCheatingReports constinit property declarations 
// ********** End Class USteamCoreAppsAsyncActionGetCheatingReports constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCheatingReportsAsync"), .Pointer = &USteamCoreAppsAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 553018565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetCheatingReports>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetCheatingReports::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreAppsAsyncActionGetCheatingReports()
{
	UClass* Class = USteamCoreAppsAsyncActionGetCheatingReports::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports.OuterSingleton;
}
USteamCoreAppsAsyncActionGetCheatingReports::USteamCoreAppsAsyncActionGetCheatingReports() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetCheatingReports);
USteamCoreAppsAsyncActionGetCheatingReports::~USteamCoreAppsAsyncActionGetCheatingReports() {}
// ********** End Class USteamCoreAppsAsyncActionGetCheatingReports ********************************

// ********** Begin Class USteamCoreAppsAsyncActionGetPlayersBanned Function GetPlayersBannedAsync *
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		USteamCoreAppsAsyncActionGetPlayersBanned* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09""AppID of game\n\x09*/" },
		{ "DisplayName", "Get Players Banned" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key             Steamworks Web API publisher authentication key.\n@param        AppID           AppID of game" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayersBannedAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayersBannedAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayersBannedAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers) < 2048);
// ********** End Function GetPlayersBannedAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned, nullptr, "GetPlayersBannedAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::SteamCoreAppsAsyncActionGetPlayersBanned_eventGetPlayersBannedAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetPlayersBanned::execGetPlayersBannedAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetPlayersBanned**)Z_Param__Result=USteamCoreAppsAsyncActionGetPlayersBanned::GetPlayersBannedAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetPlayersBanned Function GetPlayersBannedAsync ***

// ********** Begin Class USteamCoreAppsAsyncActionGetPlayersBanned ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned;
UClass* USteamCoreAppsAsyncActionGetPlayersBanned::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetPlayersBanned;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetPlayersBanned"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetPlayersBanned,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_NoRegister()
{
	return USteamCoreAppsAsyncActionGetPlayersBanned::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetPlayersBanned\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetPlayersBanned\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetPlayersBanned constinit property declarations 
// ********** End Class USteamCoreAppsAsyncActionGetPlayersBanned constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetPlayersBannedAsync"), .Pointer = &USteamCoreAppsAsyncActionGetPlayersBanned::execGetPlayersBannedAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetPlayersBanned_GetPlayersBannedAsync, "GetPlayersBannedAsync" }, // 3900236308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetPlayersBanned>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetPlayersBanned::StaticRegisterNativesUSteamCoreAppsAsyncActionGetPlayersBanned()
{
	UClass* Class = USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned.OuterSingleton;
}
USteamCoreAppsAsyncActionGetPlayersBanned::USteamCoreAppsAsyncActionGetPlayersBanned() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetPlayersBanned);
USteamCoreAppsAsyncActionGetPlayersBanned::~USteamCoreAppsAsyncActionGetPlayersBanned() {}
// ********** End Class USteamCoreAppsAsyncActionGetPlayersBanned **********************************

// ********** Begin Class USteamCoreAppsAsyncActionGetServerList Function GetServerListAsync *******
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString Filter;
		int32 Limit;
		USteamCoreAppsAsyncActionGetServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""Filter\x09\x09Query filter string\n\x09* @param\x09Limit\x09\x09Limit number of servers in the response\n\x09*/" },
		{ "DisplayName", "Get Server List" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                     Steamworks Web API publisher authentication key.\n@param        Filter          Query filter string\n@param        Limit           Limit number of servers in the response" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServerListAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServerListAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServerListAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Filter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_Limit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers) < 2048);
// ********** End Function GetServerListAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList, nullptr, "GetServerListAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::SteamCoreAppsAsyncActionGetServerList_eventGetServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetServerList::execGetServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filter);
	P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetServerList**)Z_Param__Result=USteamCoreAppsAsyncActionGetServerList::GetServerListAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_Filter,Z_Param_Limit);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetServerList Function GetServerListAsync *********

// ********** Begin Class USteamCoreAppsAsyncActionGetServerList ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList;
UClass* USteamCoreAppsAsyncActionGetServerList::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetServerList;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetServerList"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetServerList,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_NoRegister()
{
	return USteamCoreAppsAsyncActionGetServerList::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetServerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetServerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetServerList constinit property declarations ***
// ********** End Class USteamCoreAppsAsyncActionGetServerList constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetServerListAsync"), .Pointer = &USteamCoreAppsAsyncActionGetServerList::execGetServerListAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServerList_GetServerListAsync, "GetServerListAsync" }, // 2096981049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetServerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetServerList::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetServerList::StaticRegisterNativesUSteamCoreAppsAsyncActionGetServerList()
{
	UClass* Class = USteamCoreAppsAsyncActionGetServerList::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList.OuterSingleton;
}
USteamCoreAppsAsyncActionGetServerList::USteamCoreAppsAsyncActionGetServerList() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetServerList);
USteamCoreAppsAsyncActionGetServerList::~USteamCoreAppsAsyncActionGetServerList() {}
// ********** End Class USteamCoreAppsAsyncActionGetServerList *************************************

// ********** Begin Class USteamCoreAppsAsyncActionGetServersAtAddress Function GetServersAtAddressAsync 
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics
{
	struct SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms
	{
		UObject* WorldContextObject;
		FString Addr;
		USteamCoreAppsAsyncActionGetServersAtAddress* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* @param\x09""Addr\x09IP or IP:queryport to list\n\x09*/" },
		{ "DisplayName", "Get Servers at Address" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "@param        Addr    IP or IP:queryport to list" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetServersAtAddressAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Addr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetServersAtAddressAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetServersAtAddressAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_Addr = { "Addr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, Addr), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_Addr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers) < 2048);
// ********** End Function GetServersAtAddressAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress, nullptr, "GetServersAtAddressAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::SteamCoreAppsAsyncActionGetServersAtAddress_eventGetServersAtAddressAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Addr);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionGetServersAtAddress**)Z_Param__Result=USteamCoreAppsAsyncActionGetServersAtAddress::GetServersAtAddressAsync(Z_Param_WorldContextObject,Z_Param_Addr);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionGetServersAtAddress Function GetServersAtAddressAsync 

// ********** Begin Class USteamCoreAppsAsyncActionGetServersAtAddress *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress;
UClass* USteamCoreAppsAsyncActionGetServersAtAddress::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionGetServersAtAddress;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionGetServersAtAddress"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionGetServersAtAddress,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_NoRegister()
{
	return USteamCoreAppsAsyncActionGetServersAtAddress::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionGetServersAtAddress\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionGetServersAtAddress\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionGetServersAtAddress constinit property declarations 
// ********** End Class USteamCoreAppsAsyncActionGetServersAtAddress constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetServersAtAddressAsync"), .Pointer = &USteamCoreAppsAsyncActionGetServersAtAddress::execGetServersAtAddressAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionGetServersAtAddress_GetServersAtAddressAsync, "GetServersAtAddressAsync" }, // 482139561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionGetServersAtAddress>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionGetServersAtAddress::StaticRegisterNativesUSteamCoreAppsAsyncActionGetServersAtAddress()
{
	UClass* Class = USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress.OuterSingleton;
}
USteamCoreAppsAsyncActionGetServersAtAddress::USteamCoreAppsAsyncActionGetServersAtAddress() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionGetServersAtAddress);
USteamCoreAppsAsyncActionGetServersAtAddress::~USteamCoreAppsAsyncActionGetServersAtAddress() {}
// ********** End Class USteamCoreAppsAsyncActionGetServersAtAddress *******************************

// ********** Begin Class USteamCoreAppsAsyncActionSetAppBuildLive Function SetAppBuildLiveAsync ***
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics
{
	struct SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppID;
		int32 BuildID;
		FString BetaKey;
		FString Description;
		USteamCoreAppsAsyncActionSetAppBuildLive* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication key.\n\x09* @param\x09""AppID\x09\x09\x09""AppID of game\n\x09* @param\x09""BuildID\x09\x09\x09""BuildID\n\x09* @param\x09""BetaKey\x09\x09\x09""beta key, required. Use public for default branch\n\x09* @param\x09""Description\x09\x09optional description for this build\n\x09*/" },
		{ "DisplayName", "Set App Build Live" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "NOTE: This call requires a publisher API key to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!\n\n@param        Key                             Steamworks Web API publisher authentication key.\n@param        AppID                   AppID of game\n@param        BuildID                 BuildID\n@param        BetaKey                 beta key, required. Use public for default branch\n@param        Description             optional description for this build" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAppBuildLiveAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BetaKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAppBuildLiveAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAppBuildLiveAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, BuildID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BetaKey = { "BetaKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, BetaKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BuildID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_BetaKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers) < 2048);
// ********** End Function SetAppBuildLiveAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive, nullptr, "SetAppBuildLiveAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::SteamCoreAppsAsyncActionSetAppBuildLive_eventSetAppBuildLiveAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionSetAppBuildLive::execSetAppBuildLiveAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_BuildID);
	P_GET_PROPERTY(FStrProperty,Z_Param_BetaKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionSetAppBuildLive**)Z_Param__Result=USteamCoreAppsAsyncActionSetAppBuildLive::SetAppBuildLiveAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppID,Z_Param_BuildID,Z_Param_BetaKey,Z_Param_Description);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionSetAppBuildLive Function SetAppBuildLiveAsync *****

// ********** Begin Class USteamCoreAppsAsyncActionSetAppBuildLive *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive;
UClass* USteamCoreAppsAsyncActionSetAppBuildLive::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionSetAppBuildLive;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionSetAppBuildLive"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionSetAppBuildLive,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_NoRegister()
{
	return USteamCoreAppsAsyncActionSetAppBuildLive::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionSetAppBuildLive\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionSetAppBuildLive\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionSetAppBuildLive constinit property declarations *
// ********** End Class USteamCoreAppsAsyncActionSetAppBuildLive constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetAppBuildLiveAsync"), .Pointer = &USteamCoreAppsAsyncActionSetAppBuildLive::execSetAppBuildLiveAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionSetAppBuildLive_SetAppBuildLiveAsync, "SetAppBuildLiveAsync" }, // 3104803029
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionSetAppBuildLive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionSetAppBuildLive::StaticRegisterNativesUSteamCoreAppsAsyncActionSetAppBuildLive()
{
	UClass* Class = USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive.OuterSingleton;
}
USteamCoreAppsAsyncActionSetAppBuildLive::USteamCoreAppsAsyncActionSetAppBuildLive() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionSetAppBuildLive);
USteamCoreAppsAsyncActionSetAppBuildLive::~USteamCoreAppsAsyncActionSetAppBuildLive() {}
// ********** End Class USteamCoreAppsAsyncActionSetAppBuildLive ***********************************

// ********** Begin Class USteamCoreAppsAsyncActionUpToDateCheck Function UpToDateCheckAsync *******
struct Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics
{
	struct SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		int32 Version;
		USteamCoreAppsAsyncActionUpToDateCheck* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|Apps|Async" },
		{ "Comment", "/**\n\x09* @param\x09""AppID\x09\x09""AppID of game\n\x09* @param\x09Version\x09\x09The installed version of the game\n\x09*/" },
		{ "DisplayName", "Up To Date Check" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "@param        AppID           AppID of game\n@param        Version         The installed version of the game" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpToDateCheckAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpToDateCheckAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpToDateCheckAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, Version), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers) < 2048);
// ********** End Function UpToDateCheckAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck, nullptr, "UpToDateCheckAsync", 	Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::SteamCoreAppsAsyncActionUpToDateCheck_eventUpToDateCheckAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreAppsAsyncActionUpToDateCheck::execUpToDateCheckAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Version);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreAppsAsyncActionUpToDateCheck**)Z_Param__Result=USteamCoreAppsAsyncActionUpToDateCheck::UpToDateCheckAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Version);
	P_NATIVE_END;
}
// ********** End Class USteamCoreAppsAsyncActionUpToDateCheck Function UpToDateCheckAsync *********

// ********** Begin Class USteamCoreAppsAsyncActionUpToDateCheck ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck;
UClass* USteamCoreAppsAsyncActionUpToDateCheck::GetPrivateStaticClass()
{
	using TClass = USteamCoreAppsAsyncActionUpToDateCheck;
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreAppsAsyncActionUpToDateCheck"),
			Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.InnerSingleton,
			StaticRegisterNativesUSteamCoreAppsAsyncActionUpToDateCheck,
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
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_NoRegister()
{
	return USteamCoreAppsAsyncActionUpToDateCheck::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreAppsAsyncActionUpToDateCheck\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Apps/WebAppsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Apps/WebAppsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreAppsAsyncActionUpToDateCheck\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreAppsAsyncActionUpToDateCheck constinit property declarations ***
// ********** End Class USteamCoreAppsAsyncActionUpToDateCheck constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpToDateCheckAsync"), .Pointer = &USteamCoreAppsAsyncActionUpToDateCheck::execUpToDateCheckAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreAppsAsyncActionUpToDateCheck_UpToDateCheckAsync, "UpToDateCheckAsync" }, // 1536809881
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAppsAsyncActionUpToDateCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics
UObject* (*const Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::ClassParams = {
	&USteamCoreAppsAsyncActionUpToDateCheck::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::Class_MetaDataParams)
};
void USteamCoreAppsAsyncActionUpToDateCheck::StaticRegisterNativesUSteamCoreAppsAsyncActionUpToDateCheck()
{
	UClass* Class = USteamCoreAppsAsyncActionUpToDateCheck::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck()
{
	if (!Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.OuterSingleton, Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck.OuterSingleton;
}
USteamCoreAppsAsyncActionUpToDateCheck::USteamCoreAppsAsyncActionUpToDateCheck() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreAppsAsyncActionUpToDateCheck);
USteamCoreAppsAsyncActionUpToDateCheck::~USteamCoreAppsAsyncActionUpToDateCheck() {}
// ********** End Class USteamCoreAppsAsyncActionUpToDateCheck *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebAppsAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBetas, USteamCoreAppsAsyncActionGetAppBetas::StaticClass, TEXT("USteamCoreAppsAsyncActionGetAppBetas"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBetas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetAppBetas), 3851967639U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppBuilds, USteamCoreAppsAsyncActionGetAppBuilds::StaticClass, TEXT("USteamCoreAppsAsyncActionGetAppBuilds"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppBuilds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetAppBuilds), 272991774U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions, USteamCoreAppsAsyncActionGetAppDepotVersions::StaticClass, TEXT("USteamCoreAppsAsyncActionGetAppDepotVersions"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppDepotVersions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetAppDepotVersions), 2834849043U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetAppList, USteamCoreAppsAsyncActionGetAppList::StaticClass, TEXT("USteamCoreAppsAsyncActionGetAppList"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetAppList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetAppList), 3849479869U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetCheatingReports, USteamCoreAppsAsyncActionGetCheatingReports::StaticClass, TEXT("USteamCoreAppsAsyncActionGetCheatingReports"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetCheatingReports), 2739936056U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetPlayersBanned, USteamCoreAppsAsyncActionGetPlayersBanned::StaticClass, TEXT("USteamCoreAppsAsyncActionGetPlayersBanned"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetPlayersBanned, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetPlayersBanned), 2853741035U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetServerList, USteamCoreAppsAsyncActionGetServerList::StaticClass, TEXT("USteamCoreAppsAsyncActionGetServerList"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetServerList), 59897644U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionGetServersAtAddress, USteamCoreAppsAsyncActionGetServersAtAddress::StaticClass, TEXT("USteamCoreAppsAsyncActionGetServersAtAddress"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionGetServersAtAddress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionGetServersAtAddress), 3464167582U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionSetAppBuildLive, USteamCoreAppsAsyncActionSetAppBuildLive::StaticClass, TEXT("USteamCoreAppsAsyncActionSetAppBuildLive"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionSetAppBuildLive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionSetAppBuildLive), 3014498490U) },
		{ Z_Construct_UClass_USteamCoreAppsAsyncActionUpToDateCheck, USteamCoreAppsAsyncActionUpToDateCheck::StaticClass, TEXT("USteamCoreAppsAsyncActionUpToDateCheck"), &Z_Registration_Info_UClass_USteamCoreAppsAsyncActionUpToDateCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAppsAsyncActionUpToDateCheck), 2394380894U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebAppsAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebAppsAsyncActions_h__Script_SteamCoreWeb_3427225482{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebAppsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_Apps_WebAppsAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
