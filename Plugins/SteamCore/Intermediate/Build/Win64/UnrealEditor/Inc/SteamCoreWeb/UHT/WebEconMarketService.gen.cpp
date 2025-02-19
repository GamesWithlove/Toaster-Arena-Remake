// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconMarket/WebEconMarketService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconMarketService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
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
	void UWebEconMarketService::StaticRegisterNativesUWebEconMarketService()
	{
		UClass* Class = UWebEconMarketService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAppListingsForUser", &UWebEconMarketService::execCancelAppListingsForUser },
			{ "GetAssetID", &UWebEconMarketService::execGetAssetID },
			{ "GetMarketEligibility", &UWebEconMarketService::execGetMarketEligibility },
			{ "GetPopular", &UWebEconMarketService::execGetPopular },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static void NewProp_bSynchronous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronous;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventCancelAppListingsForUser_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit(void* Obj)
	{
		((WebEconMarketService_eventCancelAppListingsForUser_Parms*)Obj)->bSynchronous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous = { "bSynchronous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconMarketService_eventCancelAppListingsForUser_Parms), &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::NewProp_bSynchronous,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Cancels all of a user's listings for a specific app ID.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app making the request\n\x09* @param\x09SteamId\x09\x09\x09The SteamID of the user whose listings should be canceled\n\x09* @param\x09""bSynchronous\x09Whether or not to wait until all listings have been canceled before returning the response\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Cancels all of a user's listings for a specific app ID.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app making the request\n@param        SteamId                 The SteamID of the user whose listings should be canceled\n@param        bSynchronous    Whether or not to wait until all listings have been canceled before returning the response" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "CancelAppListingsForUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::WebEconMarketService_eventCancelAppListingsForUser_Parms), Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ListingId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_ListingId = { "ListingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetAssetID_Parms, ListingId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::NewProp_ListingId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Returns the asset ID of the item sold in a listing\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09ListingId (int64)\x09The identifier of the listing to get information for\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Returns the asset ID of the item sold in a listing\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        ListingId (int64)       The identifier of the listing to get information for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetAssetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::WebEconMarketService_eventGetAssetID_Parms), Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetAssetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetAssetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics
	{
		struct WebEconMarketService_eventGetMarketEligibility_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetMarketEligibility_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::NewProp_SteamId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Checks whether or not an account is allowed to use the market\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09The SteamID of the user to check\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Checks whether or not an account is allowed to use the market\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        SteamId         The SteamID of the user to check" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetMarketEligibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::WebEconMarketService_eventGetMarketEligibility_Parms), Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FilterAppId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ECurrency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Rows), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, Start), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_FilterAppId = { "FilterAppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, FilterAppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_ECurrency = { "ECurrency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconMarketService_eventGetPopular_Parms, ECurrency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_FilterAppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::NewProp_ECurrency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconMarketService" },
		{ "Comment", "/**\n\x09* Gets the most popular items\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09Language\x09\x09\x09The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n\x09* @param\x09Rows\x09\x09\x09\x09Number of rows per page\n\x09* @param\x09Start\x09\x09\x09\x09The result number to start at\n\x09* @param\x09""FilterAppId\x09\x09\x09If present, the app ID to limit results to\n\x09* @param\x09""ECurrency\x09\x09\x09If present, prices returned will be represented in this currency\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
		{ "ToolTip", "Gets the most popular items\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        Language                        The app that's asking. Must match the app of the listing and must belong to the publisher group that owns the API Key making the request\n@param        Rows                            Number of rows per page\n@param        Start                           The result number to start at\n@param        FilterAppId                     If present, the app ID to limit results to\n@param        ECurrency                       If present, prices returned will be represented in this currency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconMarketService, nullptr, "GetPopular", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::WebEconMarketService_eventGetPopular_Parms), Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconMarketService_GetPopular()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconMarketService_GetPopular_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebEconMarketService);
	UClass* Z_Construct_UClass_UWebEconMarketService_NoRegister()
	{
		return UWebEconMarketService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconMarketService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconMarketService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconMarketService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconMarketService_CancelAppListingsForUser, "CancelAppListingsForUser" }, // 2588706052
		{ &Z_Construct_UFunction_UWebEconMarketService_GetAssetID, "GetAssetID" }, // 1540047686
		{ &Z_Construct_UFunction_UWebEconMarketService_GetMarketEligibility, "GetMarketEligibility" }, // 2901554514
		{ &Z_Construct_UFunction_UWebEconMarketService_GetPopular, "GetPopular" }, // 126312645
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EconMarket/WebEconMarketService.h" },
		{ "ModuleRelativePath", "Public/EconMarket/WebEconMarketService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconMarketService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconMarketService>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconMarketService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconMarketService()
	{
		if (!Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton, Z_Construct_UClass_UWebEconMarketService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebEconMarketService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconMarketService>()
	{
		return UWebEconMarketService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconMarketService);
	UWebEconMarketService::~UWebEconMarketService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebEconMarketService, UWebEconMarketService::StaticClass, TEXT("UWebEconMarketService"), &Z_Registration_Info_UClass_UWebEconMarketService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebEconMarketService), 976686692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_628020629(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconMarket_WebEconMarketService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
