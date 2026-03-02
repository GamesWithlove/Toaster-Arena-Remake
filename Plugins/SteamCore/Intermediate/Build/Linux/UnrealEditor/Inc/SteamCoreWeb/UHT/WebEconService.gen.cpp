// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconService/WebEconService.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebEconService_NoRegister();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(UWebEconService::execCancelTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_TradeOfferId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execDeclineTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeclineTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_TradeOfferId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffersSummary)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastVisit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffersSummary(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_TimeLastVisit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffer(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_TradeOfferId,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeOffers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bGetSentOffers);
		P_GET_UBOOL(Z_Param_bGetReceivedOffers);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_UBOOL(Z_Param_bActiveOnly);
		P_GET_UBOOL(Z_Param_bHistoricalOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeHistoricalCutoff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeOffers(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_TimeHistoricalCutoff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushContextCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushContextCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushAssetAppearanceCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushAssetAppearanceCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execFlushInventoryCache)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushInventoryCache(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebEconService::execGetTradeHistory)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxTrades);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartAfterTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_StartAfterTradeId);
		P_GET_UBOOL(Z_Param_bNavigatingBack);
		P_GET_UBOOL(Z_Param_bGetDescriptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_GET_UBOOL(Z_Param_bIncludeFailed);
		P_GET_UBOOL(Z_Param_bIncludeTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTradeHistory(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_MaxTrades,Z_Param_StartAfterTime,Z_Param_StartAfterTradeId,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	void UWebEconService::StaticRegisterNativesUWebEconService()
	{
		UClass* Class = UWebEconService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTradeOffer", &UWebEconService::execCancelTradeOffer },
			{ "DeclineTradeOffer", &UWebEconService::execDeclineTradeOffer },
			{ "FlushAssetAppearanceCache", &UWebEconService::execFlushAssetAppearanceCache },
			{ "FlushContextCache", &UWebEconService::execFlushContextCache },
			{ "FlushInventoryCache", &UWebEconService::execFlushInventoryCache },
			{ "GetTradeHistory", &UWebEconService::execGetTradeHistory },
			{ "GetTradeOffer", &UWebEconService::execGetTradeOffer },
			{ "GetTradeOffers", &UWebEconService::execGetTradeOffers },
			{ "GetTradeOffersSummary", &UWebEconService::execGetTradeOffersSummary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics
	{
		struct WebEconService_eventCancelTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString TradeOfferId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventCancelTradeOffer_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::NewProp_TradeOfferId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Cancel a trade offer we sent\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "CancelTradeOffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::WebEconService_eventCancelTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_CancelTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_CancelTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics
	{
		struct WebEconService_eventDeclineTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString TradeOfferId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventDeclineTradeOffer_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::NewProp_TradeOfferId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Decline a trade offer someone sent to us\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "DeclineTradeOffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::WebEconService_eventDeclineTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_DeclineTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_DeclineTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics
	{
		struct WebEconService_eventFlushAssetAppearanceCache_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushAssetAppearanceCache_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushAssetAppearanceCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::WebEconService_eventFlushAssetAppearanceCache_Parms), Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics
	{
		struct WebEconService_eventFlushContextCache_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushContextCache_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::NewProp_AppId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushContextCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::WebEconService_eventFlushContextCache_Parms), Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushContextCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushContextCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics
	{
		struct WebEconService_eventFlushInventoryCache_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString SteamId;
			int32 AppId;
			FString ContextId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventFlushInventoryCache_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::NewProp_ContextId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Flushes the cache for a user's inventory in a specific app context\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09User to clear cache for.\n\x09* @param\x09""AppId\x09\x09\x09""App to clear cache for.\n\x09* @param\x09""ContextId\x09\x09""Context to clear cache for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 User to clear cache for.\n@param        AppId                   App to clear cache for.\n@param        ContextId               Context to clear cache for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "FlushInventoryCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::WebEconService_eventFlushInventoryCache_Parms), Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_FlushInventoryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_FlushInventoryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics
	{
		struct WebEconService_eventGetTradeHistory_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 MaxTrades;
			int32 StartAfterTime;
			FString StartAfterTradeId;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString Language;
			bool bIncludeFailed;
			bool bIncludeTotal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrades;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartAfterTime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartAfterTradeId;
		static void NewProp_bNavigatingBack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigatingBack;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_bIncludeFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFailed;
		static void NewProp_bIncludeTotal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTotal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_MaxTrades = { "MaxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, MaxTrades), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_StartAfterTime = { "StartAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, StartAfterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_StartAfterTradeId = { "StartAfterTradeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, StartAfterTradeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeHistory_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeHistory_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeHistory_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_MaxTrades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_StartAfterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_StartAfterTradeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bNavigatingBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bGetDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::NewProp_bIncludeTotal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Gets a history of trades\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09MaxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09* @param\x09StartAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09* @param\x09StartAfterTradeId\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09* @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data\n\x09* @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09* @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Gets a history of trades\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        MaxTrades                               The number of trades to return information for\n@param        StartAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param        StartAfterTradeId               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param        bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param        Language                                The language to use when loading item display data\n@param        bIncludeFailed                  Include Failed\n@param        bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::WebEconService_eventGetTradeHistory_Parms), Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics
	{
		struct WebEconService_eventGetTradeOffer_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			FString TradeOfferId;
			FString Language;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffer_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_TradeOfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::NewProp_Language,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Gets a specific trade offer\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Gets a specific trade offer\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::WebEconService_eventGetTradeOffer_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics
	{
		struct WebEconService_eventGetTradeOffers_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString Language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 TimeHistoricalCutoff;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_bGetSentOffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetSentOffers;
		static void NewProp_bGetReceivedOffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetReceivedOffers;
		static void NewProp_bGetDescriptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetDescriptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_bActiveOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveOnly;
		static void NewProp_bHistoricalOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHistoricalOnly;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeHistoricalCutoff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bActiveOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((WebEconService_eventGetTradeOffers_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WebEconService_eventGetTradeOffers_Parms), &Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_TimeHistoricalCutoff = { "TimeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffers_Parms, TimeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetSentOffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetReceivedOffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bGetDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bActiveOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_bHistoricalOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::NewProp_TimeHistoricalCutoff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Get a list of sent or received trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09* @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data.\n\x09* @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09* @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09* @param\x09TimeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        bGetSentOffers                  Request the list of sent offers.\n@param        bGetReceivedOffers              Request the list of received offers.\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param        Language                                The language to use when loading item display data.\n@param        bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param        bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param        TimeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::WebEconService_eventGetTradeOffers_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics
	{
		struct WebEconService_eventGetTradeOffersSummary_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 TimeLastVisit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastVisit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback_MetaData)) }; // 3063469801
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_TimeLastVisit = { "TimeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebEconService_eventGetTradeOffersSummary_Parms, TimeLastVisit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::NewProp_TimeLastVisit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService" },
		{ "Comment", "/**\n\x09* Get counts of pending and new trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TimeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TimeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebEconService, nullptr, "GetTradeOffersSummary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::WebEconService_eventGetTradeOffersSummary_Parms), Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebEconService);
	UClass* Z_Construct_UClass_UWebEconService_NoRegister()
	{
		return UWebEconService::StaticClass();
	}
	struct Z_Construct_UClass_UWebEconService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebEconService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebEconService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebEconService_CancelTradeOffer, "CancelTradeOffer" }, // 1888082774
		{ &Z_Construct_UFunction_UWebEconService_DeclineTradeOffer, "DeclineTradeOffer" }, // 3674506052
		{ &Z_Construct_UFunction_UWebEconService_FlushAssetAppearanceCache, "FlushAssetAppearanceCache" }, // 3022167473
		{ &Z_Construct_UFunction_UWebEconService_FlushContextCache, "FlushContextCache" }, // 1796416897
		{ &Z_Construct_UFunction_UWebEconService_FlushInventoryCache, "FlushInventoryCache" }, // 436392617
		{ &Z_Construct_UFunction_UWebEconService_GetTradeHistory, "GetTradeHistory" }, // 2029993899
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffer, "GetTradeOffer" }, // 2817735770
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffers, "GetTradeOffers" }, // 3364161430
		{ &Z_Construct_UFunction_UWebEconService_GetTradeOffersSummary, "GetTradeOffersSummary" }, // 2623439047
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EconService/WebEconService.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebEconService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebEconService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebEconService_Statics::ClassParams = {
		&UWebEconService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebEconService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebEconService()
	{
		if (!Z_Registration_Info_UClass_UWebEconService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebEconService.OuterSingleton, Z_Construct_UClass_UWebEconService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebEconService.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebEconService>()
	{
		return UWebEconService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebEconService);
	UWebEconService::~UWebEconService() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebEconService, UWebEconService::StaticClass, TEXT("UWebEconService"), &Z_Registration_Info_UClass_UWebEconService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebEconService), 3092455733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconService_h_3025827319(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
