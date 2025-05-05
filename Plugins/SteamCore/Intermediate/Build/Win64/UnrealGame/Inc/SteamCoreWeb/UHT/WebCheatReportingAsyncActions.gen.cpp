// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/CheatReporting/WebCheatReportingAsyncActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebCheatReportingAsyncActions() {}
// Cross Module References
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
// End Cross Module References
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
	void USteamCoreWebAsyncActionReportPlayerCheating::StaticRegisterNativesUSteamCoreWebAsyncActionReportPlayerCheating()
	{
		UClass* Class = USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportPlayerCheatingAsync", &USteamCoreWebAsyncActionReportPlayerCheating::execReportPlayerCheatingAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SteamIdReporter = { "SteamIdReporter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SteamIdReporter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_AppData = { "AppData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, AppData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bHeuristic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic = { "bHeuristic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bHeuristic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection = { "bDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bDetection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bPlayerReport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport = { "bPlayerReport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bPlayerReport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms*)Obj)->bNoReportID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID = { "bNoReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_bNoReportID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, GameMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_SuspicionStartTime = { "SuspicionStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, SuspicionStartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, Severity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\x09*\n\x09* It is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09SteamIdReporter\x09\x09(Optional) The Steam ID of the user or game server who is reporting the cheating.\n\x09* @param\x09""AppData\x09\x09\x09\x09(Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n\x09* @param\x09""bHeuristic\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a heuristic.\n\x09* @param\x09""bDetection\x09\x09\x09(Optional) Extra information about the source of the cheating - was it a detection.\n\x09* @param\x09""bPlayerReport\x09\x09(Optional) Extra information about the source of the cheating - was it a player report.\n\x09* @param\x09""bNoReportID\x09\x09\x09(Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n\x09* @param\x09GameMode\x09\x09\x09(Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n\x09* @param\x09SuspicionStartTime\x09(Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09Severity\x09\x09\x09(Optional) Level of severity of bad action being reported. Scale set by developer.\n\x09*/" },
		{ "DisplayName", "Report Player Cheating" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "ReportPlayerCheating is designed to gather community reports of cheating, where one player reports another player within the game.\n\nIt is intended for unreliable data from peers in the game ( semi-trusted sources ). The back-end that reports the data should ensure that both parties are authenticated, but the data in itself is treated as hearsay. Optional parameters may be used to encode the type of cheating that is suspected or additional evidence ( an identifier pointing to the match/demo for further review )\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        SteamIdReporter         (Optional) The Steam ID of the user or game server who is reporting the cheating.\n@param        AppData                         (Optional) App specific data about the type of cheating set by developer. (ex 1 = Aimbot, 2 = Wallhack, 3 = Griefing)\n@param        bHeuristic                      (Optional) Extra information about the source of the cheating - was it a heuristic.\n@param        bDetection                      (Optional) Extra information about the source of the cheating - was it a detection.\n@param        bPlayerReport           (Optional) Extra information about the source of the cheating - was it a player report.\n@param        bNoReportID                     (Optional) Don't return reportid. This should only be passed if you don't intend to issue a ban based on this report.\n@param        GameMode                        (Optional) Extra information about state of game - was it a specific type of game play or game mode. (0 = generic)\n@param        SuspicionStartTime      (Optional) Extra information indicating how far back the game thinks is interesting for this user. Unix epoch time (time since Jan 1st, 1970).\n@param        Severity                        (Optional) Level of severity of bad action being reported. Scale set by developer." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, nullptr, "ReportPlayerCheatingAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::SteamCoreWebAsyncActionReportPlayerCheating_eventReportPlayerCheatingAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionReportPlayerCheating);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_NoRegister()
	{
		return USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportPlayerCheating_ReportPlayerCheatingAsync, "ReportPlayerCheatingAsync" }, // 2692084359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportPlayerCheating\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportPlayerCheating\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportPlayerCheating>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionReportPlayerCheating>()
	{
		return USteamCoreWebAsyncActionReportPlayerCheating::StaticClass();
	}
	USteamCoreWebAsyncActionReportPlayerCheating::USteamCoreWebAsyncActionReportPlayerCheating() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionReportPlayerCheating);
	USteamCoreWebAsyncActionReportPlayerCheating::~USteamCoreWebAsyncActionReportPlayerCheating() {}
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
	void USteamCoreWebAsyncActionRequestPlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		UClass* Class = USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPlayerGameBanAsync", &USteamCoreWebAsyncActionRequestPlayerGameBan::execRequestPlayerGameBanAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReportID = { "ReportID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReportID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_CheatDescription = { "CheatDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, CheatDescription), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms*)Obj)->bDelayBan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan = { "bDelayBan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_bDelayBan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Requests a game ban on a specific player.\n\x09*\n\x09* This is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user who is being reported for cheating.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09ReportID\x09\x09\x09The reportid originally used to report cheating.\n\x09* @param\x09""CheatDescription\x09Text describing cheating infraction.\n\x09* @param\x09""Duration\x09\x09\x09""Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n\x09* @param\x09""bDelayBan\x09\x09\x09""Delay the ban according to default ban delay rules.\n\x09*/" },
		{ "DisplayName", "Request Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Requests a game ban on a specific player.\n\nThis is designed to be used after the incidents from ReportPlayerCheating have been reviewed and cheating has been confirmed.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user who is being reported for cheating.\n@param        AppId                           The App ID for the game.\n@param        ReportID                        The reportid originally used to report cheating.\n@param        CheatDescription        Text describing cheating infraction.\n@param        Duration                        Ban duration requested in seconds. (duration 0 will issue infinite - less than a year is a suspension and not visible on profile)\n@param        bDelayBan                       Delay the ban according to default ban delay rules." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, nullptr, "RequestPlayerGameBanAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRequestPlayerGameBan_eventRequestPlayerGameBanAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRequestPlayerGameBan);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_NoRegister()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestPlayerGameBan_RequestPlayerGameBanAsync, "RequestPlayerGameBanAsync" }, // 108280497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestPlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestPlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestPlayerGameBan>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRequestPlayerGameBan>()
	{
		return USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass();
	}
	USteamCoreWebAsyncActionRequestPlayerGameBan::USteamCoreWebAsyncActionRequestPlayerGameBan() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRequestPlayerGameBan);
	USteamCoreWebAsyncActionRequestPlayerGameBan::~USteamCoreWebAsyncActionRequestPlayerGameBan() {}
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
	void USteamCoreWebAsyncActionRemovePlayerGameBan::StaticRegisterNativesUSteamCoreWebAsyncActionRemovePlayerGameBan()
	{
		UClass* Class = USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePlayerGameBanAsync", &USteamCoreWebAsyncActionRemovePlayerGameBan::execRemovePlayerGameBanAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Remove a game ban on a player.\n\x09*\n\x09* This is used if a Game ban is determined to be a false positive.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Remove Player Game Ban" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Remove a game ban on a player.\n\nThis is used if a Game ban is determined to be a false positive.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user to remove the game ban on.\n@param        AppId                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, nullptr, "RemovePlayerGameBanAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::SteamCoreWebAsyncActionRemovePlayerGameBan_eventRemovePlayerGameBanAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRemovePlayerGameBan);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_NoRegister()
	{
		return USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRemovePlayerGameBan_RemovePlayerGameBanAsync, "RemovePlayerGameBanAsync" }, // 4060973697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRemovePlayerGameBan\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRemovePlayerGameBan\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRemovePlayerGameBan>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRemovePlayerGameBan>()
	{
		return USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass();
	}
	USteamCoreWebAsyncActionRemovePlayerGameBan::USteamCoreWebAsyncActionRemovePlayerGameBan() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRemovePlayerGameBan);
	USteamCoreWebAsyncActionRemovePlayerGameBan::~USteamCoreWebAsyncActionRemovePlayerGameBan() {}
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
	void USteamCoreWebAsyncActionGetCheatingReports::StaticRegisterNativesUSteamCoreWebAsyncActionGetCheatingReports()
	{
		UClass* Class = USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheatingReportsAsync", &USteamCoreWebAsyncActionGetCheatingReports::execGetCheatingReportsAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, TimeBegin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReportIdmin = { "ReportIdmin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReportIdmin), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeReports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports = { "bIncludeReports", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeReports_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit(void* Obj)
	{
		((SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms*)Obj)->bIncludeBans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans = { "bIncludeBans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_bIncludeBans_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Get a list of cheating reports submitted for this app.\n\x09*\n\x09* Used to gather the cheating reports so that they may be reviewed and a determination made.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09TimeEnd\x09\x09\x09\x09The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09TimeBegin\x09\x09\x09The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n\x09* @param\x09ReportIdmin\x09\x09\x09Minimum reportID to include. (can pass 0 - end of previous report range)\n\x09* @param\x09""bIncludeReports\x09\x09(Optional) Include reports. If false includebans must be true.\n\x09* @param\x09""bIncludeBans\x09\x09(Optional) Include ban requests? If false includereports must be true.\n\x09* @param\x09SteamId\x09\x09\x09\x09(Optional) Query just for this Steam ID.\n\x09*/" },
		{ "DisplayName", "Get Cheating Reports" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Get a list of cheating reports submitted for this app.\n\nUsed to gather the cheating reports so that they may be reviewed and a determination made.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        AppId                           The App ID for the game.\n@param        TimeEnd                         The end of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        TimeBegin                       The beginning of the time range. Formatted as Unix epoch time (time since Jan 1st, 1970).\n@param        ReportIdmin                     Minimum reportID to include. (can pass 0 - end of previous report range)\n@param        bIncludeReports         (Optional) Include reports. If false includebans must be true.\n@param        bIncludeBans            (Optional) Include ban requests? If false includereports must be true.\n@param        SteamId                         (Optional) Query just for this Steam ID." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, nullptr, "GetCheatingReportsAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::SteamCoreWebAsyncActionGetCheatingReports_eventGetCheatingReportsAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionGetCheatingReports);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_NoRegister()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionGetCheatingReports_GetCheatingReportsAsync, "GetCheatingReportsAsync" }, // 2896274676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionGetCheatingReports\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionGetCheatingReports\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionGetCheatingReports>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionGetCheatingReports>()
	{
		return USteamCoreWebAsyncActionGetCheatingReports::StaticClass();
	}
	USteamCoreWebAsyncActionGetCheatingReports::USteamCoreWebAsyncActionGetCheatingReports() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionGetCheatingReports);
	USteamCoreWebAsyncActionGetCheatingReports::~USteamCoreWebAsyncActionGetCheatingReports() {}
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
	void USteamCoreWebAsyncActionReportCheatData::StaticRegisterNativesUSteamCoreWebAsyncActionReportCheatData()
	{
		UClass* Class = USteamCoreWebAsyncActionReportCheatData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportCheatDataAsync", &USteamCoreWebAsyncActionReportCheatData::execReportCheatDataAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_PathAndFileName = { "PathAndFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, PathAndFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_WebCheatURL = { "WebCheatURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, WebCheatURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeNow = { "TimeNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeNow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStarted = { "TimeStarted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStarted), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_TimeStopped = { "TimeStopped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, TimeStopped), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatName = { "CheatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_GameProcessId = { "GameProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, GameProcessId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatProcessId = { "CheatProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatProcessId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam1 = { "CheatParam1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_CheatParam2 = { "CheatParam2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, CheatParam2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\x09*\n\x09* This is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09\x09The Steam ID of the user to remove the game ban on.\n\x09* @param\x09""AppId\x09\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09PathAndFileName\x09\x09\x09Path and file name of the cheat executable.\n\x09* @param\x09WebCheatURL\x09\x09\x09\x09Web url where the cheat was found and downloaded.\n\x09* @param\x09TimeNow\x09\x09\x09\x09\x09Local system time now. 64 bit windows system time.\n\x09* @param\x09TimeStarted\x09\x09\x09\x09Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n\x09* @param\x09TimeStopped\x09\x09\x09\x09Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n\x09* @param\x09""CheatName\x09\x09\x09\x09""Descriptive name for the cheat.\n\x09* @param\x09GameProcessId\x09\x09\x09Process ID of the running game.\n\x09* @param\x09""CheatProcessId\x09\x09\x09Process ID of the cheat process that ran.\n\x09* @param\x09""CheatParam1\x09(int64)\x09\x09""Extra cheat data.\n\x09* @param\x09""CheatParam2\x09(int64)\x09\x09""Extra cheat data.\n\x09*/" },
		{ "DisplayName", "Report Cheat Data" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Reports cheat data. Only use on test account that is running the game but not in a multiplayer session.\n\nThis is for reporting specific cheats to the VAC system. This is done by running the cheat and the game and then calling this webapi.\n\n@param        Key                                             Steamworks Web API publisher authentication Key.\n@param        SteamId                                 The Steam ID of the user to remove the game ban on.\n@param        AppId                                   The App ID for the game.\n@param        PathAndFileName                 Path and file name of the cheat executable.\n@param        WebCheatURL                             Web url where the cheat was found and downloaded.\n@param        TimeNow                                 Local system time now. 64 bit windows system time.\n@param        TimeStarted                             Local system time when cheat process started. ( 0 if not yet run ) 64 bit windows system time.\n@param        TimeStopped                             Local system time when cheat process stopped. ( 0 if still running ) 64 bit windows system time.\n@param        CheatName                               Descriptive name for the cheat.\n@param        GameProcessId                   Process ID of the running game.\n@param        CheatProcessId                  Process ID of the cheat process that ran.\n@param        CheatParam1     (int64)         Extra cheat data.\n@param        CheatParam2     (int64)         Extra cheat data." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, nullptr, "ReportCheatDataAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::SteamCoreWebAsyncActionReportCheatData_eventReportCheatDataAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionReportCheatData);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_NoRegister()
	{
		return USteamCoreWebAsyncActionReportCheatData::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionReportCheatData_ReportCheatDataAsync, "ReportCheatDataAsync" }, // 2482703246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionReportCheatData\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionReportCheatData\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionReportCheatData>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionReportCheatData>()
	{
		return USteamCoreWebAsyncActionReportCheatData::StaticClass();
	}
	USteamCoreWebAsyncActionReportCheatData::USteamCoreWebAsyncActionReportCheatData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionReportCheatData);
	USteamCoreWebAsyncActionReportCheatData::~USteamCoreWebAsyncActionReportCheatData() {}
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
	void USteamCoreWebAsyncActionRequestVacStatusForUser::StaticRegisterNativesUSteamCoreWebAsyncActionRequestVacStatusForUser()
	{
		UClass* Class = USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestVacStatusForUserAsync", &USteamCoreWebAsyncActionRequestVacStatusForUser::execRequestVacStatusForUserAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, SessionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\x09*\n\x09* This is used before a user enters matchmaking or joins a game.\n\x09* If the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\n\x09* Checking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\n\x09* The VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\n\x09* It is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "Request VAC Status for User" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Checks a user's VAC ban status and verifies a user's VAC session status. If verification fails, then do not let the user matchmake into a secure game.\n\nThis is used before a user enters matchmaking or joins a game.\nIf the player is blocking VAC in some way and VAC can not scan the computer for cheats, it will report success = true and session_verified = false.\nChecking this webapi will allow you to prevent the user from matchmaking or joining a server and then just getting kicked by VAC a short time later ( with a k_EAuthSessionResponseVACCheckTimedOut result from an authentication callback ).\nThe VAC system may not always have had time to fully determine if the clients system is cooperating, and if so it will report success = false.\nIt is also possible for the players system to pass the initial check but then fail to respond later, in that case verification will succeed, but a k_EAuthSessionResponseVACCheckTimedOut may follow later.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, nullptr, "RequestVacStatusForUserAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::SteamCoreWebAsyncActionRequestVacStatusForUser_eventRequestVacStatusForUserAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionRequestVacStatusForUser);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_NoRegister()
	{
		return USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionRequestVacStatusForUser_RequestVacStatusForUserAsync, "RequestVacStatusForUserAsync" }, // 2670018388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionRequestVacStatusForUser\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionRequestVacStatusForUser\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionRequestVacStatusForUser>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionRequestVacStatusForUser>()
	{
		return USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass();
	}
	USteamCoreWebAsyncActionRequestVacStatusForUser::USteamCoreWebAsyncActionRequestVacStatusForUser() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionRequestVacStatusForUser);
	USteamCoreWebAsyncActionRequestVacStatusForUser::~USteamCoreWebAsyncActionRequestVacStatusForUser() {}
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
	void USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionStartSecureMultiplayerSession()
	{
		UClass* Class = USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSecureMultiplayerSessionAsync", &USteamCoreWebAsyncActionStartSecureMultiplayerSession::execStartSecureMultiplayerSessionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has started.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09The App ID for the game.\n\x09*/" },
		{ "DisplayName", "Start Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has started.\n\n@param        Key                             Steamworks Web API publisher authentication Key.\n@param        SteamId                 The Steam ID of the user.\n@param        AppId                   The App ID for the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, nullptr, "StartSecureMultiplayerSessionAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionStartSecureMultiplayerSession_eventStartSecureMultiplayerSessionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionStartSecureMultiplayerSession);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_NoRegister()
	{
		return USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionStartSecureMultiplayerSession_StartSecureMultiplayerSessionAsync, "StartSecureMultiplayerSessionAsync" }, // 2087448353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionStartSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionStartSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionStartSecureMultiplayerSession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionStartSecureMultiplayerSession>()
	{
		return USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass();
	}
	USteamCoreWebAsyncActionStartSecureMultiplayerSession::USteamCoreWebAsyncActionStartSecureMultiplayerSession() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionStartSecureMultiplayerSession);
	USteamCoreWebAsyncActionStartSecureMultiplayerSession::~USteamCoreWebAsyncActionStartSecureMultiplayerSession() {}
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
	void USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticRegisterNativesUSteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		UClass* Class = USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSecureMultiplayerSessionAsync", &USteamCoreWebAsyncActionEndSecureMultiplayerSession::execEndSecureMultiplayerSessionAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SteamId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, AppId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, SessionId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SteamId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCoreWeb|CheatReporting|Async" },
		{ "Comment", "/**\n\x09* Tell the VAC servers that a secure multiplayer session has ended.\n\x09*\n\x09* @param\x09Key\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09* @param\x09SteamId\x09\x09\x09\x09The Steam ID of the user.\n\x09* @param\x09""AppId\x09\x09\x09\x09The App ID for the game.\n\x09* @param\x09SessionId (int64)\x09The Session ID that was obtained from the call to StartSecureMultiplayerSession.\n\x09*/" },
		{ "DisplayName", "End Secure Multiplayer Session" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "Tell the VAC servers that a secure multiplayer session has ended.\n\n@param        Key                                     Steamworks Web API publisher authentication Key.\n@param        SteamId                         The Steam ID of the user.\n@param        AppId                           The App ID for the game.\n@param        SessionId (int64)       The Session ID that was obtained from the call to StartSecureMultiplayerSession." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, nullptr, "EndSecureMultiplayerSessionAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::SteamCoreWebAsyncActionEndSecureMultiplayerSession_eventEndSecureMultiplayerSessionAsync_Parms), Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreWebAsyncActionEndSecureMultiplayerSession);
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_NoRegister()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreWebAsyncActionEndSecureMultiplayerSession_EndSecureMultiplayerSessionAsync, "EndSecureMultiplayerSessionAsync" }, // 3236566075
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreWebAsyncActionEndSecureMultiplayerSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/CheatReporting/WebCheatReportingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreWebAsyncActionEndSecureMultiplayerSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreWebAsyncActionEndSecureMultiplayerSession>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession()
	{
		if (!Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton, Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession.OuterSingleton;
	}
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamCoreWebAsyncActionEndSecureMultiplayerSession>()
	{
		return USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass();
	}
	USteamCoreWebAsyncActionEndSecureMultiplayerSession::USteamCoreWebAsyncActionEndSecureMultiplayerSession() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreWebAsyncActionEndSecureMultiplayerSession);
	USteamCoreWebAsyncActionEndSecureMultiplayerSession::~USteamCoreWebAsyncActionEndSecureMultiplayerSession() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreWebAsyncActionReportPlayerCheating, USteamCoreWebAsyncActionReportPlayerCheating::StaticClass, TEXT("USteamCoreWebAsyncActionReportPlayerCheating"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportPlayerCheating, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionReportPlayerCheating), 2675765177U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, USteamCoreWebAsyncActionRequestPlayerGameBan::StaticClass, TEXT("USteamCoreWebAsyncActionRequestPlayerGameBan"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestPlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRequestPlayerGameBan), 3298900588U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, USteamCoreWebAsyncActionRemovePlayerGameBan::StaticClass, TEXT("USteamCoreWebAsyncActionRemovePlayerGameBan"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRemovePlayerGameBan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRemovePlayerGameBan), 985473834U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionGetCheatingReports, USteamCoreWebAsyncActionGetCheatingReports::StaticClass, TEXT("USteamCoreWebAsyncActionGetCheatingReports"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionGetCheatingReports, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionGetCheatingReports), 3912474926U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionReportCheatData, USteamCoreWebAsyncActionReportCheatData::StaticClass, TEXT("USteamCoreWebAsyncActionReportCheatData"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionReportCheatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionReportCheatData), 1827471510U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, USteamCoreWebAsyncActionRequestVacStatusForUser::StaticClass, TEXT("USteamCoreWebAsyncActionRequestVacStatusForUser"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionRequestVacStatusForUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionRequestVacStatusForUser), 3308046947U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, USteamCoreWebAsyncActionStartSecureMultiplayerSession::StaticClass, TEXT("USteamCoreWebAsyncActionStartSecureMultiplayerSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionStartSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionStartSecureMultiplayerSession), 3458595480U) },
		{ Z_Construct_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, USteamCoreWebAsyncActionEndSecureMultiplayerSession::StaticClass, TEXT("USteamCoreWebAsyncActionEndSecureMultiplayerSession"), &Z_Registration_Info_UClass_USteamCoreWebAsyncActionEndSecureMultiplayerSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreWebAsyncActionEndSecureMultiplayerSession), 3771675328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h_3743647446(TEXT("/Script/SteamCoreWeb"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCoreWeb_Public_CheatReporting_WebCheatReportingAsyncActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
