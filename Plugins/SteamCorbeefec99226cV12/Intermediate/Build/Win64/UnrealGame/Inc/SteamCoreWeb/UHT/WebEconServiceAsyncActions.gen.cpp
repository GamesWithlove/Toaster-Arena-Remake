// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EconService/WebEconServiceAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebEconServiceAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionGetTradeHistory Function GetTradeHistoryAsync ****
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a history of trades\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09MaxTrades\x09\x09\x09\x09The number of trades to return information for\n\x09* @param\x09StartAfterTime\x09\x09\x09The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n\x09* @param\x09StartAfterTradeId\x09\x09The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n\x09* @param\x09""bNavigatingBack\x09\x09\x09The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trades will also be returned\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data\n\x09* @param\x09""bIncludeFailed\x09\x09\x09Include Failed\n\x09* @param\x09""bIncludeTotal\x09\x09\x09If set, the total number of trades the account has participated in will be included in the response\n\x09*/" },
		{ "DisplayName", "Get Trade History" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a history of trades\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        MaxTrades                               The number of trades to return information for\n@param        StartAfterTime                  The time of the last trade shown on the previous page of results, or the time of the first trade if navigating back\n@param        StartAfterTradeId               The tradeid shown on the previous page of results, or the ID of the first trade if navigating back\n@param        bNavigatingBack                 The user wants the previous page of results, so return the previous max_trades trades before the start time and ID\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trades will also be returned\n@param        Language                                The language to use when loading item display data\n@param        bIncludeFailed                  Include Failed\n@param        bIncludeTotal                   If set, the total number of trades the account has participated in will be included in the response" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTradeHistoryAsync constinit property declarations ******************
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
// ********** End Function GetTradeHistoryAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTradeHistoryAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_MaxTrades = { "MaxTrades", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, MaxTrades), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTime = { "StartAfterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_StartAfterTradeId = { "StartAfterTradeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, StartAfterTradeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bNavigatingBack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack = { "bNavigatingBack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bNavigatingBack_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bGetDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed = { "bIncludeFailed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeFailed_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms*)Obj)->bIncludeTotal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal = { "bIncludeTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_bIncludeTotal_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers) < 2048);
// ********** End Function GetTradeHistoryAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, nullptr, "GetTradeHistoryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::SteamCoreWebAsyncActionGetTradeHistory_eventGetTradeHistoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetTradeHistory Function GetTradeHistoryAsync ******

// ********** Begin Class USteamCoreWebAsyncActionGetTradeHistory **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory;
UClass* USteamCoreWebAsyncActionGetTradeHistory::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetTradeHistory;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetTradeHistory"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeHistory,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_NoRegister()
{
	return USteamCoreWebAsyncActionGetTradeHistory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeHistory\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeHistory\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetTradeHistory constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionGetTradeHistory constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTradeHistoryAsync"), .Pointer = &USteamCoreWebAsyncActionGetTradeHistory::execGetTradeHistoryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeHistory_GetTradeHistoryAsync, "GetTradeHistoryAsync" }, // 3854710652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeHistory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetTradeHistory::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeHistory()
{
	UClass* Class = USteamCoreWebAsyncActionGetTradeHistory::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory.OuterSingleton;
}
USteamCoreWebAsyncActionGetTradeHistory::USteamCoreWebAsyncActionGetTradeHistory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetTradeHistory);
USteamCoreWebAsyncActionGetTradeHistory::~USteamCoreWebAsyncActionGetTradeHistory() {}
// ********** End Class USteamCoreWebAsyncActionGetTradeHistory ************************************

// ********** Begin Class USteamCoreWebAsyncActionFlushInventoryCache Function FlushInventoryCacheAsync 
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache for a user's inventory in a specific app context\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09User to clear cache for.\n\x09* @param\x09""AppId\x09\x09\x09""App to clear cache for.\n\x09* @param\x09""ContextId\x09\x09""Context to clear cache for.\n\x09*/" },
		{ "DisplayName", "Flush Inventory Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache for a user's inventory in a specific app context\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 User to clear cache for.\n@param        AppId                   App to clear cache for.\n@param        ContextId               Context to clear cache for." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FlushInventoryCacheAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FlushInventoryCacheAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FlushInventoryCacheAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ContextId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers) < 2048);
