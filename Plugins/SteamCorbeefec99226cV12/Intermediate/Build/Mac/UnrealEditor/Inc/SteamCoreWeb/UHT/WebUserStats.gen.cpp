// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/WebUserStats.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebUserStats() {}

// ********** Begin Cross Module References ********************************************************
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats();
STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebUserStats_NoRegister();
STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWebUserStats Function GetGlobalAchievementPercentagesForApp *************
struct Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics
{
	struct WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms
	{
		FScriptDelegate Callback;
		FString GameId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Retrieves the global achievement percentages for the specified app.\n\x09*\n\x09* @param\x09GameId\x09\x09GameID to retrieve the achievement percentages for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Retrieves the global achievement percentages for the specified app.\n\n@param        GameId          GameID to retrieve the achievement percentages for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalAchievementPercentagesForApp constinit property declarations *
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalAchievementPercentagesForApp constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalAchievementPercentagesForApp Property Definitions ************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameId = { "GameId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms, GameId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::NewProp_GameId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalAchievementPercentagesForApp Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalAchievementPercentagesForApp", 	Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::WebUserStats_eventGetGlobalAchievementPercentagesForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetGlobalAchievementPercentagesForApp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalAchievementPercentagesForApp(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_GameId);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetGlobalAchievementPercentagesForApp ***************

// ********** Begin Class UWebUserStats Function GetGlobalStatsForGame *****************************
struct Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics
{
	struct WebUserStats_eventGetGlobalStatsForGame_Parms
	{
		FScriptDelegate Callback;
		int32 Appid;
		TArray<FString> Names;
		int32 StartDate;
		int32 EndDate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Retrieves the global stats percentages for the specified app.\n\x09*\n\x09* @param\x09""Appid\x09\x09\x09""AppID that we're getting global stats for\n\x09* @param\x09Names\x09\x09\x09Names of stat to get data for\n\x09* @param\x09StartDate\x09\x09Start date for daily totals (unix epoch timestamp)\n\x09* @param\x09""EndDate\x09\x09\x09""End date for daily totals (unix epoch timestamp)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Retrieves the global stats percentages for the specified app.\n\n@param        Appid                   AppID that we're getting global stats for\n@param        Names                   Names of stat to get data for\n@param        StartDate               Start date for daily totals (unix epoch timestamp)\n@param        EndDate                 End date for daily totals (unix epoch timestamp)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalStatsForGame constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalStatsForGame constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalStatsForGame Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, StartDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetGlobalStatsForGame_Parms, EndDate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Appid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_StartDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::NewProp_EndDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalStatsForGame Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetGlobalStatsForGame", 	Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::WebUserStats_eventGetGlobalStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::WebUserStats_eventGetGlobalStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetGlobalStatsForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartDate);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Appid,Z_Param_Names,Z_Param_StartDate,Z_Param_EndDate);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetGlobalStatsForGame *******************************

// ********** Begin Class UWebUserStats Function GetNumberOfCurrentPlayers *************************
struct Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics
{
	struct WebUserStats_eventGetNumberOfCurrentPlayers_Parms
	{
		FScriptDelegate Callback;
		int32 Appid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the total number of players currently active in the specified app on Steam.\n\x09*\n\x09* Note that this will not return players that are playing while not connected to Steam.\n\x09*\n\x09* @param\x09""Appid\x09\x09\x09""AppID that we're getting user count for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the total number of players currently active in the specified app on Steam.\n\nNote that this will not return players that are playing while not connected to Steam.\n\n@param        Appid                   AppID that we're getting user count for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfCurrentPlayers constinit property declarations *************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfCurrentPlayers constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfCurrentPlayers Property Definitions ************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetNumberOfCurrentPlayers_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Appid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
// ********** End Function GetNumberOfCurrentPlayers Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetNumberOfCurrentPlayers", 	Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::WebUserStats_eventGetNumberOfCurrentPlayers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::WebUserStats_eventGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetNumberOfCurrentPlayers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNumberOfCurrentPlayers(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Appid);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetNumberOfCurrentPlayers ***************************

// ********** Begin Class UWebUserStats Function GetPlayerAchievements *****************************
struct Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics
{
	struct WebUserStats_eventGetPlayerAchievements_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 Appid;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the list of achievements the specified user has unlocked in an app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09""Appid\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09Language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_Language", "english" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the list of achievements the specified user has unlocked in an app.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamID of user\n@param        Appid                   AppID to get achievements for\n@param        Language                Language to return strings for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlayerAchievements constinit property declarations *****************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlayerAchievements constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlayerAchievements Property Definitions ****************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetPlayerAchievements_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Appid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers) < 2048);
// ********** End Function GetPlayerAchievements Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetPlayerAchievements", 	Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::WebUserStats_eventGetPlayerAchievements_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::WebUserStats_eventGetPlayerAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetPlayerAchievements)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerAchievements(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Appid,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetPlayerAchievements *******************************

// ********** Begin Class UWebUserStats Function GetSchemaForGame **********************************
struct Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics
{
	struct WebUserStats_eventGetSchemaForGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 Appid;
		FString Language;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the complete list of stats and achievements for the specified game.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09""Appid\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09Language\x09\x09Language to return strings for\n\x09*/" },
		{ "CPP_Default_Language", "english" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the complete list of stats and achievements for the specified game.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        Appid                   AppID to get achievements for\n@param        Language                Language to return strings for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSchemaForGame constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSchemaForGame constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSchemaForGame Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetSchemaForGame_Parms, Language), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Appid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::NewProp_Language,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers) < 2048);
// ********** End Function GetSchemaForGame Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetSchemaForGame", 	Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::WebUserStats_eventGetSchemaForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::WebUserStats_eventGetSchemaForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetSchemaForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetSchemaForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetSchemaForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSchemaForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Appid,Z_Param_Language);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetSchemaForGame ************************************

// ********** Begin Class UWebUserStats Function GetUserStatsForGame *******************************
struct Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics
{
	struct WebUserStats_eventGetUserStatsForGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 Appid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Gets the list of stats that the specified user has set in an app.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09""Appid\x09\x09\x09""AppID to get achievements for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Gets the list of stats that the specified user has set in an app.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamID of user\n@param        Appid                   AppID to get achievements for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUserStatsForGame constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUserStatsForGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUserStatsForGame Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventGetUserStatsForGame_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::NewProp_Appid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function GetUserStatsForGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "GetUserStatsForGame", 	Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::WebUserStats_eventGetUserStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::WebUserStats_eventGetUserStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execGetUserStatsForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Appid);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function GetUserStatsForGame *********************************

// ********** Begin Class UWebUserStats Function SetUserStatsForGame *******************************
struct Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics
{
	struct WebUserStats_eventSetUserStatsForGame_Parms
	{
		FScriptDelegate Callback;
		FString Key;
		FString SteamId;
		int32 Appid;
		TArray<FString> Names;
		TArray<int32> Values;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCoreWeb|CloudService" },
		{ "Comment", "/**\n\x09* Sets a stat for the specified user for the game.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API user authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09SteamID of user\n\x09* @param\x09""Appid\x09\x09\x09""AppID to get achievements for\n\x09* @param\x09Names\x09\x09\x09Names of stat or achievement to set\n\x09* @param\x09Values\x09\x09\x09Values to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
		{ "ToolTip", "Sets a stat for the specified user for the game.\n\n@param        Key                             Steamworks Web API user authentication Key.\n@param        SteamId                 SteamID of user\n@param        Appid                   AppID to get achievements for\n@param        Names                   Names of stat or achievement to set\n@param        Values                  Values to set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUserStatsForGame constinit property declarations *******************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Appid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUserStatsForGame constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUserStatsForGame Property Definitions ******************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2401718215
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Appid = { "Appid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Appid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WebUserStats_eventSetUserStatsForGame_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Appid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Names,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers) < 2048);
// ********** End Function SetUserStatsForGame Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWebUserStats, nullptr, "SetUserStatsForGame", 	Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::WebUserStats_eventSetUserStatsForGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::WebUserStats_eventSetUserStatsForGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWebUserStats::execSetUserStatsForGame)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Appid);
	P_GET_TARRAY(FString,Z_Param_Names);
	P_GET_TARRAY(int32,Z_Param_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserStatsForGame(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_SteamId,Z_Param_Appid,Z_Param_Names,Z_Param_Values);
	P_NATIVE_END;
}
// ********** End Class UWebUserStats Function SetUserStatsForGame *********************************

// ********** Begin Class UWebUserStats ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWebUserStats;
UClass* UWebUserStats::GetPrivateStaticClass()
{
	using TClass = UWebUserStats;
	if (!Z_Registration_Info_UClass_UWebUserStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WebUserStats"),
			Z_Registration_Info_UClass_UWebUserStats.InnerSingleton,
			StaticRegisterNativesUWebUserStats,
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
	return Z_Registration_Info_UClass_UWebUserStats.InnerSingleton;
}
UClass* Z_Construct_UClass_UWebUserStats_NoRegister()
{
	return UWebUserStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWebUserStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserStats/WebUserStats.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/WebUserStats.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWebUserStats constinit property declarations ****************************
// ********** End Class UWebUserStats constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGlobalAchievementPercentagesForApp"), .Pointer = &UWebUserStats::execGetGlobalAchievementPercentagesForApp },
		{ .NameUTF8 = UTF8TEXT("GetGlobalStatsForGame"), .Pointer = &UWebUserStats::execGetGlobalStatsForGame },
		{ .NameUTF8 = UTF8TEXT("GetNumberOfCurrentPlayers"), .Pointer = &UWebUserStats::execGetNumberOfCurrentPlayers },
		{ .NameUTF8 = UTF8TEXT("GetPlayerAchievements"), .Pointer = &UWebUserStats::execGetPlayerAchievements },
		{ .NameUTF8 = UTF8TEXT("GetSchemaForGame"), .Pointer = &UWebUserStats::execGetSchemaForGame },
		{ .NameUTF8 = UTF8TEXT("GetUserStatsForGame"), .Pointer = &UWebUserStats::execGetUserStatsForGame },
		{ .NameUTF8 = UTF8TEXT("SetUserStatsForGame"), .Pointer = &UWebUserStats::execSetUserStatsForGame },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalAchievementPercentagesForApp, "GetGlobalAchievementPercentagesForApp" }, // 2396594273
		{ &Z_Construct_UFunction_UWebUserStats_GetGlobalStatsForGame, "GetGlobalStatsForGame" }, // 2131706614
		{ &Z_Construct_UFunction_UWebUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 3014062400
		{ &Z_Construct_UFunction_UWebUserStats_GetPlayerAchievements, "GetPlayerAchievements" }, // 253940484
		{ &Z_Construct_UFunction_UWebUserStats_GetSchemaForGame, "GetSchemaForGame" }, // 3140824527
		{ &Z_Construct_UFunction_UWebUserStats_GetUserStatsForGame, "GetUserStatsForGame" }, // 1503658003
		{ &Z_Construct_UFunction_UWebUserStats_SetUserStatsForGame, "SetUserStatsForGame" }, // 2288639121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebUserStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWebUserStats_Statics
UObject* (*const Z_Construct_UClass_UWebUserStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebUserStats_Statics::ClassParams = {
	&UWebUserStats::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebUserStats_Statics::Class_MetaDataParams)
};
void UWebUserStats::StaticRegisterNativesUWebUserStats()
{
	UClass* Class = UWebUserStats::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UWebUserStats_Statics::Funcs));
}
UClass* Z_Construct_UClass_UWebUserStats()
{
	if (!Z_Registration_Info_UClass_UWebUserStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebUserStats.OuterSingleton, Z_Construct_UClass_UWebUserStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWebUserStats.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWebUserStats);
UWebUserStats::~UWebUserStats() {}
// ********** End Class UWebUserStats **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWebUserStats, UWebUserStats::StaticClass, TEXT("UWebUserStats"), &Z_Registration_Info_UClass_UWebUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebUserStats), 336321239U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h__Script_SteamCoreWeb_3165919062{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_SteamUserStats_WebUserStats_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
