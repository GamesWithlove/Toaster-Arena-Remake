// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/EconService/WebEconServiceAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebEconServiceAsyncActions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// End Cross Module References
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionGetTradeHistory**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeHistory::GetTradeHistoryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_MaxTrades,Z_Param_StartAfterTime,Z_Param_StartAfterTradeId,Z_Param_bNavigatingBack,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bIncludeFailed,Z_Param_bIncludeTotal);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeHistory::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeHistory()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeHistoryAsync", &USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 MaxTrades;
			int32 StartAfterTime;
			FString StartAfterTradeId;
			bool bNavigatingBack;
			bool bGetDescriptions;
			FString Language;
			bool bIncludeFailed;
			bool bIncludeTotal;
			USteamCoreWebAsyncActionGetTradeHistory* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_MaxTrades = { "MaxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, MaxTrades), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTime = { "StartAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTradeId = { "StartAfterTradeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTradeId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bNavigatingBack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeTotal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_MaxTrades,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTradeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a history of trades\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09MaxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09* @param\x09StartAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09* @param\x09StartAfterTradeId\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09* @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data\n\x09* @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09* @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09*/" },
		{ "DisplayName", "Get Trade History" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a history of trades\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        MaxTrades                               The number of trades to return information for\n@param        StartAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param        StartAfterTradeId               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param        bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param        Language                                The language to use when loading item display data\n@param        bIncludeFailed                  Include Failed\n@param        bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, nullptr, "GetTradeHistoryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetTradeHistory);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync, "GetTradeHistoryAsync" }, // 4206369726
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeHistory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeHistory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeHistory>()
	{
		return USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	}
	USteamCoreWebAsyncActionGetTradeHistory::USteamCoreWebAsyncActionGetTradeHistory() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeHistory);
	USteamCoreWebAsyncActionGetTradeHistory::~USteamCoreWebAsyncActionGetTradeHistory() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushInventoryCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushInventoryCache::FlushInventoryCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushInventoryCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushInventoryCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushInventoryCacheAsync", &USteamCoreWebAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString SteamId;
			int32 AppId;
			FString ContextId;
			USteamCoreWebAsyncActionFlushInventoryCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ContextId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache for a user's inventory in a specific app context\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09User to clear cache for.\n\x09* @param\x09""AppId\x09\x09\x09""App to clear cache for.\n\x09* @param\x09""ContextId\x09\x09""Context to clear cache for.\n\x09*/" },
		{ "DisplayName", "Flush Inventory Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 User to clear cache for.\n@param        AppId                   App to clear cache for.\n@param        ContextId               Context to clear cache for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, nullptr, "FlushInventoryCacheAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionFlushInventoryCache);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync, "FlushInventoryCacheAsync" }, // 1388123124
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushInventoryCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushInventoryCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushInventoryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushInventoryCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushInventoryCache>()
	{
		return USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
	}
	USteamCoreWebAsyncActionFlushInventoryCache::USteamCoreWebAsyncActionFlushInventoryCache() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushInventoryCache);
	USteamCoreWebAsyncActionFlushInventoryCache::~USteamCoreWebAsyncActionFlushInventoryCache() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushAssetAppearanceCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushAssetAppearanceCache::FlushAssetAppearanceCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushAssetAppearanceCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushAssetAppearanceCacheAsync", &USteamCoreWebAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppId;
			USteamCoreWebAsyncActionFlushAssetAppearanceCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Asset Appearance Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, nullptr, "FlushAssetAppearanceCacheAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionFlushAssetAppearanceCache);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync, "FlushAssetAppearanceCacheAsync" }, // 3147637108
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushAssetAppearanceCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushAssetAppearanceCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushAssetAppearanceCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushAssetAppearanceCache>()
	{
		return USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
	}
	USteamCoreWebAsyncActionFlushAssetAppearanceCache::USteamCoreWebAsyncActionFlushAssetAppearanceCache() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushAssetAppearanceCache);
	USteamCoreWebAsyncActionFlushAssetAppearanceCache::~USteamCoreWebAsyncActionFlushAssetAppearanceCache() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionFlushContextCache::execFlushContextCacheAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionFlushContextCache**)Z_Param__Result=USteamCoreWebAsyncActionFlushContextCache::FlushContextCacheAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionFlushContextCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushContextCache()
	{
		UClass* Class = USteamCoreWebAsyncActionFlushContextCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlushContextCacheAsync", &USteamCoreWebAsyncActionFlushContextCache::execFlushContextCacheAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics
	{
		struct SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 AppId;
			USteamCoreWebAsyncActionFlushContextCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Context Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, nullptr, "FlushContextCacheAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionFlushContextCache);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister()
	{
		return USteamCoreWebAsyncActionFlushContextCache::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync, "FlushContextCacheAsync" }, // 3419486923
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushContextCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushContextCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushContextCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::ClassParams = {
		&USteamCoreWebAsyncActionFlushContextCache::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionFlushContextCache>()
	{
		return USteamCoreWebAsyncActionFlushContextCache::StaticClass();
	}
	USteamCoreWebAsyncActionFlushContextCache::USteamCoreWebAsyncActionFlushContextCache() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionFlushContextCache);
	USteamCoreWebAsyncActionFlushContextCache::~USteamCoreWebAsyncActionFlushContextCache() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
		*(USteamCoreWebAsyncActionGetTradeOffers**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffers::GetTradeOffersAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_bGetSentOffers,Z_Param_bGetReceivedOffers,Z_Param_bGetDescriptions,Z_Param_Language,Z_Param_bActiveOnly,Z_Param_bHistoricalOnly,Z_Param_TimeHistoricalCutoff);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffers::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffers()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOffersAsync", &USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			bool bGetSentOffers;
			bool bGetReceivedOffers;
			bool bGetDescriptions;
			FString Language;
			bool bActiveOnly;
			bool bHistoricalOnly;
			int32 TimeHistoricalCutoff;
			USteamCoreWebAsyncActionGetTradeOffers* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetSentOffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetReceivedOffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetDescriptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bActiveOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bHistoricalOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_TimeHistoricalCutoff = { "TimeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, TimeHistoricalCutoff), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_TimeHistoricalCutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get a list of sent or received trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09* @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data.\n\x09* @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09* @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09* @param\x09TimeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09*/" },
		{ "DisplayName", "Get Trade Offers" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        bGetSentOffers                  Request the list of sent offers.\n@param        bGetReceivedOffers              Request the list of received offers.\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param        Language                                The language to use when loading item display data.\n@param        bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param        bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param        TimeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, nullptr, "GetTradeOffersAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetTradeOffers);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync, "GetTradeOffersAsync" }, // 2726069837
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffers::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffers>()
	{
		return USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	}
	USteamCoreWebAsyncActionGetTradeOffers::USteamCoreWebAsyncActionGetTradeOffers() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffers);
	USteamCoreWebAsyncActionGetTradeOffers::~USteamCoreWebAsyncActionGetTradeOffers() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffer::execGetTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffer::GetTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId,Z_Param_Language);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOfferAsync", &USteamCoreWebAsyncActionGetTradeOffer::execGetTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString TradeOfferId;
			FString Language;
			USteamCoreWebAsyncActionGetTradeOffer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Language), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a specific trade offer\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Get Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a specific trade offer\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, nullptr, "GetTradeOfferAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetTradeOffer);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync, "GetTradeOfferAsync" }, // 561097507
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffer>()
	{
		return USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
	}
	USteamCoreWebAsyncActionGetTradeOffer::USteamCoreWebAsyncActionGetTradeOffer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffer);
	USteamCoreWebAsyncActionGetTradeOffer::~USteamCoreWebAsyncActionGetTradeOffer() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastVisit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionGetTradeOffersSummary**)Z_Param__Result=USteamCoreWebAsyncActionGetTradeOffersSummary::GetTradeOffersSummaryAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TimeLastVisit);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionGetTradeOffersSummary::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffersSummary()
	{
		UClass* Class = USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradeOffersSummaryAsync", &USteamCoreWebAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics
	{
		struct SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			int32 TimeLastVisit;
			USteamCoreWebAsyncActionGetTradeOffersSummary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastVisit;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit = { "TimeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, TimeLastVisit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get counts of pending and new trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TimeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09*/" },
		{ "DisplayName", "Get Trade Offers Summary" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TimeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, nullptr, "GetTradeOffersSummaryAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetTradeOffersSummary);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister()
	{
		return USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync, "GetTradeOffersSummaryAsync" }, // 3270533319
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffersSummary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::ClassParams = {
		&USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetTradeOffersSummary>()
	{
		return USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
	}
	USteamCoreWebAsyncActionGetTradeOffersSummary::USteamCoreWebAsyncActionGetTradeOffersSummary() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetTradeOffersSummary);
	USteamCoreWebAsyncActionGetTradeOffersSummary::~USteamCoreWebAsyncActionGetTradeOffersSummary() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionDeclineTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionDeclineTradeOffer::DeclineTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionDeclineTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionDeclineTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeclineTradeOfferAsync", &USteamCoreWebAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString TradeOfferId;
			USteamCoreWebAsyncActionDeclineTradeOffer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Decline a trade offer someone sent to us\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\n\x09*/" },
		{ "DisplayName", "Decline Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, nullptr, "DeclineTradeOfferAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionDeclineTradeOffer);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync, "DeclineTradeOfferAsync" }, // 3274460184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeclineTradeOffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionDeclineTradeOffer>()
	{
		return USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
	}
	USteamCoreWebAsyncActionDeclineTradeOffer::USteamCoreWebAsyncActionDeclineTradeOffer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionDeclineTradeOffer);
	USteamCoreWebAsyncActionDeclineTradeOffer::~USteamCoreWebAsyncActionDeclineTradeOffer() {}
	DEFINE_FUNCTION(USteamCoreWebAsyncActionCancelTradeOffer::execCancelTradeOfferAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_TradeOfferId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreWebAsyncActionCancelTradeOffer**)Z_Param__Result=USteamCoreWebAsyncActionCancelTradeOffer::CancelTradeOfferAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_TradeOfferId);
		P_NATIVE_END;
	}
	void USteamCoreWebAsyncActionCancelTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionCancelTradeOffer()
	{
		UClass* Class = USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTradeOfferAsync", &USteamCoreWebAsyncActionCancelTradeOffer::execCancelTradeOfferAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics
	{
		struct SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms
		{
			UObject* WorldContextObject;
			FString Key;
			FString TradeOfferId;
			USteamCoreWebAsyncActionCancelTradeOffer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Cancel a trade offer we sent\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\n\x09*/" },
		{ "DisplayName", "Cancel Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, nullptr, "CancelTradeOfferAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionCancelTradeOffer);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister()
	{
		return USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync, "CancelTradeOfferAsync" }, // 4186828245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelTradeOffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::ClassParams = {
		&USteamCoreWebAsyncActionCancelTradeOffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionCancelTradeOffer>()
	{
		return USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
	}
	USteamCoreWebAsyncActionCancelTradeOffer::USteamCoreWebAsyncActionCancelTradeOffer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionCancelTradeOffer);
	USteamCoreWebAsyncActionCancelTradeOffer::~USteamCoreWebAsyncActionCancelTradeOffer() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, USteamCoreWebAsyncActionGetTradeHistory::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeHistory"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeHistory), 2537144196U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, USteamCoreWebAsyncActionFlushInventoryCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushInventoryCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushInventoryCache), 2001175679U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushAssetAppearanceCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushAssetAppearanceCache), 2260420095U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, USteamCoreWebAsyncActionFlushContextCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushContextCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushContextCache), 4034436064U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, USteamCoreWebAsyncActionGetTradeOffers::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffers"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffers), 1983351210U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, USteamCoreWebAsyncActionGetTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffer), 3980688810U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffersSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffersSummary), 1330362753U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionDeclineTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionDeclineTradeOffer), 1477636566U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, USteamCoreWebAsyncActionCancelTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionCancelTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCancelTradeOffer), 1536393922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h_881685456(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
