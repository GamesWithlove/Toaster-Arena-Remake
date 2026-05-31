// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamEconomy/WebSteamEconomy.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebSteamEconomy() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebSteamEconomy Function CanTrade ***************************************
struct Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics
{
	struct WebSteamEconomy_eventCanTrade_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TargetId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Can trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09That the Key is associated with. Must be a steam economy app.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user attempting to initiate a trade\n\x09* @param\x09TargetId (int64)\x09SteamID of user that is the target of the trade invitation\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Can trade\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           That the Key is associated with. Must be a steam economy app.\n@param        SteamId                         SteamID of user attempting to initiate a trade\n@param        TargetId (int64)        SteamID of user that is the target of the trade invitation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanTrade constinit property declarations ******************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanTrade constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanTrade Property Definitions *****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventCanTrade_Parms, TargetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::NewProp_TargetId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers) < 2048);
// ********** End Function CanTrade Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "CanTrade", 	Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::WebSteamEconomy_eventCanTrade_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::WebSteamEconomy_eventCanTrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_CanTrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_CanTrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execCanTrade)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TargetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CanTrade(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TargetId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function CanTrade *****************************************

// ********** Begin Class UWebSteamEconomy Function FinalizeAssetTransaction ***********************
struct Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics
{
	struct WebSteamEconomy_eventFinalizeAssetTransaction_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString TxnId;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Finalize Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09SteamID of the user making a purchase\n\x09* @param\x09TxnId\x09\x09The transaction ID\n\x09* @param\x09Language\x09The local Language for the user\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Finalize Asset Transaction\n\n@param        Key                     Steamworks Web API publisher authentication Key.\n@param        AppId           The app ID the user is buying assets for\n@param        SteamId         SteamID of the user making a purchase\n@param        TxnId           The transaction ID\n@param        Language        The local Language for the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeAssetTransaction constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TxnId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeAssetTransaction constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeAssetTransaction Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId = { "TxnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, TxnId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventFinalizeAssetTransaction_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_TxnId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers) < 2048);
// ********** End Function FinalizeAssetTransaction Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "FinalizeAssetTransaction", 	Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::WebSteamEconomy_eventFinalizeAssetTransaction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::WebSteamEconomy_eventFinalizeAssetTransaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execFinalizeAssetTransaction)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TxnId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinalizeAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_TxnId,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function FinalizeAssetTransaction *************************

// ********** Begin Class UWebSteamEconomy Function GetAssetClassInfo ******************************
struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics
{
	struct WebSteamEconomy_eventGetAssetClassInfo_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Language;
		int32 ClassCount;
		FString ClassId;
		FString InstanceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Asset Class Info\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09* @param\x09""ClassCount\x09\x09Number of classes requested. Must be at least one.\n\x09* @param\x09""ClassId\x09\x09\x09""Class ID of the nth class.\n\x09* @param\x09InstanceId\x09\x09Instance ID of the nth class.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Asset Class Info\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Language                The user's local Language\n@param        ClassCount              Number of classes requested. Must be at least one.\n@param        ClassId                 Class ID of the nth class.\n@param        InstanceId              Instance ID of the nth class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetClassInfo constinit property declarations *********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClassCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetClassInfo constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetClassInfo Property Definitions ********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassCount = { "ClassCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, ClassCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId = { "ClassId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, ClassId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetClassInfo_Parms, InstanceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_ClassId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::NewProp_InstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers) < 2048);
// ********** End Function GetAssetClassInfo Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetClassInfo", 	Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::WebSteamEconomy_eventGetAssetClassInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::WebSteamEconomy_eventGetAssetClassInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetClassInfo)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FIntProperty,Z_Param_ClassCount);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassId);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAssetClassInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Language,Z_Param_ClassCount,Z_Param_ClassId,Z_Param_InstanceId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function GetAssetClassInfo ********************************

// ********** Begin Class UWebSteamEconomy Function GetAssetPrices *********************************
struct Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics
{
	struct WebSteamEconomy_eventGetAssetPrices_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Currency;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Returns prices and categories for items that users are able to purchase.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09""Currency\x09\x09The currency to filter for\n\x09* @param\x09Language\x09\x09The user's local Language\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Returns prices and categories for items that users are able to purchase.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        Currency                The currency to filter for\n@param        Language                The user's local Language" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAssetPrices constinit property declarations ************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAssetPrices constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAssetPrices Property Definitions ***********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetAssetPrices_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers) < 2048);
// ********** End Function GetAssetPrices Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetAssetPrices", 	Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::WebSteamEconomy_eventGetAssetPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::WebSteamEconomy_eventGetAssetPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execGetAssetPrices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAssetPrices(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Currency,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function GetAssetPrices ***********************************

// ********** Begin Class UWebSteamEconomy Function GetExportedAssetsForUser ***********************
struct Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics
{
	struct WebSteamEconomy_eventGetExportedAssetsForUser_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ContextId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Exported Assets for User\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user\n\x09* @param\x09""AppId\x09\x09\x09\x09The app to get exported items from.\n\x09* @param\x09""ContextId (int64)\x09The context in the app to get exported items from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Exported Assets for User\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         SteamID of user\n@param        AppId                           The app to get exported items from.\n@param        ContextId (int64)       The context in the app to get exported items from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExportedAssetsForUser constinit property declarations **************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ContextId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExportedAssetsForUser constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExportedAssetsForUser Property Definitions *************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetExportedAssetsForUser_Parms, ContextId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::NewProp_ContextId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers) < 2048);
// ********** End Function GetExportedAssetsForUser Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetExportedAssetsForUser", 	Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::WebSteamEconomy_eventGetExportedAssetsForUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::WebSteamEconomy_eventGetExportedAssetsForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execGetExportedAssetsForUser)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ContextId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetExportedAssetsForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ContextId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function GetExportedAssetsForUser *************************

// ********** Begin Class UWebSteamEconomy Function GetMarketPrices ********************************
struct Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics
{
	struct WebSteamEconomy_eventGetMarketPrices_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Get Market Prices\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Get Market Prices\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMarketPrices constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMarketPrices constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMarketPrices Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventGetMarketPrices_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers) < 2048);
// ********** End Function GetMarketPrices Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "GetMarketPrices", 	Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::WebSteamEconomy_eventGetMarketPrices_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::WebSteamEconomy_eventGetMarketPrices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execGetMarketPrices)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMarketPrices(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function GetMarketPrices **********************************

// ********** Begin Class UWebSteamEconomy Function StartAssetTransaction **************************
struct Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics
{
	struct WebSteamEconomy_eventStartAssetTransaction_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString AssetId;
		int32 AssetQuantity;
		FString Currency;
		FString Language;
		FString Ipaddress;
		FString Referer;
		bool bClientAuth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Start Asset Transaction\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamId\x09\x09\x09\x09SteamID of user making a purchase\n\x09* @param\x09""AssetId\x09\x09\x09\x09The ID of the first asset the user is buying - there must be at least one\n\x09* @param\x09""AssetQuantity\x09\x09The quantity of assetid0's the the user is buying\n\x09* @param\x09""Currency\x09\x09\x09The local currency for the user\n\x09* @param\x09Language\x09\x09\x09The local Language for the user\n\x09* @param\x09Ipaddress\x09\x09\x09The user's IP address\n\x09* @param\x09Referer\x09\x09\x09\x09The referring URL\n\x09* @param\x09""bClientAuth\x09\x09\x09If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Start Asset Transaction\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The app ID the user is buying assets for\n@param        SteamId                         SteamID of user making a purchase\n@param        AssetId                         The ID of the first asset the user is buying - there must be at least one\n@param        AssetQuantity           The quantity of assetid0's the the user is buying\n@param        Currency                        The local currency for the user\n@param        Language                        The local Language for the user\n@param        Ipaddress                       The user's IP address\n@param        Referer                         The referring URL\n@param        bClientAuth                     If true (default is false), the authorization will appear in the user's steam client overlay, rather than as a web page - useful for stores that are embedded in products." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAssetTransaction constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetQuantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Referer;
	static void NewProp_bClientAuth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAuth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAssetTransaction constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAssetTransaction Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId = { "AssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AssetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetQuantity = { "AssetQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, AssetQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer = { "Referer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartAssetTransaction_Parms, Referer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit(void* Obj)
{
	((WebSteamEconomy_eventStartAssetTransaction_Parms*)Obj)->bClientAuth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth = { "bClientAuth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebSteamEconomy_eventStartAssetTransaction_Parms), &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_AssetQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_Referer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::NewProp_bClientAuth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers) < 2048);
// ********** End Function StartAssetTransaction Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartAssetTransaction", 	Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::WebSteamEconomy_eventStartAssetTransaction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::WebSteamEconomy_eventStartAssetTransaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execStartAssetTransaction)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AssetQuantity);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_PROPERTY(FStrProperty,Z_Param_Referer);
	P_GET_UBOOL(Z_Param_bClientAuth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAssetTransaction(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_AssetId,Z_Param_AssetQuantity,Z_Param_Currency,Z_Param_Language,Z_Param_Ipaddress,Z_Param_Referer,Z_Param_bClientAuth);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function StartAssetTransaction ****************************

// ********** Begin Class UWebSteamEconomy Function StartTrade *************************************
struct Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics
{
	struct WebSteamEconomy_eventStartTrade_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamIDd;
		FString SteamId2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|SteamEconomy" },
		{ "Comment", "/**\n\x09* Start Trade\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09The app ID the user is buying assets for\n\x09* @param\x09SteamIDd\x09\x09SteamID of first user in the trade\n\x09* @param\x09SteamId2\x09\x09SteamID of second user in the trade\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
		{ "ToolTip", "Start Trade\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        AppId                   The app ID the user is buying assets for\n@param        SteamIDd                SteamID of first user in the trade\n@param        SteamId2                SteamID of second user in the trade" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartTrade constinit property declarations ****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIDd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartTrade constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartTrade Property Definitions ***************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd = { "SteamIDd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, SteamIDd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2 = { "SteamId2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebSteamEconomy_eventStartTrade_Parms, SteamId2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamIDd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::NewProp_SteamId2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers) < 2048);
// ********** End Function StartTrade Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebSteamEconomy, nullptr, "StartTrade", 	Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::WebSteamEconomy_eventStartTrade_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::WebSteamEconomy_eventStartTrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebSteamEconomy_StartTrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSteamEconomy_StartTrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebSteamEconomy::execStartTrade)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIDd);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTrade(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamIDd,Z_Param_SteamId2);
	P_NATIVE_END;
}
// ********** End Class UWebSteamEconomy Function StartTrade ***************************************

// ********** Begin Class UWebSteamEconomy *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebSteamEconomy;
UClass* UWebSteamEconomy::GetPrivateStaticClass()
{
	using TClass = UWebSteamEconomy;
	if (!Z_Registration_Info_UClass_UWebSteamEconomy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebSteamEconomy"),
			Z_Registration_Info_UClass_UWebSteamEconomy.InnerSingleton,
			StaticRegisterNativesUWebSteamEconomy,
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
	return Z_Registration_Info_UClass_UWebSteamEconomy.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebSteamEconomy_NoRegister()
{
	return UWebSteamEconomy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebSteamEconomy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamEconomy/WebSteamEconomy.h" },
		{ "ModuleRelativePath", "Public/SteamEconomy/WebSteamEconomy.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebSteamEconomy constinit property declarations *************************
// ********** End Class UWebSteamEconomy constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanTrade"), .Pointer = &UWebSteamEconomy::execCanTrade },
		{ .NameUTF8 = UTF8TEXT("FinalizeAssetTransaction"), .Pointer = &UWebSteamEconomy::execFinalizeAssetTransaction },
		{ .NameUTF8 = UTF8TEXT("GetAssetClassInfo"), .Pointer = &UWebSteamEconomy::execGetAssetClassInfo },
		{ .NameUTF8 = UTF8TEXT("GetAssetPrices"), .Pointer = &UWebSteamEconomy::execGetAssetPrices },
		{ .NameUTF8 = UTF8TEXT("GetExportedAssetsForUser"), .Pointer = &UWebSteamEconomy::execGetExportedAssetsForUser },
		{ .NameUTF8 = UTF8TEXT("GetMarketPrices"), .Pointer = &UWebSteamEconomy::execGetMarketPrices },
		{ .NameUTF8 = UTF8TEXT("StartAssetTransaction"), .Pointer = &UWebSteamEconomy::execStartAssetTransaction },
		{ .NameUTF8 = UTF8TEXT("StartTrade"), .Pointer = &UWebSteamEconomy::execStartTrade },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSteamEconomy_CanTrade, "CanTrade" }, // 1942445773
		{ &Z_Construct_UFunction_UWebSteamEconomy_FinalizeAssetTransaction, "FinalizeAssetTransaction" }, // 992175566
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetClassInfo, "GetAssetClassInfo" }, // 1323658689
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetAssetPrices, "GetAssetPrices" }, // 1334374501
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetExportedAssetsForUser, "GetExportedAssetsForUser" }, // 2779467910
		{ &Z_Construct_UFunction_UWebSteamEconomy_GetMarketPrices, "GetMarketPrices" }, // 2500384632
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartAssetTransaction, "StartAssetTransaction" }, // 2098745990
		{ &Z_Construct_UFunction_UWebSteamEconomy_StartTrade, "StartTrade" }, // 268710291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSteamEconomy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebSteamEconomy_Statics
UObject* (*const Z_Construct_UClass_UWebSteamEconomy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamEconomy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams = {
	&UWebSteamEconomy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebSteamEconomy_Statics::Class_MetaDataParams)
};
void UWebSteamEconomy::StaticRegisterNativesUWebSteamEconomy()
{
	UClass* Class = UWebSteamEconomy::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebSteamEconomy_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebSteamEconomy()
{
	if (!Z_Registration_Info_UClass_UWebSteamEconomy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSteamEconomy.OuterSingleton, Z_Construct_UClass_UWebSteamEconomy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebSteamEconomy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebSteamEconomy);
UWebSteamEconomy::~UWebSteamEconomy() {}
// ********** End Class UWebSteamEconomy ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebSteamEconomy, UWebSteamEconomy::StaticClass, TEXT("UWebSteamEconomy"), &Z_Registration_Info_UClass_UWebSteamEconomy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSteamEconomy), 3870147745U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h__Script_SteamCoreWeb_3224999194{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamEconomy_WebSteamEconomy_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
