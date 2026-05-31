// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EconMarket/WebEconMarketService.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebEconMarketService() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebEconMarketService Function CancelAppListingsForUser ******************
struct Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics
{
	struct WebEconMarketService_eventCancelAppListingsForUser_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		bool bSynchronous;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Cancels all of a user's listings for a specific app ID.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app making the request\n\x09* @param\x09SteamId\x09\x09\x09The SteamID of the user whose listings should be canceled\n\x09* @param\x09""bSynchronous\x09Whether or not to wait until all listings have been canceled before returning the response\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app making the request\n@param        SteamId                 The SteamID of the user whose listings should be canceled\n@param        bSynchronous    Whether or not to wait until all listings have been canceled before returning the response" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAppListingsForUser constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static void NewProp_bSynchronous_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAppListingsForUser constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAppListingsForUser Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit(void* Obj)
{
	((WebEconMarketService_eventCancelAppListingsForUser_Parms*)Obj)->bSynchronous = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers) < 2048);
// ********** End Function CancelAppListingsForUser Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "CancelAppListingsForUser", 	Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::WebEconMarketService_eventCancelAppListingsForUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::WebEconMarketService_eventCancelAppListingsForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebEconMarketService::execCancelAppListingsForUser)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_UBOOL(Z_Param_bSynchronous);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAppListingsForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_bSynchronous);
	P_NATIVE_END;
}
// ********** End Class UWebEconMarketService Function CancelAppListingsForUser ********************

// ********** Begin Class UWebEconMarketService Function GetAssetID ********************************
struct Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics
{
	struct WebEconMarketService_eventGetAssetID_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString ListingId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Returns the asset ID of the item sold in a listing\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09ListingId (int64)\x09The identifier of the listing to get information for\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Returns the asset ID of the item sold in a listing\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        ListingId (int64)       The identifier of the listing to get information for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetID constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ListingId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetID constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetID Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_ListingId = { "ListingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, ListingId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_ListingId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers) < 2048);
// ********** End Function GetAssetID Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetAssetID", 	Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::WebEconMarketService_eventGetAssetID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::WebEconMarketService_eventGetAssetID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebEconMarketService_GetAssetID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebEconMarketService::execGetAssetID)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ListingId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAssetID(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_ListingId);
	P_NATIVE_END;
}
// ********** End Class UWebEconMarketService Function GetAssetID **********************************

// ********** Begin Class UWebEconMarketService Function GetMarketEligibility **********************
struct Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics
{
	struct WebEconMarketService_eventGetMarketEligibility_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Checks whether or not an account is allowed to use the market\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the user to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Checks whether or not an account is allowed to use the market\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the user to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMarketEligibility constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMarketEligibility constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMarketEligibility Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers) < 2048);
// ********** End Function GetMarketEligibility Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetMarketEligibility", 	Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::WebEconMarketService_eventGetMarketEligibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::WebEconMarketService_eventGetMarketEligibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebEconMarketService::execGetMarketEligibility)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMarketEligibility(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebEconMarketService Function GetMarketEligibility ************************

// ********** Begin Class UWebEconMarketService Function GetPopular ********************************
struct Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics
{
	struct WebEconMarketService_eventGetPopular_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString Language;
		int32 Rows;
		int32 Start;
		int32 FilterAppId;
		int32 ECurrency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Gets the most popular items\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09Language\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09Rows\x09\x09\x09\x09Number of rows per page\n\x09* @param\x09Start\x09\x09\x09\x09The result number to start at\n\x09* @param\x09""FilterAppId\x09\x09\x09If present, the app ID to limit results to\n\x09* @param\x09""ECurrency\x09\x09\x09If present, prices returned will be represented in this currency\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Gets the most popular items\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        Language                        The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        Rows                            Number of rows per page\n@param        Start                           The result number to start at\n@param        FilterAppId                     If present, the app ID to limit results to\n@param        ECurrency                       If present, prices returned will be represented in this currency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPopular constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FilterAppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPopular constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPopular Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Rows), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_FilterAppId = { "FilterAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, FilterAppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, ECurrency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Rows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_FilterAppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_ECurrency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers) < 2048);
// ********** End Function GetPopular Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetPopular", 	Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::WebEconMarketService_eventGetPopular_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::WebEconMarketService_eventGetPopular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebEconMarketService_GetPopular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebEconMarketService::execGetPopular)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rows);
	P_GET_PROPERTY(FIntProperty,Z_Param_Start);
	P_GET_PROPERTY(FIntProperty,Z_Param_FilterAppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ECurrency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPopular(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_Language,Z_Param_Rows,Z_Param_Start,Z_Param_FilterAppId,Z_Param_ECurrency);
	P_NATIVE_END;
}
// ********** End Class UWebEconMarketService Function GetPopular **********************************

// ********** Begin Class UWebEconMarketService ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebEconMarketService;
UClass* UWebEconMarketService::GetPrivateStaticClass()
{
	using TClass = UWebEconMarketService;
	if (!Z_Registration_Info_UClass_UWebEconMarketService.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebEconMarketService"),
			Z_Registration_Info_UClass_UWebEconMarketService.InnerSingleton,
			StaticRegisterNativesUWebEconMarketService,
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
	return Z_Registration_Info_UClass_UWebEconMarketService.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister()
{
	return UWebEconMarketService::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebEconMarketService_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EconMarket/WebEconMarketService.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebEconMarketService constinit property declarations ********************
// ********** End Class UWebEconMarketService constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelAppListingsForUser"), .Pointer = &UWebEconMarketService::execCancelAppListingsForUser },
		{ .NameUTF8 = UTF8TEXT("GetAssetID"), .Pointer = &UWebEconMarketService::execGetAssetID },
		{ .NameUTF8 = UTF8TEXT("GetMarketEligibility"), .Pointer = &UWebEconMarketService::execGetMarketEligibility },
		{ .NameUTF8 = UTF8TEXT("GetPopular"), .Pointer = &UWebEconMarketService::execGetPopular },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser, "CancelAppListingsForUser" }, // 3291954872
		{ &Z_Construct_UFunction_UWebEconMarketService_GetAssetID, "GetAssetID" }, // 4084972564
		{ &Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility, "GetMarketEligibility" }, // 2263438049
		{ &Z_Construct_UFunction_UWebEconMarketService_GetPopular, "GetPopular" }, // 2844960430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconMarketService>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebEconMarketService_Statics
UObject* (*const Z_Construct_UClass_UWebEconMarketService_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconMarketService_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams = {
	&UWebEconMarketService::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams)
};
void UWebEconMarketService::StaticRegisterNativesUWebEconMarketService()
{
	UClass* Class = UWebEconMarketService::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebEconMarketService_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebEconMarketService()
{
	if (!Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton, Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebEconMarketService);
UWebEconMarketService::~UWebEconMarketService() {}
// ********** End Class UWebEconMarketService ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebEconMarketService, UWebEconMarketService::StaticClass, TEXT("UWebEconMarketService"), &Z_Registration_Info_UClass_UWebEconMarketService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebEconMarketService), 537619114U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h__Script_SteamCoreWeb_3728439992{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
