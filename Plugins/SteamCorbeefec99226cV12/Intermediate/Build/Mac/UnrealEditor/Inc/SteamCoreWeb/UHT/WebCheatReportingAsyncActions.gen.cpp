// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheatReporting/WebCheatReportingAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWebCheatReportingAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncAction();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession();
STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USteamCoreWebAsyncActionReportPlayerCheating Function ReportPlayerCheatingAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics
{
	struct SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms
	{
		UObject* WorldContextObject;
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
		USteamCoreWebAsyncActionReportPlayerCheating* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09*\n\x09* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09SteamIdReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09* @param\x09""AppData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09* @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09* @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09* @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09* @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09* @param\x09GameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09* @param\x09SuspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09Severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09*/" },
		{ "DisplayName", "Report Player Cheating" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        SteamIdReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param        AppData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param        bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param        bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param        bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param        bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param        GameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param        SuspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param        Severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportPlayerCheatingAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportPlayerCheatingAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportPlayerCheatingAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamIdReporter), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppData), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bHeuristic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bPlayerReport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bNoReportID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, GameMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SuspicionStartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Severity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamIdReporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SuspicionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers) < 2048);
// ********** End Function ReportPlayerCheatingAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, nullptr, "ReportPlayerCheatingAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
	*(USteamCoreWebAsyncActionReportPlayerCheating**)Z_Param__Result=USteamCoreWebAsyncActionReportPlayerCheating::ReportPlayerCheatingAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_SteamId,Z_Param_SteamIdReporter,Z_Param_AppData,Z_Param_bHeuristic,Z_Param_bDetection,Z_Param_bPlayerReport,Z_Param_bNoReportID,Z_Param_GameMode,Z_Param_SuspicionStartTime,Z_Param_Severity);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionReportPlayerCheating Function ReportPlayerCheatingAsync 

// ********** Begin Class USteamCoreWebAsyncActionReportPlayerCheating *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating;
UClass* USteamCoreWebAsyncActionReportPlayerCheating::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionReportPlayerCheating;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionReportPlayerCheating"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionReportPlayerCheating,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister()
{
	return USteamCoreWebAsyncActionReportPlayerCheating::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportPlayerCheating\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportPlayerCheating\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionReportPlayerCheating constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionReportPlayerCheating constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportPlayerCheatingAsync"), .Pointer = &USteamCoreWebAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync, "ReportPlayerCheatingAsync" }, // 2954793678
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportPlayerCheating>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::ClassParams = {
	&USteamCoreWebAsyncActionReportPlayerCheating::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionReportPlayerCheating::StaticRegisterNativesUSteamCoreWebAsyncActionReportPlayerCheating()
{
	UClass* Class = USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton;
}
USteamCoreWebAsyncActionReportPlayerCheating::USteamCoreWebAsyncActionReportPlayerCheating() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionReportPlayerCheating);
USteamCoreWebAsyncActionReportPlayerCheating::~USteamCoreWebAsyncActionReportPlayerCheating() {}
// ********** End Class USteamCoreWebAsyncActionReportPlayerCheating *******************************

// ********** Begin Class USteamCoreWebAsyncActionRequestPlayerGameBan Function RequestPlayerGameBanAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics
{
	struct SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString ReportID;
		FString CheatDescription;
		int32 Duration;
		bool bDelayBan;
		USteamCoreWebAsyncActionRequestPlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Requests a game ban on a specific player.\n\x09*\n\x09* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09ReportID\x09\x09\x09The reportid originally used to report cheating.\n\x09* @param\x09""CheatDescription\x09Text describing cheating infraction.\n\x09* @param\x09""Duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09* @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09*/" },
		{ "DisplayName", "Request Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        AppId                           The App ID for the game.\n@param        ReportID                        The reportid originally used to report cheating.\n@param        CheatDescription        Text describing cheating infraction.\n@param        Duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param        bDelayBan                       Delay the ban according to default ban delay rules." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestPlayerGameBanAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReportID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CheatDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static void NewProp_bDelayBan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestPlayerGameBanAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestPlayerGameBanAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReportID = { "ReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReportID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, CheatDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms*)Obj)->bDelayBan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_CheatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestPlayerGameBanAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, nullptr, "RequestPlayerGameBanAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ReportID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CheatDescription);
	P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bDelayBan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionRequestPlayerGameBan**)Z_Param__Result=USteamCoreWebAsyncActionRequestPlayerGameBan::RequestPlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ReportID,Z_Param_CheatDescription,Z_Param_Duration,Z_Param_bDelayBan);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionRequestPlayerGameBan Function RequestPlayerGameBanAsync 

// ********** Begin Class USteamCoreWebAsyncActionRequestPlayerGameBan *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan;
UClass* USteamCoreWebAsyncActionRequestPlayerGameBan::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRequestPlayerGameBan;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRequestPlayerGameBan"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRequestPlayerGameBan,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister()
{
	return USteamCoreWebAsyncActionRequestPlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestPlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestPlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRequestPlayerGameBan constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionRequestPlayerGameBan constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestPlayerGameBanAsync"), .Pointer = &USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync, "RequestPlayerGameBanAsync" }, // 3061384136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestPlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams = {
	&USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRequestPlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRequestPlayerGameBan()
{
	UClass* Class = USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton;
}
USteamCoreWebAsyncActionRequestPlayerGameBan::USteamCoreWebAsyncActionRequestPlayerGameBan() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRequestPlayerGameBan);
USteamCoreWebAsyncActionRequestPlayerGameBan::~USteamCoreWebAsyncActionRequestPlayerGameBan() {}
// ********** End Class USteamCoreWebAsyncActionRequestPlayerGameBan *******************************

// ********** Begin Class USteamCoreWebAsyncActionRemovePlayerGameBan Function RemovePlayerGameBanAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics
{
	struct SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionRemovePlayerGameBan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Remove a game ban on a player.\n\x09*\n\x09* This is used if a Game ban is determined to be a false positive.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Remove Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user to remove the game ban on.\n@param        AppId                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemovePlayerGameBanAsync constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemovePlayerGameBanAsync constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemovePlayerGameBanAsync Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers) < 2048);