// ********** End Function FlushInventoryCacheAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, nullptr, "FlushInventoryCacheAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::SteamCoreWebAsyncActionFlushInventoryCache_eventFlushInventoryCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionFlushInventoryCache Function FlushInventoryCacheAsync 

// ********** Begin Class USteamCoreWebAsyncActionFlushInventoryCache ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache;
UClass* USteamCoreWebAsyncActionFlushInventoryCache::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFlushInventoryCache;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFlushInventoryCache"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFlushInventoryCache,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_NoRegister()
{
	return USteamCoreWebAsyncActionFlushInventoryCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushInventoryCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushInventoryCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFlushInventoryCache constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionFlushInventoryCache constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlushInventoryCacheAsync"), .Pointer = &USteamCoreWebAsyncActionFlushInventoryCache::execFlushInventoryCacheAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushInventoryCache_FlushInventoryCacheAsync, "FlushInventoryCacheAsync" }, // 3128922572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushInventoryCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFlushInventoryCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushInventoryCache()
{
	UClass* Class = USteamCoreWebAsyncActionFlushInventoryCache::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache.OuterSingleton;
}
USteamCoreWebAsyncActionFlushInventoryCache::USteamCoreWebAsyncActionFlushInventoryCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFlushInventoryCache);
USteamCoreWebAsyncActionFlushInventoryCache::~USteamCoreWebAsyncActionFlushInventoryCache() {}
// ********** End Class USteamCoreWebAsyncActionFlushInventoryCache ********************************

// ********** Begin Class USteamCoreWebAsyncActionFlushAssetAppearanceCache Function FlushAssetAppearanceCacheAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics
{
	struct SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		USteamCoreWebAsyncActionFlushAssetAppearanceCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Asset Appearance Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the display cache for assets. This will result in calls to GetAssetClassInfo for each asset class the next time it is displayed.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FlushAssetAppearanceCacheAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FlushAssetAppearanceCacheAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FlushAssetAppearanceCacheAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers) < 2048);
// ********** End Function FlushAssetAppearanceCacheAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, nullptr, "FlushAssetAppearanceCacheAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::SteamCoreWebAsyncActionFlushAssetAppearanceCache_eventFlushAssetAppearanceCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionFlushAssetAppearanceCache Function FlushAssetAppearanceCacheAsync 

// ********** Begin Class USteamCoreWebAsyncActionFlushAssetAppearanceCache ************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache;
UClass* USteamCoreWebAsyncActionFlushAssetAppearanceCache::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFlushAssetAppearanceCache;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFlushAssetAppearanceCache"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFlushAssetAppearanceCache,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_NoRegister()
{
	return USteamCoreWebAsyncActionFlushAssetAppearanceCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushAssetAppearanceCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushAssetAppearanceCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFlushAssetAppearanceCache constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionFlushAssetAppearanceCache constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlushAssetAppearanceCacheAsync"), .Pointer = &USteamCoreWebAsyncActionFlushAssetAppearanceCache::execFlushAssetAppearanceCacheAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushAssetAppearanceCache_FlushAssetAppearanceCacheAsync, "FlushAssetAppearanceCacheAsync" }, // 2200983961
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushAssetAppearanceCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushAssetAppearanceCache()
{
	UClass* Class = USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache.OuterSingleton;
}
USteamCoreWebAsyncActionFlushAssetAppearanceCache::USteamCoreWebAsyncActionFlushAssetAppearanceCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFlushAssetAppearanceCache);
USteamCoreWebAsyncActionFlushAssetAppearanceCache::~USteamCoreWebAsyncActionFlushAssetAppearanceCache() {}
// ********** End Class USteamCoreWebAsyncActionFlushAssetAppearanceCache **************************

