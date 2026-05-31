// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicroTxn/WebMicroTxn.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebMicroTxn() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebMicroTxn Function AdjustAgreement ************************************
struct Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics
{
	struct WebMicroTxn_eventAdjustAgreement_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
		FString NextProcessDate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Add time to the payment schedule of an agreement with billing type \"steam\".\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is adjusting the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09NextProcessDate\x09\x09""Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Add time to the payment schedule of an agreement with billing type \"steam\".\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is adjusting the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for.\n@param        NextProcessDate         Date that next recurring payment should be initiated. Format is YYYYMMDD. Date can only be adjusted forward indicating you want to add time to the subscription. If the date exceeds the end date of the subscription, the end date will be extended." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AdjustAgreement constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NextProcessDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AdjustAgreement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AdjustAgreement Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_NextProcessDate = { "NextProcessDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventAdjustAgreement_Parms, NextProcessDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::NewProp_NextProcessDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers) < 2048);
// ********** End Function AdjustAgreement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "AdjustAgreement", 	Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::WebMicroTxn_eventAdjustAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::WebMicroTxn_eventAdjustAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execAdjustAgreement)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_NextProcessDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId,Z_Param_NextProcessDate);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function AdjustAgreement **************************************

// ********** Begin Class UWebMicroTxn Function CancelAgreement ************************************
struct Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics
{
	struct WebMicroTxn_eventCancelAgreement_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Cancels a recurring billing agreement (subscription).\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client that is canceling the agreement.\n\x09* @param\x09""AgreementId\x09\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of the game the agreement is for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Cancels a recurring billing agreement (subscription).\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client that is canceling the agreement.\n@param        AgreementId                     Unique 64-bit Steam billing agreement ID.\n@param        AppId                           App ID of the game the agreement is for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAgreement constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CancelAgreement constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CancelAgreement Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventCancelAgreement_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers) < 2048);
// ********** End Function CancelAgreement Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "CancelAgreement", 	Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::WebMicroTxn_eventCancelAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::WebMicroTxn_eventCancelAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_CancelAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_CancelAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execCancelAgreement)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function CancelAgreement **************************************

// ********** Begin Class UWebMicroTxn Function FinalizeTxn ****************************************
struct Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics
{
	struct WebMicroTxn_eventFinalizeTxn_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString OrderId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Completes a purchase that was started by the InitTxn API.\n\x09*\n\x09* This command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\n\x09* Notification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam). \n\x09* The usersession value specified in InitTxn determines the notification mechanism.\n\x09* A successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Completes a purchase that was started by the InitTxn API.\n\nThis command will capture funds for a transaction and should only be called after the user has authorized the transaction and you have received notification that the authorization was successful.\nNotification of authorization comes either through the Steam client (your game registers to receive notification) or through the user being redirected back to your web site (return URL specified when you redirect a user's web session to Steam).\nThe usersession value specified in InitTxn determines the notification mechanism.\nA successful response to this command means payment has been completed and you can safely grant items to the user. In the event of a timeout or some other communication error, use either the QueryTxn or GetReport APIs to get status on the transaction.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        AppId                           App ID for game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinalizeTxn constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinalizeTxn constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinalizeTxn Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventFinalizeTxn_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers) < 2048);
// ********** End Function FinalizeTxn Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "FinalizeTxn", 	Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::WebMicroTxn_eventFinalizeTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::WebMicroTxn_eventFinalizeTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execFinalizeTxn)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinalizeTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function FinalizeTxn ******************************************

// ********** Begin Class UWebMicroTxn Function GetReport ******************************************
struct Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics
{
	struct WebMicroTxn_eventGetReport_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString Time;
		FString Type;
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09* @param\x09Time\x09\x09\x09\x09Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n\x09* @param\x09Type\x09\x09\x09\x09Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n\x09* @param\x09MaxResults\x09\x09\x09Maximum number of results to return in report. (Default is 1000 if no value is set)\n\x09*/" },
		{ "CPP_Default_MaxResults", "1000" },
		{ "CPP_Default_Time", "2010-01-01T00:00:00Z" },
		{ "CPP_Default_Type", "GAMESALES" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Steam offers transaction reports that can be downloaded for reconciliation purposes. These reports show detailed information about each transaction that affects the settlement of funds into your accounts.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID for game.\n@param        Time                            Start time of the report. (RFC 3339 UTC formatted like: 2010-01-01T00:00:00Z)\n@param        Type                            Report type (One of: \"GAMESALES\", \"STEAMSTORESALES\", \"SETTLEMENT\")\n@param        MaxResults                      Maximum number of results to return in report. (Default is 1000 if no value is set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetReport constinit property declarations *****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetReport constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetReport Property Definitions ****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetReport_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers) < 2048);
// ********** End Function GetReport Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetReport", 	Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::WebMicroTxn_eventGetReport_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::WebMicroTxn_eventGetReport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_GetReport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetReport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execGetReport)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Time);
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReport(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_Time,Z_Param_Type,Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function GetReport ********************************************

// ********** Begin Class UWebMicroTxn Function GetUserAgreementInfo *******************************
struct Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics
{
	struct WebMicroTxn_eventGetUserAgreementInfo_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID for game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Get detailed information of all recurring billing agreements (subscriptions) for a user.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID for game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserAgreementInfo constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserAgreementInfo constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserAgreementInfo Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserAgreementInfo_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers) < 2048);
// ********** End Function GetUserAgreementInfo Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserAgreementInfo", 	Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::WebMicroTxn_eventGetUserAgreementInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::WebMicroTxn_eventGetUserAgreementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execGetUserAgreementInfo)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserAgreementInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function GetUserAgreementInfo *********************************

// ********** Begin Class UWebMicroTxn Function GetUserInfo ****************************************
struct Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics
{
	struct WebMicroTxn_eventGetUserInfo_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		FString Ipaddress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Retrieves details for a user's purchasing info.\n\x09*\n\x09* These details are based upon the user's Steam wallet.\n\x09* For new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Retrieves details for a user's purchasing info.\n\nThese details are based upon the user's Steam wallet.\nFor new accounts or accounts that do not yet have a Steam wallet, the information returned will be based off of the user's IP address. The IP will be taken from the user's Steam client session if they are logged in, otherwise from the ipaddress API parameter. If the user does not have a wallet, is not logged in through the Steam client, and you have not supplied an IP address, this call will return an error indicating the user is not logged in.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         Steam ID of the client.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if usersession in InitTxn was set to web." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserInfo constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserInfo constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserInfo Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventGetUserInfo_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::NewProp_Ipaddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers) < 2048);
// ********** End Function GetUserInfo Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "GetUserInfo", 	Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::WebMicroTxn_eventGetUserInfo_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::WebMicroTxn_eventGetUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_GetUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_GetUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execGetUserInfo)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserInfo(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Ipaddress);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function GetUserInfo ******************************************

// ********** Begin Class UWebMicroTxn Function InitTxn ********************************************
struct Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics
{
	struct WebMicroTxn_eventInitTxn_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString OrderId;
		FString SteamId;
		int32 AppId;
		FString Language;
		FString Currency;
		FString UserSession;
		FString Ipaddress;
		TArray<int32> ItemID;
		TArray<int32> Quantity;
		TArray<FString> Amount;
		TArray<FString> Description;
		TArray<FString> Category;
		TArray<int32> AssociatedBundle;
		TArray<FString> BillingType;
		TArray<FString> StartDate;
		TArray<FString> EndDate;
		TArray<FString> Period;
		TArray<int32> Frequency;
		TArray<FString> RecurringAmt;
		TArray<int32> BundleCount;
		TArray<int32> BundleId;
		TArray<int32> BundleQty;
		TArray<FString> BundleDesc;
		TArray<FString> BundleCategory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "category, associatedBundle, billingType, startDate, endDate, period, frequency, recurringAmt, bundleCount, bundleID, bundleQty, bundleDesc, bundleCategory" },
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\x09*\n\x09* This command allows you to create a shopping cart of one or more items for a user. \n\x09* The cost and descriptions of these items will be displayed to the user for their approval. \n\x09* The purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\x09*\n\x09* A successful response to this command means the transaction has been created. \n\x09* If the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase. \n\x09* For a web interface, redirect the user to the steam URL returned in the response. \n\x09* In the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\x09*\n\x09* When a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client. \n\x09* Web sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order\n\x09* @param\x09SteamId\x09\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09Language\x09\x09\x09ISO 639-1 language code of the item descriptions.\n\x09* @param\x09""Currency\x09\x09\x09ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n\x09* @param\x09UserSession\x09\x09\x09Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n\x09* @param\x09Ipaddress\x09\x09\x09IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n\x09* @param\x09ItemID\x09\x09\x09\x09""3rd party ID for item.\n\x09* @param\x09Quantity\x09\x09\x09Quantity of this item.\n\x09* @param\x09""Amount\x09\x09\x09\x09Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n\x09* @param\x09""Description\x09\x09\x09""Description of item.\n\x09* @param\x09""Category\x09\x09\x09Optional category grouping for item.\n\x09* @param\x09""AssociatedBundle\x09Optional bundleid of associated bundle.\n\x09* @param\x09""BillingType\x09\x09\x09Optional recurring billing type.\n\x09* @param\x09StartDate\x09\x09\x09Optional start date for recurring billing.\n\x09* @param\x09""EndDate\x09\x09\x09\x09Optional end date for recurring billing.\n\x09* @param\x09Period\x09\x09\x09\x09Optional period for recurring billing.\n\x09* @param\x09""Frequency\x09\x09\x09Optional frequency for recurring billing.\n\x09* @param\x09RecurringAmt\x09\x09Optional amount to be billed for future recurring billing transactions.\n\x09* @param\x09""BundleCount\x09\x09\x09Number of bundles in cart.\n\x09* @param\x09""BundleId\x09\x09\x09""3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n\x09* @param\x09""BundleQty\x09\x09\x09Quantity of this bundle.\n\x09* @param\x09""BundleDesc\x09\x09\x09""Description of bundle.\n\x09* @param\x09""BundleCategory\x09\x09Optional category grouping for bundle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Creates a new purchase. Send the order information along with the Steam ID to seed the transaction on Steam.\n\nThis command allows you to create a shopping cart of one or more items for a user.\nThe cost and descriptions of these items will be displayed to the user for their approval.\nThe purchase interface can be configured for either the Steam client or a web browser depending on if you are running a purchase in-game or from a web page.\n\nA successful response to this command means the transaction has been created.\nIf the purchase interface is the Steam client, the user will automatically be presented with a dialog requesting authorization for the purchase.\nFor a web interface, redirect the user to the steam URL returned in the response.\nIn the event of a timeout or some other communication error, abandon the transaction and create a new one.\n\nWhen a \"client\" user session is indicated via [param]usersession[/param] the user will be required to approve the transaction from within the game overlay on the client.\nWeb sessions will require the user to be logged into Steam via a browser where the transaction will be presented and an approval option displayed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        OrderId                         Unique 64-bit ID for order\n@param        SteamId                         Steam ID of the client.\n@param        AppId                           App ID of game this transaction is for.\n@param        Language                        ISO 639-1 language code of the item descriptions.\n@param        Currency                        ISO 4217 currency code. See Supported Currencies for proper format of each currency. https://partner.steamgames.com/doc/store/pricing/currencies\n@param        UserSession                     Session where user will authorize the transaction. Valid options are \"client\" or \"web\". If this parameter is not supplied, the interface will be assumed to be through a currently logged in Steam client session.\n@param        Ipaddress                       IP address of user in string format (xxx.xxx.xxx.xxx). Only required if [param]usersession[/param] is set to web.\n@param        ItemID                          3rd party ID for item.\n@param        Quantity                        Quantity of this item.\n@param        Amount                          Total cost (in cents) of item(s) to be charged at this time. See Supported Currencies for proper format of each amount. Note that the amount you pass needs to be in the format that matches the \"currency\" code you pass.\n@param        Description                     Description of item.\n@param        Category                        Optional category grouping for item.\n@param        AssociatedBundle        Optional bundleid of associated bundle.\n@param        BillingType                     Optional recurring billing type.\n@param        StartDate                       Optional start date for recurring billing.\n@param        EndDate                         Optional end date for recurring billing.\n@param        Period                          Optional period for recurring billing.\n@param        Frequency                       Optional frequency for recurring billing.\n@param        RecurringAmt            Optional amount to be billed for future recurring billing transactions.\n@param        BundleCount                     Number of bundles in cart.\n@param        BundleId                        3rd party ID of the bundle. This shares the same ID space as 3rd party items.\n@param        BundleQty                       Quantity of this bundle.\n@param        BundleDesc                      Description of bundle.\n@param        BundleCategory          Optional category grouping for bundle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitTxn constinit property declarations *******************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSession;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ipaddress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Amount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssociatedBundle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssociatedBundle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BillingType_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BillingType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartDate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndDate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Period_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Period;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecurringAmt_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RecurringAmt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BundleQty_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleQty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleDesc_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BundleCategory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BundleCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitTxn constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitTxn Property Definitions ******************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_UserSession = { "UserSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, UserSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Ipaddress = { "Ipaddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Ipaddress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemID_Inner = { "ItemID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, ItemID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity_Inner = { "Quantity", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Quantity), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount_Inner = { "Amount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Amount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description_Inner = { "Description", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Description), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Category), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AssociatedBundle_Inner = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AssociatedBundle = { "AssociatedBundle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, AssociatedBundle), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BillingType_Inner = { "BillingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BillingType = { "BillingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BillingType), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_StartDate_Inner = { "StartDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, StartDate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_EndDate_Inner = { "EndDate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, EndDate), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period_Inner = { "Period", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Period), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency_Inner = { "Frequency", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, Frequency), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_RecurringAmt_Inner = { "RecurringAmt", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_RecurringAmt = { "RecurringAmt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, RecurringAmt), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCount_Inner = { "BundleCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCount = { "BundleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BundleCount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleId_Inner = { "BundleId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleId = { "BundleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BundleId), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleQty_Inner = { "BundleQty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleQty = { "BundleQty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BundleQty), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleDesc_Inner = { "BundleDesc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleDesc = { "BundleDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BundleDesc), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCategory_Inner = { "BundleCategory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCategory = { "BundleCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventInitTxn_Parms, BundleCategory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_UserSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Ipaddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AssociatedBundle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_AssociatedBundle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BillingType_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BillingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_StartDate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_EndDate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_EndDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_RecurringAmt_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_RecurringAmt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleQty_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleQty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleDesc_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCategory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::NewProp_BundleCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers) < 2048);
// ********** End Function InitTxn Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "InitTxn", 	Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::WebMicroTxn_eventInitTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::WebMicroTxn_eventInitTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_InitTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_InitTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execInitTxn)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSession);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ipaddress);
	P_GET_TARRAY(int32,Z_Param_ItemID);
	P_GET_TARRAY(int32,Z_Param_Quantity);
	P_GET_TARRAY(FString,Z_Param_Amount);
	P_GET_TARRAY(FString,Z_Param_Description);
	P_GET_TARRAY(FString,Z_Param_Category);
	P_GET_TARRAY(int32,Z_Param_AssociatedBundle);
	P_GET_TARRAY(FString,Z_Param_BillingType);
	P_GET_TARRAY(FString,Z_Param_StartDate);
	P_GET_TARRAY(FString,Z_Param_EndDate);
	P_GET_TARRAY(FString,Z_Param_Period);
	P_GET_TARRAY(int32,Z_Param_Frequency);
	P_GET_TARRAY(FString,Z_Param_RecurringAmt);
	P_GET_TARRAY(int32,Z_Param_BundleCount);
	P_GET_TARRAY(int32,Z_Param_BundleId);
	P_GET_TARRAY(int32,Z_Param_BundleQty);
	P_GET_TARRAY(FString,Z_Param_BundleDesc);
	P_GET_TARRAY(FString,Z_Param_BundleCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_SteamId,Z_Param_AppId,Z_Param_Language,Z_Param_Currency,Z_Param_UserSession,Z_Param_Ipaddress,Z_Param_ItemID,Z_Param_Quantity,Z_Param_Amount,Z_Param_Description,Z_Param_Category,Z_Param_AssociatedBundle,Z_Param_BillingType,Z_Param_StartDate,Z_Param_EndDate,Z_Param_Period,Z_Param_Frequency,Z_Param_RecurringAmt,Z_Param_BundleCount,Z_Param_BundleId,Z_Param_BundleQty,Z_Param_BundleDesc,Z_Param_BundleCategory);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function InitTxn **********************************************

// ********** Begin Class UWebMicroTxn Function MakeTransactionID **********************************
struct Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics
{
	struct WebMicroTxn_eventMakeTransactionID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Utility function to create a unique int64 transaction ID\n\x09* Blueprints don't support int64 which is why it returns a string value\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Utility function to create a unique int64 transaction ID\nBlueprints don't support int64 which is why it returns a string value" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeTransactionID constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeTransactionID constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeTransactionID Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventMakeTransactionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers) < 2048);
// ********** End Function MakeTransactionID Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "MakeTransactionID", 	Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::WebMicroTxn_eventMakeTransactionID_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::WebMicroTxn_eventMakeTransactionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execMakeTransactionID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UWebMicroTxn::MakeTransactionID();
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function MakeTransactionID ************************************

// ********** Begin Class UWebMicroTxn Function ProcessAgreement ***********************************
struct Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics
{
	struct WebMicroTxn_eventProcessAgreement_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString OrderId;
		FString SteamId;
		FString AgreementId;
		int32 AppId;
		int32 Amount;
		FString Currency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Initiate a recurring payment (subscription) for the user.\n\x09*\n\x09* A successful response means that Steam will initiate a billing cycle for the user.\n\x09* It does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09OrderId\x09\x09\x09Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n\x09* @param\x09SteamId\x09\x09\x09Steam ID of the client.\n\x09* @param\x09""AgreementId\x09\x09Unique 64-bit Steam billing agreement ID.\n\x09* @param\x09""AppId\x09\x09\x09""App ID of the game the agreement is for.\n\x09* @param\x09""Amount\x09\x09\x09Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n\x09* @param\x09""Currency\x09\x09ISO 4217 currency code of prices\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Initiate a recurring payment (subscription) for the user.\n\nA successful response means that Steam will initiate a billing cycle for the user.\nIt does not mean that the actual billing cycle was completed successfully. Use the GetReport or GetUserAgreementInfo APIs to check actual billing status.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        OrderId                 Unique 64-bit ID for order. If the recurring subscription was initiated from the Steam store, then this field will be 0.\n@param        SteamId                 Steam ID of the client.\n@param        AgreementId             Unique 64-bit Steam billing agreement ID.\n@param        AppId                   App ID of the game the agreement is for.\n@param        Amount                  Total cost (in cents). This value corresponds to an initial one-time amount to be immediately charged to a user.\n@param        Currency                ISO 4217 currency code of prices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessAgreement constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgreementId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessAgreement constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessAgreement Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AgreementId = { "AgreementId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, AgreementId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventProcessAgreement_Parms, Currency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AgreementId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::NewProp_Currency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers) < 2048);
// ********** End Function ProcessAgreement Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "ProcessAgreement", 	Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::WebMicroTxn_eventProcessAgreement_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::WebMicroTxn_eventProcessAgreement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execProcessAgreement)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AgreementId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessAgreement(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_SteamId,Z_Param_AgreementId,Z_Param_AppId,Z_Param_Amount,Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function ProcessAgreement *************************************

// ********** Begin Class UWebMicroTxn Function QueryTxn *******************************************
struct Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics
{
	struct WebMicroTxn_eventQueryTxn_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString OrderId;
		FString TransId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Query the status of an order that was previously created with InitTxn.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09TransId\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Query the status of an order that was previously created with InitTxn.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        TransId                         Unique 64-bit Steam transaction ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function QueryTxn constinit property declarations ******************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TransId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function QueryTxn constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function QueryTxn Property Definitions *****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_TransId = { "TransId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventQueryTxn_Parms, TransId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::NewProp_TransId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers) < 2048);
// ********** End Function QueryTxn Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "QueryTxn", 	Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::WebMicroTxn_eventQueryTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::WebMicroTxn_eventQueryTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_QueryTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_QueryTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execQueryTxn)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FStrProperty,Z_Param_TransId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueryTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_OrderId,Z_Param_TransId);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function QueryTxn *********************************************

// ********** Begin Class UWebMicroTxn Function RefundTxn ******************************************
struct Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics
{
	struct WebMicroTxn_eventRefundTxn_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString OrderId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|MicroTxn" },
		{ "Comment", "/**\n\x09* Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09""App ID of game this transaction is for.\n\x09* @param\x09OrderId\x09\x09\x09\x09Unique 64-bit ID for order.\n\x09* @param\x09transID\x09\x09\x09\x09Unique 64-bit Steam transaction ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
		{ "ToolTip", "Tells Steam to refund a user for a purchase. Refunds can only be made for the full value of the original order.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           App ID of game this transaction is for.\n@param        OrderId                         Unique 64-bit ID for order.\n@param        transID                         Unique 64-bit Steam transaction ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefundTxn constinit property declarations *****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrderId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefundTxn constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefundTxn Property Definitions ****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, OrderId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebMicroTxn_eventRefundTxn_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_OrderId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers) < 2048);
// ********** End Function RefundTxn Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebMicroTxn, nullptr, "RefundTxn", 	Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::WebMicroTxn_eventRefundTxn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::WebMicroTxn_eventRefundTxn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebMicroTxn_RefundTxn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebMicroTxn_RefundTxn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebMicroTxn::execRefundTxn)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_OrderId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefundTxn(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_OrderId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebMicroTxn Function RefundTxn ********************************************

// ********** Begin Class UWebMicroTxn *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebMicroTxn;
UClass* UWebMicroTxn::GetPrivateStaticClass()
{
	using TClass = UWebMicroTxn;
	if (!Z_Registration_Info_UClass_UWebMicroTxn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebMicroTxn"),
			Z_Registration_Info_UClass_UWebMicroTxn.InnerSingleton,
			StaticRegisterNativesUWebMicroTxn,
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
	return Z_Registration_Info_UClass_UWebMicroTxn.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebMicroTxn_NoRegister()
{
	return UWebMicroTxn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebMicroTxn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MicroTxn/WebMicroTxn.h" },
		{ "ModuleRelativePath", "Public/MicroTxn/WebMicroTxn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebMicroTxn constinit property declarations *****************************
// ********** End Class UWebMicroTxn constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AdjustAgreement"), .Pointer = &UWebMicroTxn::execAdjustAgreement },
		{ .NameUTF8 = UTF8TEXT("CancelAgreement"), .Pointer = &UWebMicroTxn::execCancelAgreement },
		{ .NameUTF8 = UTF8TEXT("FinalizeTxn"), .Pointer = &UWebMicroTxn::execFinalizeTxn },
		{ .NameUTF8 = UTF8TEXT("GetReport"), .Pointer = &UWebMicroTxn::execGetReport },
		{ .NameUTF8 = UTF8TEXT("GetUserAgreementInfo"), .Pointer = &UWebMicroTxn::execGetUserAgreementInfo },
		{ .NameUTF8 = UTF8TEXT("GetUserInfo"), .Pointer = &UWebMicroTxn::execGetUserInfo },
		{ .NameUTF8 = UTF8TEXT("InitTxn"), .Pointer = &UWebMicroTxn::execInitTxn },
		{ .NameUTF8 = UTF8TEXT("MakeTransactionID"), .Pointer = &UWebMicroTxn::execMakeTransactionID },
		{ .NameUTF8 = UTF8TEXT("ProcessAgreement"), .Pointer = &UWebMicroTxn::execProcessAgreement },
		{ .NameUTF8 = UTF8TEXT("QueryTxn"), .Pointer = &UWebMicroTxn::execQueryTxn },
		{ .NameUTF8 = UTF8TEXT("RefundTxn"), .Pointer = &UWebMicroTxn::execRefundTxn },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebMicroTxn_AdjustAgreement, "AdjustAgreement" }, // 1415832567
		{ &Z_Construct_UFunction_UWebMicroTxn_CancelAgreement, "CancelAgreement" }, // 1138353305
		{ &Z_Construct_UFunction_UWebMicroTxn_FinalizeTxn, "FinalizeTxn" }, // 2862505224
		{ &Z_Construct_UFunction_UWebMicroTxn_GetReport, "GetReport" }, // 3645624283
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserAgreementInfo, "GetUserAgreementInfo" }, // 1621227536
		{ &Z_Construct_UFunction_UWebMicroTxn_GetUserInfo, "GetUserInfo" }, // 2064592132
		{ &Z_Construct_UFunction_UWebMicroTxn_InitTxn, "InitTxn" }, // 3844885294
		{ &Z_Construct_UFunction_UWebMicroTxn_MakeTransactionID, "MakeTransactionID" }, // 3050625327
		{ &Z_Construct_UFunction_UWebMicroTxn_ProcessAgreement, "ProcessAgreement" }, // 3846051283
		{ &Z_Construct_UFunction_UWebMicroTxn_QueryTxn, "QueryTxn" }, // 3189777814
		{ &Z_Construct_UFunction_UWebMicroTxn_RefundTxn, "RefundTxn" }, // 3647784552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebMicroTxn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebMicroTxn_Statics
UObject* (*const Z_Construct_UClass_UWebMicroTxn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebMicroTxn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams = {
	&UWebMicroTxn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebMicroTxn_Statics::Class_MetaDataParams)
};
void UWebMicroTxn::StaticRegisterNativesUWebMicroTxn()
{
	UClass* Class = UWebMicroTxn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebMicroTxn_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebMicroTxn()
{
	if (!Z_Registration_Info_UClass_UWebMicroTxn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebMicroTxn.OuterSingleton, Z_Construct_UClass_UWebMicroTxn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebMicroTxn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebMicroTxn);
UWebMicroTxn::~UWebMicroTxn() {}
// ********** End Class UWebMicroTxn ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebMicroTxn, UWebMicroTxn::StaticClass, TEXT("UWebMicroTxn"), &Z_Registration_Info_UClass_UWebMicroTxn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebMicroTxn), 525977360U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h__Script_SteamCoreWeb_1987434150{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_MicroTxn_WebMicroTxn_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
