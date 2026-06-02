// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheatReporting/WebCheatReporting.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebCheatReporting() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebCheatReporting Function EndSecureMultiplayerSession ******************
struct Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics
{
	struct WebCheatReporting_eventEndSecureMultiplayerSession_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has ended.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndSecureMultiplayerSession constinit property declarations ***********
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndSecureMultiplayerSession constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndSecureMultiplayerSession Property Definitions **********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventEndSecureMultiplayerSession_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers) < 2048);
// ********** End Function EndSecureMultiplayerSession Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "EndSecureMultiplayerSession", 	Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::WebCheatReporting_eventEndSecureMultiplayerSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::WebCheatReporting_eventEndSecureMultiplayerSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execEndSecureMultiplayerSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function EndSecureMultiplayerSession ********************

// ********** Begin Class UWebCheatReporting Function GetCheatingReports ***************************
struct Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics
{
	struct WebCheatReporting_eventGetCheatingReports_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		int32 TimeEnd;
		int32 TimeBegin;
		FString ReportIdmin;
		bool bIncludeReports;
		bool bIncludeBans;
		FString SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09TimeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09TimeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09ReportIdmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09* @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09* @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09*/" },
		{ "CPP_Default_bIncludeBans", "false" },
		{ "CPP_Default_bIncludeReports", "false" },
		{ "CPP_Default_ReportIdmin", "0" },
		{ "CPP_Default_SteamId", "" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        TimeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        TimeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        ReportIdmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param        bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param        bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param        SteamId                         (Optional) Query just for this Steam ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCheatingReports constinit property declarations ********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportIdmin;
	static void NewProp_bIncludeReports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeReports;
	static void NewProp_bIncludeBans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBans;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCheatingReports constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCheatingReports Property Definitions *******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportIdmin = { "ReportIdmin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, ReportIdmin), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((WebCheatReporting_eventGetCheatingReports_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventGetCheatingReports_Parms), &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventGetCheatingReports_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_ReportIdmin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers) < 2048);
// ********** End Function GetCheatingReports Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "GetCheatingReports", 	Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::WebCheatReporting_eventGetCheatingReports_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::WebCheatReporting_eventGetCheatingReports_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execGetCheatingReports)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeEnd);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReportIdmin);
	P_GET_UBOOL(Z_Param_bIncludeReports);
	P_GET_UBOOL(Z_Param_bIncludeBans);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCheatingReports(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_TimeEnd,Z_Param_TimeBegin,Z_Param_ReportIdmin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function GetCheatingReports *****************************

// ********** Begin Class UWebCheatReporting Function RemovePlayerGameBan **************************
struct Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics
{
	struct WebCheatReporting_eventRemovePlayerGameBan_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Remove a game ban on a player.\n\x09*\n\x09* This is used if a Game ban is determined to be a false positive.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user to remove the game ban on.\n@param        AppId                   The App ID for the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemovePlayerGameBan constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemovePlayerGameBan constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemovePlayerGameBan Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRemovePlayerGameBan_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers) < 2048);
// ********** End Function RemovePlayerGameBan Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RemovePlayerGameBan", 	Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::WebCheatReporting_eventRemovePlayerGameBan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::WebCheatReporting_eventRemovePlayerGameBan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execRemovePlayerGameBan)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function RemovePlayerGameBan ****************************

// ********** Begin Class UWebCheatReporting Function ReportCheatData ******************************
struct Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics
{
	struct WebCheatReporting_eventReportCheatData_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PathAndFileName;
		FString WebCheatURL;
		FString TimeNow;
		FString TimeStarted;
		FString TimeStopped;
		FString CheatName;
		int32 GameProcessId;
		int32 CheatProcessId;
		FString CheatParam1;
		FString CheatParam2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09*\n\x09* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09PathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09* @param\x09WebCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09* @param\x09TimeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09* @param\x09TimeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09* @param\x09TimeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09* @param\x09""CheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09* @param\x09GameProcessId\x09\x09\x09Process ID of the running game.\n\x09* @param\x09""CheatProcessId\x09\x09\x09Process ID of the cheat process that ran.\n\x09* @param\x09""CheatParam1\x09(int64)\x09\x09""Extra cheat data. \n\x09* @param\x09""CheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 The Steam ID of the user to remove the game ban on.\n@param        AppId                                   The App ID for the game.\n@param        PathAndFileName                 Path and file name of the cheat executable.\n@param        WebCheatURL                             Web url where the cheat was found and downloaded.\n@param        TimeNow                                 Local system time now. 64 bit windows system time.\n@param        TimeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param        TimeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param        CheatName                               Descriptive name for the cheat.\n@param        GameProcessId                   Process ID of the running game.\n@param        CheatProcessId                  Process ID of the cheat process that ran.\n@param        CheatParam1     (int64)         Extra cheat data.\n@param        CheatParam2     (int64)         Extra cheat data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportCheatData constinit property declarations ***********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathAndFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WebCheatURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeNow;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeStarted;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TimeStopped;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameProcessId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheatProcessId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatParam1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatParam2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportCheatData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportCheatData Property Definitions **********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, PathAndFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL = { "WebCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, WebCheatURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeNow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeStarted), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, TimeStopped), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, GameProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatParam1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportCheatData_Parms, CheatParam2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_PathAndFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_WebCheatURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_TimeStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_GameProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::NewProp_CheatParam2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers) < 2048);
// ********** End Function ReportCheatData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportCheatData", 	Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::WebCheatReporting_eventReportCheatData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::WebCheatReporting_eventReportCheatData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportCheatData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportCheatData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execReportCheatData)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PathAndFileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_WebCheatURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeNow);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeStarted);
	P_GET_PROPERTY(FStrProperty,Z_Param_TimeStopped);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameProcessId);
	P_GET_PROPERTY(FIntProperty,Z_Param_CheatProcessId);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam1);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatParam2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportCheatData(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PathAndFileName,Z_Param_WebCheatURL,Z_Param_TimeNow,Z_Param_TimeStarted,Z_Param_TimeStopped,Z_Param_CheatName,Z_Param_GameProcessId,Z_Param_CheatProcessId,Z_Param_CheatParam1,Z_Param_CheatParam2);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function ReportCheatData ********************************

// ********** Begin Class UWebCheatReporting Function ReportPlayerCheating *************************
struct Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics
{
	struct WebCheatReporting_eventReportPlayerCheating_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		int32 AppId;
		FString SteamId;
		FString SteamIdReporter;
		FString AppData;
		bool bHeuristic;
		bool bDetection;
		bool bPlayerReport;
		bool bNoReportID;
		int32 GameMode;
		int32 SuspicionStartTime;
		int32 Severity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09*\n\x09* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09SteamIdReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09* @param\x09""AppData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09* @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09* @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09* @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09* @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09* @param\x09GameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09* @param\x09SuspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09Severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        SteamIdReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param        AppData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param        bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param        bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param        bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param        bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param        GameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param        SuspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param        Severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportPlayerCheating constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamIdReporter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppData;
	static void NewProp_bHeuristic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeuristic;
	static void NewProp_bDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetection;
	static void NewProp_bPlayerReport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerReport;
	static void NewProp_bNoReportID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoReportID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SuspicionStartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportPlayerCheating constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportPlayerCheating Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SteamIdReporter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, AppData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit(void* Obj)
{
	((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bHeuristic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit(void* Obj)
{
	((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
{
	((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bPlayerReport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit(void* Obj)
{
	((WebCheatReporting_eventReportPlayerCheating_Parms*)Obj)->bNoReportID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventReportPlayerCheating_Parms), &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, GameMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, SuspicionStartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventReportPlayerCheating_Parms, Severity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SteamIdReporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_AppData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bHeuristic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bPlayerReport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_bNoReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_SuspicionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::NewProp_Severity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers) < 2048);
// ********** End Function ReportPlayerCheating Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "ReportPlayerCheating", 	Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::WebCheatReporting_eventReportPlayerCheating_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::WebCheatReporting_eventReportPlayerCheating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execReportPlayerCheating)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamIdReporter);
	P_GET_PROPERTY(FStrProperty,Z_Param_AppData);
	P_GET_UBOOL(Z_Param_bHeuristic);
	P_GET_UBOOL(Z_Param_bDetection);
	P_GET_UBOOL(Z_Param_bPlayerReport);
	P_GET_UBOOL(Z_Param_bNoReportID);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_SuspicionStartTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_Severity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportPlayerCheating(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_SteamIdReporter,Z_Param_AppData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_GameMode,Z_Param_SuspicionStartTime,Z_Param_Severity);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function ReportPlayerCheating ***************************

// ********** Begin Class UWebCheatReporting Function RequestPlayerGameBan *************************
struct Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics
{
	struct WebCheatReporting_eventRequestPlayerGameBan_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ReportID;
		FString CheatDescription;
		int32 Duration;
		bool bDelayBan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Requests a game ban on a specific player.\n\x09*\n\x09* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09ReportID\x09\x09\x09The reportid originally used to report cheating.\n\x09* @param\x09""CheatDescription\x09Text describing cheating infraction.\n\x09* @param\x09""Duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09* @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        AppId                           The App ID for the game.\n@param        ReportID                        The reportid originally used to report cheating.\n@param        CheatDescription        Text describing cheating infraction.\n@param        Duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param        bDelayBan                       Delay the ban according to default ban delay rules." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPlayerGameBan constinit property declarations ******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static void NewProp_bDelayBan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPlayerGameBan constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPlayerGameBan Property Definitions *****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID = { "ReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, ReportID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, CheatDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestPlayerGameBan_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit(void* Obj)
{
	((WebCheatReporting_eventRequestPlayerGameBan_Parms*)Obj)->bDelayBan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WebCheatReporting_eventRequestPlayerGameBan_Parms), &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_ReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_CheatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::NewProp_bDelayBan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers) < 2048);
// ********** End Function RequestPlayerGameBan Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestPlayerGameBan", 	Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::WebCheatReporting_eventRequestPlayerGameBan_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::WebCheatReporting_eventRequestPlayerGameBan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execRequestPlayerGameBan)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReportID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatDescription);
	P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bDelayBan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPlayerGameBan(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ReportID,Z_Param_CheatDescription,Z_Param_Duration,Z_Param_bDelayBan);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function RequestPlayerGameBan ***************************

// ********** Begin Class UWebCheatReporting Function RequestVacStatusForUser **********************
struct Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics
{
	struct WebCheatReporting_eventRequestVacStatusForUser_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09*\n\x09* This is used before a user enters matchmaking or joins a game.\n\x09* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false. \n\x09* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication Callback ). \n\x09* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false. \n\x09* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionID (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession. \n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication Callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionID (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestVacStatusForUser constinit property declarations ***************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestVacStatusForUser constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestVacStatusForUser Property Definitions **************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventRequestVacStatusForUser_Parms, SessionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::NewProp_SessionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers) < 2048);
// ********** End Function RequestVacStatusForUser Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "RequestVacStatusForUser", 	Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::WebCheatReporting_eventRequestVacStatusForUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::WebCheatReporting_eventRequestVacStatusForUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execRequestVacStatusForUser)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestVacStatusForUser(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionID);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function RequestVacStatusForUser ************************

// ********** Begin Class UWebCheatReporting Function StartSecureMultiplayerSession ****************
struct Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics
{
	struct WebCheatReporting_eventStartSecureMultiplayerSession_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 AppId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CheatReporting" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has started.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user.\n@param        AppId                   The App ID for the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartSecureMultiplayerSession constinit property declarations *********
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartSecureMultiplayerSession constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartSecureMultiplayerSession Property Definitions ********************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebCheatReporting_eventStartSecureMultiplayerSession_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::NewProp_AppId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers) < 2048);
// ********** End Function StartSecureMultiplayerSession Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebCheatReporting, nullptr, "StartSecureMultiplayerSession", 	Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::WebCheatReporting_eventStartSecureMultiplayerSession_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::WebCheatReporting_eventStartSecureMultiplayerSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebCheatReporting::execStartSecureMultiplayerSession)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSecureMultiplayerSession(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UWebCheatReporting Function StartSecureMultiplayerSession ******************

// ********** Begin Class UWebCheatReporting *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebCheatReporting;
UClass* UWebCheatReporting::GetPrivateStaticClass()
{
	using TClass = UWebCheatReporting;
	if (!Z_Registration_Info_UClass_UWebCheatReporting.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebCheatReporting"),
			Z_Registration_Info_UClass_UWebCheatReporting.InnerSingleton,
			StaticRegisterNativesUWebCheatReporting,
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
	return Z_Registration_Info_UClass_UWebCheatReporting.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebCheatReporting_NoRegister()
{
	return UWebCheatReporting::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebCheatReporting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CheatReporting/WebCheatReporting.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReporting.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebCheatReporting constinit property declarations ***********************
// ********** End Class UWebCheatReporting constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndSecureMultiplayerSession"), .Pointer = &UWebCheatReporting::execEndSecureMultiplayerSession },
		{ .NameUTF8 = UTF8TEXT("GetCheatingReports"), .Pointer = &UWebCheatReporting::execGetCheatingReports },
		{ .NameUTF8 = UTF8TEXT("RemovePlayerGameBan"), .Pointer = &UWebCheatReporting::execRemovePlayerGameBan },
		{ .NameUTF8 = UTF8TEXT("ReportCheatData"), .Pointer = &UWebCheatReporting::execReportCheatData },
		{ .NameUTF8 = UTF8TEXT("ReportPlayerCheating"), .Pointer = &UWebCheatReporting::execReportPlayerCheating },
		{ .NameUTF8 = UTF8TEXT("RequestPlayerGameBan"), .Pointer = &UWebCheatReporting::execRequestPlayerGameBan },
		{ .NameUTF8 = UTF8TEXT("RequestVacStatusForUser"), .Pointer = &UWebCheatReporting::execRequestVacStatusForUser },
		{ .NameUTF8 = UTF8TEXT("StartSecureMultiplayerSession"), .Pointer = &UWebCheatReporting::execStartSecureMultiplayerSession },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebCheatReporting_EndSecureMultiplayerSession, "EndSecureMultiplayerSession" }, // 4064724341
		{ &Z_Construct_UFunction_UWebCheatReporting_GetCheatingReports, "GetCheatingReports" }, // 2628974864
		{ &Z_Construct_UFunction_UWebCheatReporting_RemovePlayerGameBan, "RemovePlayerGameBan" }, // 34931910
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportCheatData, "ReportCheatData" }, // 1246076183
		{ &Z_Construct_UFunction_UWebCheatReporting_ReportPlayerCheating, "ReportPlayerCheating" }, // 689183675
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestPlayerGameBan, "RequestPlayerGameBan" }, // 2031986650
		{ &Z_Construct_UFunction_UWebCheatReporting_RequestVacStatusForUser, "RequestVacStatusForUser" }, // 2772563603
		{ &Z_Construct_UFunction_UWebCheatReporting_StartSecureMultiplayerSession, "StartSecureMultiplayerSession" }, // 1634999854
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebCheatReporting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebCheatReporting_Statics
UObject* (*const Z_Construct_UClass_UWebCheatReporting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebCheatReporting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams = {
	&UWebCheatReporting::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebCheatReporting_Statics::Class_MetaDataParams)
};
void UWebCheatReporting::StaticRegisterNativesUWebCheatReporting()
{
	UClass* Class = UWebCheatReporting::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebCheatReporting_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebCheatReporting()
{
	if (!Z_Registration_Info_UClass_UWebCheatReporting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebCheatReporting.OuterSingleton, Z_Construct_UClass_UWebCheatReporting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebCheatReporting.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebCheatReporting);
UWebCheatReporting::~UWebCheatReporting() {}
// ********** End Class UWebCheatReporting *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReporting_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebCheatReporting, UWebCheatReporting::StaticClass, TEXT("UWebCheatReporting"), &Z_Registration_Info_UClass_UWebCheatReporting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebCheatReporting), 2237024775U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReporting_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReporting_h__Script_SteamCoreWeb_269481880{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReporting_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReporting_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