// ********** Begin Class USteamCoreWebAsyncActionFlushContextCache Function FlushContextCacheAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics
{
	struct SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		USteamCoreWebAsyncActionFlushContextCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Flush Context Cache" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Flushes the cache of inventory contents. This will result in calls to GetContexts and GetContextContents to get fresh data for each user next time Steam needs their inventory.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FlushContextCacheAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FlushContextCacheAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FlushContextCacheAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers) < 2048);
// ********** End Function FlushContextCacheAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, nullptr, "FlushContextCacheAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::SteamCoreWebAsyncActionFlushContextCache_eventFlushContextCacheAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionFlushContextCache Function FlushContextCacheAsync **

// ********** Begin Class USteamCoreWebAsyncActionFlushContextCache ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache;
UClass* USteamCoreWebAsyncActionFlushContextCache::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionFlushContextCache;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionFlushContextCache"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionFlushContextCache,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_NoRegister()
{
	return USteamCoreWebAsyncActionFlushContextCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionFlushContextCache\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionFlushContextCache\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionFlushContextCache constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionFlushContextCache constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FlushContextCacheAsync"), .Pointer = &USteamCoreWebAsyncActionFlushContextCache::execFlushContextCacheAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionFlushContextCache_FlushContextCacheAsync, "FlushContextCacheAsync" }, // 3610108713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionFlushContextCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionFlushContextCache::StaticRegisterNativesUSteamCoreWebAsyncActionFlushContextCache()
{
	UClass* Class = USteamCoreWebAsyncActionFlushContextCache::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache.OuterSingleton;
}
USteamCoreWebAsyncActionFlushContextCache::USteamCoreWebAsyncActionFlushContextCache() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionFlushContextCache);
USteamCoreWebAsyncActionFlushContextCache::~USteamCoreWebAsyncActionFlushContextCache() {}
// ********** End Class USteamCoreWebAsyncActionFlushContextCache **********************************

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffers Function GetTradeOffersAsync ******
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get a list of sent or received trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""bGetSentOffers\x09\x09\x09Request the list of sent offers.\n\x09* @param\x09""bGetReceivedOffers\x09\x09Request the list of received offers.\n\x09* @param\x09""bGetDescriptions\x09\x09If set, the item display data for the items included in the returned trade offers will also be returned.\n\x09* @param\x09Language\x09\x09\x09\x09The language to use when loading item display data.\n\x09* @param\x09""bActiveOnly\x09\x09\x09\x09Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n\x09* @param\x09""bHistoricalOnly\x09\x09\x09Indicates we should only return offers which are not active.\n\x09* @param\x09TimeHistoricalCutoff\x09When active_only is set, offers updated since this time will also be returned\n\x09*/" },
		{ "DisplayName", "Get Trade Offers" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get a list of sent or received trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        bGetSentOffers                  Request the list of sent offers.\n@param        bGetReceivedOffers              Request the list of received offers.\n@param        bGetDescriptions                If set, the item display data for the items included in the returned trade offers will also be returned.\n@param        Language                                The language to use when loading item display data.\n@param        bActiveOnly                             Indicates we should only return offers which are still active, or offers that have changed in state since the time_historical_cutoff\n@param        bHistoricalOnly                 Indicates we should only return offers which are not active.\n@param        TimeHistoricalCutoff    When active_only is set, offers updated since this time will also be returned" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTradeOffersAsync constinit property declarations *******************
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
// ********** End Function GetTradeOffersAsync constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTradeOffersAsync Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetSentOffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers = { "bGetSentOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetSentOffers_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetReceivedOffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers = { "bGetReceivedOffers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetReceivedOffers_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bGetDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions = { "bGetDescriptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bGetDescriptions_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bActiveOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly = { "bActiveOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bActiveOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms*)Obj)->bHistoricalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly = { "bHistoricalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_bHistoricalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_TimeHistoricalCutoff = { "TimeHistoricalCutoff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, TimeHistoricalCutoff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister, METADATA_PARAMS(0, nullptr) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers) < 2048);
// ********** End Function GetTradeOffersAsync Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, nullptr, "GetTradeOffersAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::SteamCoreWebAsyncActionGetTradeOffers_eventGetTradeOffersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetTradeOffers Function GetTradeOffersAsync ********

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffers ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers;
UClass* USteamCoreWebAsyncActionGetTradeOffers::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetTradeOffers;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetTradeOffers"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffers,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_NoRegister()
{
	return USteamCoreWebAsyncActionGetTradeOffers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffers constinit property declarations ***
// ********** End Class USteamCoreWebAsyncActionGetTradeOffers constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTradeOffersAsync"), .Pointer = &USteamCoreWebAsyncActionGetTradeOffers::execGetTradeOffersAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffers_GetTradeOffersAsync, "GetTradeOffersAsync" }, // 2694421334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetTradeOffers::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffers()
{
	UClass* Class = USteamCoreWebAsyncActionGetTradeOffers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers.OuterSingleton;
}
USteamCoreWebAsyncActionGetTradeOffers::USteamCoreWebAsyncActionGetTradeOffers() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetTradeOffers);
USteamCoreWebAsyncActionGetTradeOffers::~USteamCoreWebAsyncActionGetTradeOffers() {}
// ********** End Class USteamCoreWebAsyncActionGetTradeOffers *************************************

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffer Function GetTradeOfferAsync ********
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Gets a specific trade offer\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\n\x09*/" },
		{ "DisplayName", "Get Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Gets a specific trade offer\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTradeOfferAsync constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTradeOfferAsync constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTradeOfferAsync Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers) < 2048);
// ********** End Function GetTradeOfferAsync Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, nullptr, "GetTradeOfferAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::SteamCoreWebAsyncActionGetTradeOffer_eventGetTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetTradeOffer Function GetTradeOfferAsync **********

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffer ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer;
UClass* USteamCoreWebAsyncActionGetTradeOffer::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetTradeOffer;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetTradeOffer"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffer,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_NoRegister()
{
	return USteamCoreWebAsyncActionGetTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffer constinit property declarations ****
// ********** End Class USteamCoreWebAsyncActionGetTradeOffer constinit property declarations ******
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTradeOfferAsync"), .Pointer = &USteamCoreWebAsyncActionGetTradeOffer::execGetTradeOfferAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffer_GetTradeOfferAsync, "GetTradeOfferAsync" }, // 2958858318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffer()
{
	UClass* Class = USteamCoreWebAsyncActionGetTradeOffer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer.OuterSingleton;
}
USteamCoreWebAsyncActionGetTradeOffer::USteamCoreWebAsyncActionGetTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetTradeOffer);
USteamCoreWebAsyncActionGetTradeOffer::~USteamCoreWebAsyncActionGetTradeOffer() {}
// ********** End Class USteamCoreWebAsyncActionGetTradeOffer **************************************

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffersSummary Function GetTradeOffersSummaryAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics
{
	struct SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 TimeLastVisit;
		USteamCoreWebAsyncActionGetTradeOffersSummary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Get counts of pending and new trade offers\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TimeLastVisit\x09\x09\x09The time the user last visited. If not passed, will use the time the user last visited the trade offer page.\n\x09*/" },
		{ "DisplayName", "Get Trade Offers Summary" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Get counts of pending and new trade offers\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TimeLastVisit                   The time the user last visited. If not passed, will use the time the user last visited the trade offer page." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTradeOffersSummaryAsync constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastVisit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTradeOffersSummaryAsync constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTradeOffersSummaryAsync Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit = { "TimeLastVisit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, TimeLastVisit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_TimeLastVisit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers) < 2048);
// ********** End Function GetTradeOffersSummaryAsync Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, nullptr, "GetTradeOffersSummaryAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::SteamCoreWebAsyncActionGetTradeOffersSummary_eventGetTradeOffersSummaryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionGetTradeOffersSummary Function GetTradeOffersSummaryAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffersSummary ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary;
UClass* USteamCoreWebAsyncActionGetTradeOffersSummary::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetTradeOffersSummary;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetTradeOffersSummary"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffersSummary,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_NoRegister()
{
	return USteamCoreWebAsyncActionGetTradeOffersSummary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetTradeOffersSummary constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetTradeOffersSummary constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTradeOffersSummaryAsync"), .Pointer = &USteamCoreWebAsyncActionGetTradeOffersSummary::execGetTradeOffersSummaryAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetTradeOffersSummary_GetTradeOffersSummaryAsync, "GetTradeOffersSummaryAsync" }, // 2894797897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetTradeOffersSummary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetTradeOffersSummary::StaticRegisterNativesUSteamCoreWebAsyncActionGetTradeOffersSummary()
{
	UClass* Class = USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary.OuterSingleton;
}
USteamCoreWebAsyncActionGetTradeOffersSummary::USteamCoreWebAsyncActionGetTradeOffersSummary() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetTradeOffersSummary);
USteamCoreWebAsyncActionGetTradeOffersSummary::~USteamCoreWebAsyncActionGetTradeOffersSummary() {}
// ********** End Class USteamCoreWebAsyncActionGetTradeOffersSummary ******************************

// ********** Begin Class USteamCoreWebAsyncActionDeclineTradeOffer Function DeclineTradeOfferAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics
{
	struct SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString TradeOfferId;
		USteamCoreWebAsyncActionDeclineTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Decline a trade offer someone sent to us\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\n\x09*/" },
		{ "DisplayName", "Decline Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Decline a trade offer someone sent to us\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeclineTradeOfferAsync constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeclineTradeOfferAsync constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeclineTradeOfferAsync Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers) < 2048);
// ********** End Function DeclineTradeOfferAsync Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, nullptr, "DeclineTradeOfferAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::SteamCoreWebAsyncActionDeclineTradeOffer_eventDeclineTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionDeclineTradeOffer Function DeclineTradeOfferAsync **

// ********** Begin Class USteamCoreWebAsyncActionDeclineTradeOffer ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer;
UClass* USteamCoreWebAsyncActionDeclineTradeOffer::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionDeclineTradeOffer;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionDeclineTradeOffer"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionDeclineTradeOffer,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_NoRegister()
{
	return USteamCoreWebAsyncActionDeclineTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetTradeOffersSummary\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetTradeOffersSummary\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionDeclineTradeOffer constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionDeclineTradeOffer constinit property declarations **
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DeclineTradeOfferAsync"), .Pointer = &USteamCoreWebAsyncActionDeclineTradeOffer::execDeclineTradeOfferAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionDeclineTradeOffer_DeclineTradeOfferAsync, "DeclineTradeOfferAsync" }, // 1167428883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionDeclineTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionDeclineTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionDeclineTradeOffer()
{
	UClass* Class = USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer.OuterSingleton;
}
USteamCoreWebAsyncActionDeclineTradeOffer::USteamCoreWebAsyncActionDeclineTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionDeclineTradeOffer);
USteamCoreWebAsyncActionDeclineTradeOffer::~USteamCoreWebAsyncActionDeclineTradeOffer() {}
// ********** End Class USteamCoreWebAsyncActionDeclineTradeOffer **********************************

// ********** Begin Class USteamCoreWebAsyncActionCancelTradeOffer Function CancelTradeOfferAsync **
struct Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics
{
	struct SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString TradeOfferId;
		USteamCoreWebAsyncActionCancelTradeOffer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|EconService|Async" },
		{ "Comment", "/**\n\x09* Cancel a trade offer we sent\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09TradeOfferId\n\x09*/" },
		{ "DisplayName", "Cancel Trade Offer" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "Cancel a trade offer we sent\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        TradeOfferId" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelTradeOfferAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TradeOfferId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelTradeOfferAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelTradeOfferAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId = { "TradeOfferId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, TradeOfferId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_TradeOfferId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers) < 2048);
// ********** End Function CancelTradeOfferAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, nullptr, "CancelTradeOfferAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::SteamCoreWebAsyncActionCancelTradeOffer_eventCancelTradeOfferAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
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
// ********** End Class USteamCoreWebAsyncActionCancelTradeOffer Function CancelTradeOfferAsync ****

// ********** Begin Class USteamCoreWebAsyncActionCancelTradeOffer *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer;
UClass* USteamCoreWebAsyncActionCancelTradeOffer::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionCancelTradeOffer;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionCancelTradeOffer"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionCancelTradeOffer,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_NoRegister()
{
	return USteamCoreWebAsyncActionCancelTradeOffer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionCancelTradeOffer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "EconService/WebEconServiceAsyncActions.h" },
		{ "ModuleRelativePath", "Public/EconService/WebEconServiceAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionCancelTradeOffer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionCancelTradeOffer constinit property declarations *
// ********** End Class USteamCoreWebAsyncActionCancelTradeOffer constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelTradeOfferAsync"), .Pointer = &USteamCoreWebAsyncActionCancelTradeOffer::execCancelTradeOfferAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionCancelTradeOffer_CancelTradeOfferAsync, "CancelTradeOfferAsync" }, // 2236884419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionCancelTradeOffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionCancelTradeOffer::StaticRegisterNativesUSteamCoreWebAsyncActionCancelTradeOffer()
{
	UClass* Class = USteamCoreWebAsyncActionCancelTradeOffer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer.OuterSingleton;
}
USteamCoreWebAsyncActionCancelTradeOffer::USteamCoreWebAsyncActionCancelTradeOffer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionCancelTradeOffer);
USteamCoreWebAsyncActionCancelTradeOffer::~USteamCoreWebAsyncActionCancelTradeOffer() {}
// ********** End Class USteamCoreWebAsyncActionCancelTradeOffer ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeHistory, USteamCoreWebAsyncActionGetTradeHistory::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeHistory"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeHistory), 1788846624U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushInventoryCache, USteamCoreWebAsyncActionFlushInventoryCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushInventoryCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushInventoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushInventoryCache), 2949034235U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, USteamCoreWebAsyncActionFlushAssetAppearanceCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushAssetAppearanceCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushAssetAppearanceCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushAssetAppearanceCache), 1531678277U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionFlushContextCache, USteamCoreWebAsyncActionFlushContextCache::StaticClass, TEXT("USteamCoreWebAsyncActionFlushContextCache"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionFlushContextCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionFlushContextCache), 2468701098U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffers, USteamCoreWebAsyncActionGetTradeOffers::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffers"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffers), 1714964186U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffer, USteamCoreWebAsyncActionGetTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffer), 3913994417U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, USteamCoreWebAsyncActionGetTradeOffersSummary::StaticClass, TEXT("USteamCoreWebAsyncActionGetTradeOffersSummary"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetTradeOffersSummary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetTradeOffersSummary), 613627496U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, USteamCoreWebAsyncActionDeclineTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionDeclineTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionDeclineTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionDeclineTradeOffer), 3325249551U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionCancelTradeOffer, USteamCoreWebAsyncActionCancelTradeOffer::StaticClass, TEXT("USteamCoreWebAsyncActionCancelTradeOffer"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionCancelTradeOffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionCancelTradeOffer), 3981135051U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h__Script_SteamCoreWeb_1658132151{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_EconService_WebEconServiceAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