// ********** End Function RemovePlayerGameBanAsync Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, nullptr, "RemovePlayerGameBanAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionRemovePlayerGameBan**)Z_Param__Result=USteamCoreWebAsyncActionRemovePlayerGameBan::RemovePlayerGameBanAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionRemovePlayerGameBan Function RemovePlayerGameBanAsync 

// ********** Begin Class USteamCoreWebAsyncActionRemovePlayerGameBan ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan;
UClass* USteamCoreWebAsyncActionRemovePlayerGameBan::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRemovePlayerGameBan;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRemovePlayerGameBan"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRemovePlayerGameBan,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister()
{
	return USteamCoreWebAsyncActionRemovePlayerGameBan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRemovePlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRemovePlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRemovePlayerGameBan constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionRemovePlayerGameBan constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RemovePlayerGameBanAsync"), .Pointer = &USteamCoreWebAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync, "RemovePlayerGameBanAsync" }, // 1265271177
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRemovePlayerGameBan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::ClassParams = {
	&USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRemovePlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRemovePlayerGameBan()
{
	UClass* Class = USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton;
}
USteamCoreWebAsyncActionRemovePlayerGameBan::USteamCoreWebAsyncActionRemovePlayerGameBan() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRemovePlayerGameBan);
USteamCoreWebAsyncActionRemovePlayerGameBan::~USteamCoreWebAsyncActionRemovePlayerGameBan() {}
// ********** End Class USteamCoreWebAsyncActionRemovePlayerGameBan ********************************

// ********** Begin Class USteamCoreWebAsyncActionGetCheatingReports Function GetCheatingReportsAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics
{
	struct SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		int32 AppId;
		int32 TimeEnd;
		int32 TimeBegin;
		FString ReportIdmin;
		bool bIncludeReports;
		bool bIncludeBans;
		FString SteamId;
		USteamCoreWebAsyncActionGetCheatingReports* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09TimeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09TimeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09ReportIdmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09* @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09* @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09*/" },
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        TimeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        TimeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        ReportIdmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param        bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param        bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param        SteamId                         (Optional) Query just for this Steam ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCheatingReportsAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCheatingReportsAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCheatingReportsAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportIdmin = { "ReportIdmin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReportIdmin), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
{
	((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportIdmin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers) < 2048);
// ********** End Function GetCheatingReportsAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
	*(USteamCoreWebAsyncActionGetCheatingReports**)Z_Param__Result=USteamCoreWebAsyncActionGetCheatingReports::GetCheatingReportsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_AppId,Z_Param_TimeEnd,Z_Param_TimeBegin,Z_Param_ReportIdmin,Z_Param_bIncludeReports,Z_Param_bIncludeBans,Z_Param_SteamId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionGetCheatingReports Function GetCheatingReportsAsync 

// ********** Begin Class USteamCoreWebAsyncActionGetCheatingReports *******************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports;
UClass* USteamCoreWebAsyncActionGetCheatingReports::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionGetCheatingReports;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionGetCheatingReports"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionGetCheatingReports,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister()
{
	return USteamCoreWebAsyncActionGetCheatingReports::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionGetCheatingReports constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionGetCheatingReports constinit property declarations *
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCheatingReportsAsync"), .Pointer = &USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 1722917115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCheatingReports>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams = {
	&USteamCoreWebAsyncActionGetCheatingReports::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreWebAsyncActionGetCheatingReports()
{
	UClass* Class = USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton;
}
USteamCoreWebAsyncActionGetCheatingReports::USteamCoreWebAsyncActionGetCheatingReports() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionGetCheatingReports);
USteamCoreWebAsyncActionGetCheatingReports::~USteamCoreWebAsyncActionGetCheatingReports() {}
// ********** End Class USteamCoreWebAsyncActionGetCheatingReports *********************************

// ********** Begin Class USteamCoreWebAsyncActionReportCheatData Function ReportCheatDataAsync ****
struct Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics
{
	struct SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms
	{
		UObject* WorldContextObject;
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
		USteamCoreWebAsyncActionReportCheatData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09*\n\x09* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09PathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09* @param\x09WebCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09* @param\x09TimeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09* @param\x09TimeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09* @param\x09TimeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09* @param\x09""CheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09* @param\x09GameProcessId\x09\x09\x09Process ID of the running game.\n\x09* @param\x09""CheatProcessId\x09\x09\x09Process ID of the cheat process that ran.\n\x09* @param\x09""CheatParam1\x09(int64)\x09\x09""Extra cheat data.\n\x09* @param\x09""CheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09*/" },
		{ "DisplayName", "Report Cheat Data" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 The Steam ID of the user to remove the game ban on.\n@param        AppId                                   The App ID for the game.\n@param        PathAndFileName                 Path and file name of the cheat executable.\n@param        WebCheatURL                             Web url where the cheat was found and downloaded.\n@param        TimeNow                                 Local system time now. 64 bit windows system time.\n@param        TimeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param        TimeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param        CheatName                               Descriptive name for the cheat.\n@param        GameProcessId                   Process ID of the running game.\n@param        CheatProcessId                  Process ID of the cheat process that ran.\n@param        CheatParam1     (int64)         Extra cheat data.\n@param        CheatParam2     (int64)         Extra cheat data." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportCheatDataAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportCheatDataAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportCheatDataAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, PathAndFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WebCheatURL = { "WebCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WebCheatURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeNow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStarted), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStopped), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, GameProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatProcessId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_PathAndFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WebCheatURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_GameProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatProcessId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers) < 2048);
// ********** End Function ReportCheatDataAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, nullptr, "ReportCheatDataAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionReportCheatData::execReportCheatDataAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
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
	*(USteamCoreWebAsyncActionReportCheatData**)Z_Param__Result=USteamCoreWebAsyncActionReportCheatData::ReportCheatDataAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PathAndFileName,Z_Param_WebCheatURL,Z_Param_TimeNow,Z_Param_TimeStarted,Z_Param_TimeStopped,Z_Param_CheatName,Z_Param_GameProcessId,Z_Param_CheatProcessId,Z_Param_CheatParam1,Z_Param_CheatParam2);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionReportCheatData Function ReportCheatDataAsync ******

// ********** Begin Class USteamCoreWebAsyncActionReportCheatData **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData;
UClass* USteamCoreWebAsyncActionReportCheatData::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionReportCheatData;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionReportCheatData"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionReportCheatData,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister()
{
	return USteamCoreWebAsyncActionReportCheatData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportCheatData\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportCheatData\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionReportCheatData constinit property declarations **
// ********** End Class USteamCoreWebAsyncActionReportCheatData constinit property declarations ****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ReportCheatDataAsync"), .Pointer = &USteamCoreWebAsyncActionReportCheatData::execReportCheatDataAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync, "ReportCheatDataAsync" }, // 3613084887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportCheatData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::ClassParams = {
	&USteamCoreWebAsyncActionReportCheatData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionReportCheatData::StaticRegisterNativesUSteamCoreWebAsyncActionReportCheatData()
{
	UClass* Class = USteamCoreWebAsyncActionReportCheatData::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton;
}
USteamCoreWebAsyncActionReportCheatData::USteamCoreWebAsyncActionReportCheatData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionReportCheatData);
USteamCoreWebAsyncActionReportCheatData::~USteamCoreWebAsyncActionReportCheatData() {}
// ********** End Class USteamCoreWebAsyncActionReportCheatData ************************************

// ********** Begin Class USteamCoreWebAsyncActionRequestVacStatusForUser Function RequestVacStatusForUserAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics
{
	struct SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionId;
		USteamCoreWebAsyncActionRequestVacStatusForUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09*\n\x09* This is used before a user enters matchmaking or joins a game.\n\x09* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\n\x09* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\n\x09* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\n\x09* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "Request VAC Status for User" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestVacStatusForUserAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestVacStatusForUserAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestVacStatusForUserAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestVacStatusForUserAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, nullptr, "RequestVacStatusForUserAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionRequestVacStatusForUser**)Z_Param__Result=USteamCoreWebAsyncActionRequestVacStatusForUser::RequestVacStatusForUserAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionRequestVacStatusForUser Function RequestVacStatusForUserAsync 

// ********** Begin Class USteamCoreWebAsyncActionRequestVacStatusForUser **************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser;
UClass* USteamCoreWebAsyncActionRequestVacStatusForUser::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionRequestVacStatusForUser;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionRequestVacStatusForUser"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionRequestVacStatusForUser,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister()
{
	return USteamCoreWebAsyncActionRequestVacStatusForUser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestVacStatusForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestVacStatusForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionRequestVacStatusForUser constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionRequestVacStatusForUser constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RequestVacStatusForUserAsync"), .Pointer = &USteamCoreWebAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync, "RequestVacStatusForUserAsync" }, // 2601317388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestVacStatusForUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::ClassParams = {
	&USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionRequestVacStatusForUser::StaticRegisterNativesUSteamCoreWebAsyncActionRequestVacStatusForUser()
{
	UClass* Class = USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton;
}
USteamCoreWebAsyncActionRequestVacStatusForUser::USteamCoreWebAsyncActionRequestVacStatusForUser() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionRequestVacStatusForUser);
USteamCoreWebAsyncActionRequestVacStatusForUser::~USteamCoreWebAsyncActionRequestVacStatusForUser() {}
// ********** End Class USteamCoreWebAsyncActionRequestVacStatusForUser ****************************

// ********** Begin Class USteamCoreWebAsyncActionStartSecureMultiplayerSession Function StartSecureMultiplayerSessionAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics
{
	struct SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		USteamCoreWebAsyncActionStartSecureMultiplayerSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has started.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Start Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user.\n@param        AppId                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartSecureMultiplayerSessionAsync constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartSecureMultiplayerSessionAsync constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartSecureMultiplayerSessionAsync Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers) < 2048);
// ********** End Function StartSecureMultiplayerSessionAsync Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, nullptr, "StartSecureMultiplayerSessionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionStartSecureMultiplayerSession**)Z_Param__Result=USteamCoreWebAsyncActionStartSecureMultiplayerSession::StartSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionStartSecureMultiplayerSession Function StartSecureMultiplayerSessionAsync 

// ********** Begin Class USteamCoreWebAsyncActionStartSecureMultiplayerSession ********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession;
UClass* USteamCoreWebAsyncActionStartSecureMultiplayerSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionStartSecureMultiplayerSession;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionStartSecureMultiplayerSession"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionStartSecureMultiplayerSession,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister()
{
	return USteamCoreWebAsyncActionStartSecureMultiplayerSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionStartSecureMultiplayerSession constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionStartSecureMultiplayerSession constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StartSecureMultiplayerSessionAsync"), .Pointer = &USteamCoreWebAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync, "StartSecureMultiplayerSessionAsync" }, // 3291968872
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartSecureMultiplayerSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::ClassParams = {
	&USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionStartSecureMultiplayerSession()
{
	UClass* Class = USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton;
}
USteamCoreWebAsyncActionStartSecureMultiplayerSession::USteamCoreWebAsyncActionStartSecureMultiplayerSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionStartSecureMultiplayerSession);
USteamCoreWebAsyncActionStartSecureMultiplayerSession::~USteamCoreWebAsyncActionStartSecureMultiplayerSession() {}
// ********** End Class USteamCoreWebAsyncActionStartSecureMultiplayerSession **********************

// ********** Begin Class USteamCoreWebAsyncActionEndSecureMultiplayerSession Function EndSecureMultiplayerSessionAsync 
struct Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics
{
	struct SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString SessionId;
		USteamCoreWebAsyncActionEndSecureMultiplayerSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has ended.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "End Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndSecureMultiplayerSessionAsync constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndSecureMultiplayerSessionAsync constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndSecureMultiplayerSessionAsync Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SessionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers) < 2048);
// ********** End Function EndSecureMultiplayerSessionAsync Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, nullptr, "EndSecureMultiplayerSessionAsync", 	Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreWebAsyncActionEndSecureMultiplayerSession**)Z_Param__Result=USteamCoreWebAsyncActionEndSecureMultiplayerSession::EndSecureMultiplayerSessionAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_SessionId);
	P_NATIVE_END;
}
// ********** End Class USteamCoreWebAsyncActionEndSecureMultiplayerSession Function EndSecureMultiplayerSessionAsync 

// ********** Begin Class USteamCoreWebAsyncActionEndSecureMultiplayerSession **********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession;
UClass* USteamCoreWebAsyncActionEndSecureMultiplayerSession::GetPrivateStaticClass()
{
	using TClass = USteamCoreWebAsyncActionEndSecureMultiplayerSession;
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreWebAsyncActionEndSecureMultiplayerSession"),
			Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.InnerSingleton,
			StaticRegisterNativesUSteamCoreWebAsyncActionEndSecureMultiplayerSession,
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
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister()
{
	return USteamCoreWebAsyncActionEndSecureMultiplayerSession::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEndSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEndSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreWebAsyncActionEndSecureMultiplayerSession constinit property declarations 
// ********** End Class USteamCoreWebAsyncActionEndSecureMultiplayerSession constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndSecureMultiplayerSessionAsync"), .Pointer = &USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync, "EndSecureMultiplayerSessionAsync" }, // 3452182795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEndSecureMultiplayerSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics
UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams = {
	&USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams)
};
void USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionEndSecureMultiplayerSession()
{
	UClass* Class = USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton;
}
USteamCoreWebAsyncActionEndSecureMultiplayerSession::USteamCoreWebAsyncActionEndSecureMultiplayerSession() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreWebAsyncActionEndSecureMultiplayerSession);
USteamCoreWebAsyncActionEndSecureMultiplayerSession::~USteamCoreWebAsyncActionEndSecureMultiplayerSession() {}
// ********** End Class USteamCoreWebAsyncActionEndSecureMultiplayerSession ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_SteamCoreWeb_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, USteamCoreWebAsyncActionReportPlayerCheating::StaticClass, TEXT("USteamCoreWebAsyncActionReportPlayerCheating"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionReportPlayerCheating), 323362313U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass, TEXT("USteamCoreWebAsyncActionRequestPlayerGameBan"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRequestPlayerGameBan), 1495079147U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass, TEXT("USteamCoreWebAsyncActionRemovePlayerGameBan"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRemovePlayerGameBan), 1605510562U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, USteamCoreWebAsyncActionGetCheatingReports::StaticClass, TEXT("USteamCoreWebAsyncActionGetCheatingReports"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetCheatingReports), 1324496876U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, USteamCoreWebAsyncActionReportCheatData::StaticClass, TEXT("USteamCoreWebAsyncActionReportCheatData"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionReportCheatData), 3153454146U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass, TEXT("USteamCoreWebAsyncActionRequestVacStatusForUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRequestVacStatusForUser), 2519025330U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass, TEXT("USteamCoreWebAsyncActionStartSecureMultiplayerSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartSecureMultiplayerSession), 831765817U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass, TEXT("USteamCoreWebAsyncActionEndSecureMultiplayerSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEndSecureMultiplayerSession), 751676328U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_SteamCoreWeb_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_SteamCoreWeb_983204458{
	TEXT("/Script/SteamCoreWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h__Script_SteamCoreWeb_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
