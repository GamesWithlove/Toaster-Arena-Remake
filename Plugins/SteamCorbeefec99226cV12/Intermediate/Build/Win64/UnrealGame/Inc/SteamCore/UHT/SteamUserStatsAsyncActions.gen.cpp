// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamUserStats/SteamUserStatsAsyncActions.h"
#include "SteamCore/SteamTypes.h"
#include "SteamUserStats/SteamUserStatsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamUserStatsAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnFindLeaderboardAsyncDelegate ***************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFindLeaderboardAsyncDelegate constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFindLeaderboardAsyncDelegate constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFindLeaderboardAsyncDelegate Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1999987708
void Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFindLeaderboardAsyncDelegate Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindLeaderboardAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindLeaderboardAsyncDelegate, FLeaderboardFindResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFindLeaderboardAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFindLeaderboardAsyncDelegate *****************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntriesAsyncDelegate ****************************
struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadLeaderboardEntriesAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadLeaderboardEntriesAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadLeaderboardEntriesAsyncDelegate Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2074583049
void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadLeaderboardEntriesAsyncDelegate Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntriesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesAsyncDelegate, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadLeaderboardEntriesAsyncDelegate ******************************

// ********** Begin Delegate FOnRequestGlobalStatsAsyncDelegate ************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestGlobalStatsAsyncDelegate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestGlobalStatsAsyncDelegate constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestGlobalStatsAsyncDelegate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 732347882
void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestGlobalStatsAsyncDelegate Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalStatsAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalStatsAsyncDelegate, FGlobalStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestGlobalStatsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestGlobalStatsAsyncDelegate **************************************

// ********** Begin Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate *******************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2490645116
void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate Property Definitions 
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalAchievementPercentagesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestGlobalAchievementPercentagesAsyncDelegate, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestGlobalAchievementPercentagesAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalAchievementPercentagesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestGlobalAchievementPercentagesAsyncDelegate *********************

// ********** Begin Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate *****************************
struct Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2212816286
void Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate Property Definitions **********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetNumberOfCurrentPlayersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetNumberOfCurrentPlayersAsyncDelegate, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnGetNumberOfCurrentPlayersAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetNumberOfCurrentPlayersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGetNumberOfCurrentPlayersAsyncDelegate *******************************

// ********** Begin Delegate FOnUploadLeaderboardScoreAsyncDelegate ********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnUploadLeaderboardScoreAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnUploadLeaderboardScoreAsyncDelegate constinit property declarations **
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnUploadLeaderboardScoreAsyncDelegate Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3578864929
void Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnUploadLeaderboardScoreAsyncDelegate Property Definitions *************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUploadLeaderboardScoreAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLeaderboardScoreAsyncDelegate, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUploadLeaderboardScoreAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnUploadLeaderboardScoreAsyncDelegate **********************************

// ********** Begin Delegate FOnFindOrCreateLeaderboardAsyncDelegate *******************************
struct Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnFindOrCreateLeaderboardAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnFindOrCreateLeaderboardAsyncDelegate constinit property declarations *
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnFindOrCreateLeaderboardAsyncDelegate Property Definitions **********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1283444140
void Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnFindOrCreateLeaderboardAsyncDelegate Property Definitions ************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindOrCreateLeaderboardAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFindOrCreateLeaderboardAsyncDelegate, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnFindOrCreateLeaderboardAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindOrCreateLeaderboardAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFindOrCreateLeaderboardAsyncDelegate *********************************

// ********** Begin Delegate FOnRequestUserStatsAsyncDelegate **************************************
struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRequestUserStatsAsyncDelegate constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRequestUserStatsAsyncDelegate constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRequestUserStatsAsyncDelegate Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 808212394
void Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnRequestUserStatsAsyncDelegate Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserStatsAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserStatsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestUserStatsAsyncDelegate, FRequestUserStatsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnRequestUserStatsAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestUserStatsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnRequestUserStatsAsyncDelegate ****************************************

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate ********************
struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate Property Definitions 
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4093151137
void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate Property Definitions *
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntriesForUsersAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadLeaderboardEntriesForUsersAsyncDelegate, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsersAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesForUsersAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDownloadLeaderboardEntriesForUsersAsyncDelegate **********************

// ********** Begin Delegate FOnAttachLeaderboardUGCAsyncDelegate **********************************
struct Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnAttachLeaderboardUGCAsyncDelegate constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnAttachLeaderboardUGCAsyncDelegate constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnAttachLeaderboardUGCAsyncDelegate Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2887204487
void Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnAttachLeaderboardUGCAsyncDelegate Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttachLeaderboardUGCAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAttachLeaderboardUGCAsyncDelegate, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCore_eventOnAttachLeaderboardUGCAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnAttachLeaderboardUGCAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAttachLeaderboardUGCAsyncDelegate ************************************

// ********** Begin Class USteamCoreUserStatsAsyncActionFindLeaderboard Function FindLeaderboardAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString LeaderboardName;
		float Timeout;
		USteamCoreUserStatsAsyncActionFindLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name.\n\x09* You must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\n\x09* each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09*\n\x09* @param\x09LeaderboardName\x09\x09The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09* @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Find Leaderboard" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets a leaderboard by name.\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\neach leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param        LeaderboardName         The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n@param        Timeout                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindLeaderboardAsync constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindLeaderboardAsync constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindLeaderboardAsync Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers) < 2048);
// ********** End Function FindLeaderboardAsync Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard, nullptr, "FindLeaderboardAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::SteamCoreUserStatsAsyncActionFindLeaderboard_eventFindLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindLeaderboard::execFindLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionFindLeaderboard**)Z_Param__Result=USteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionFindLeaderboard Function FindLeaderboardAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionFindLeaderboard Function HandleCallback ****
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1999987708
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::SteamCoreUserStatsAsyncActionFindLeaderboard_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindLeaderboard::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardFindResult,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionFindLeaderboard Function HandleCallback ******

// ********** Begin Class USteamCoreUserStatsAsyncActionFindLeaderboard ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard;
UClass* USteamCoreUserStatsAsyncActionFindLeaderboard::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionFindLeaderboard;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionFindLeaderboard"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionFindLeaderboard,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_NoRegister()
{
	return USteamCoreUserStatsAsyncActionFindLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionFindLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionFindLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionFindLeaderboard constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionFindLeaderboard constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindLeaderboardAsync"), .Pointer = &USteamCoreUserStatsAsyncActionFindLeaderboard::execFindLeaderboardAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionFindLeaderboard::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync, "FindLeaderboardAsync" }, // 2348625802
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback, "HandleCallback" }, // 3602033379
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionFindLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionFindLeaderboard Property Definitions *******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionFindLeaderboard, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboardAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3012122815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionFindLeaderboard Property Definitions *********
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionFindLeaderboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionFindLeaderboard::StaticRegisterNativesUSteamCoreUserStatsAsyncActionFindLeaderboard()
{
	UClass* Class = USteamCoreUserStatsAsyncActionFindLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard.OuterSingleton;
}
USteamCoreUserStatsAsyncActionFindLeaderboard::USteamCoreUserStatsAsyncActionFindLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionFindLeaderboard);
USteamCoreUserStatsAsyncActionFindLeaderboard::~USteamCoreUserStatsAsyncActionFindLeaderboard() {}
// ********** End Class USteamCoreUserStatsAsyncActionFindLeaderboard ******************************

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Function DownloadLeaderboardEntriesAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDataRequest Request;
		int32 RangeStart;
		int32 RangeEnd;
		float Timeout;
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Fetches a series of leaderboard entries for a specified leaderboard.\n\x09* You can ask for more entries than exist, then this will return as many as do exist.\n\x09* If you want to download entries for an arbitrary set of users, such as all of\n\x09* the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09Request\x09\x09\x09\x09The type of Data request to make.\n\x09* @param\x09RangeStart\x09\x09\x09The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09* @param\x09RangeEnd\x09\x09\x09The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09* @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Leaderboard Entries" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of\nthe users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\n@param        SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        Request                         The type of Data request to make.\n@param        RangeStart                      The index to start downloading entries relative to eLeaderboardDataRequest.\n@param        RangeEnd                        The last index to retrieve entries for relative to eLeaderboardDataRequest.\n@param        Timeout                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadLeaderboardEntriesAsync constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Request_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Request;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadLeaderboardEntriesAsync constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadLeaderboardEntriesAsync Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1856530772
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, Request), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 4290380942
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers) < 2048);
// ********** End Function DownloadLeaderboardEntriesAsync Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "DownloadLeaderboardEntriesAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventDownloadLeaderboardEntriesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_Request);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries**)Z_Param__Result=USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_Request),Z_Param_RangeStart,Z_Param_RangeEnd,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Function DownloadLeaderboardEntriesAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2074583049
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoresDownloaded,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries *****************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries;
UClass* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntries,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_NoRegister()
{
	return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadLeaderboardEntriesAsync"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execDownloadLeaderboardEntriesAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync, "DownloadLeaderboardEntriesAsync" }, // 2292177940
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback, "HandleCallback" }, // 2070973108
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 61604922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntries()
{
	UClass* Class = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.OuterSingleton;
}
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries);
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::~USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries() {}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries *******************

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 732347882
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::execHandleCallback)
{
	P_GET_STRUCT_REF(FGlobalStatsReceived,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Function RequestGlobalStatsAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms
	{
		UObject* WorldContextObject;
		int32 HistoryDays;
		float Timeout;
		USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Asynchronously fetches global stats Data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09HistoryDays\x09\x09How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Global Stats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Asynchronously fetches global stats Data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\n@param        HistoryDays             How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestGlobalStatsAsync constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestGlobalStatsAsync constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestGlobalStatsAsync Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestGlobalStatsAsync Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats, nullptr, "RequestGlobalStatsAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_eventRequestGlobalStatsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::execRequestGlobalStatsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats**)Z_Param__Result=USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(Z_Param_WorldContextObject,Z_Param_HistoryDays,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Function RequestGlobalStatsAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats *****************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats;
UClass* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadRequestGlobalStats,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_NoRegister()
{
	return USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestGlobalStatsAsync"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::execRequestGlobalStatsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback, "HandleCallback" }, // 172794319
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync, "RequestGlobalStatsAsync" }, // 584587141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStatsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2598215850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadRequestGlobalStats()
{
	UClass* Class = USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.OuterSingleton;
}
USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats);
USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::~USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats() {}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats *******************

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2490645116
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback)
{
	P_GET_STRUCT_REF(FGlobalAchievementPercentagesReady,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Function RequestGlobalAchievementPercentagesAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Asynchronously fetch the Data for the percentage of players who have received each achievement for the current game globally.\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* \n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Global Achievement Percentages" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Asynchronously fetch the Data for the percentage of players who have received each achievement for the current game globally.\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestGlobalAchievementPercentagesAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestGlobalAchievementPercentagesAsync constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestGlobalAchievementPercentagesAsync Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestGlobalAchievementPercentagesAsync Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, nullptr, "RequestGlobalAchievementPercentagesAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_eventRequestGlobalAchievementPercentagesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages**)Z_Param__Result=USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Function RequestGlobalAchievementPercentagesAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages ********
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages;
UClass* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_NoRegister()
{
	return USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestGlobalAchievementPercentagesAsync"), .Pointer = &USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::execRequestGlobalAchievementPercentagesAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback, "HandleCallback" }, // 2607237098
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync, "RequestGlobalAchievementPercentagesAsync" }, // 239986555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentagesAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 210967016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticRegisterNativesUSteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages()
{
	UClass* Class = USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.OuterSingleton;
}
USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages);
USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::~USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages() {}
// ********** End Class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages **********

// ********** Begin Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Get Number Of Current Players" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfCurrentPlayersAsync constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfCurrentPlayersAsync constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfCurrentPlayersAsync Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers) < 2048);
// ********** End Function GetNumberOfCurrentPlayersAsync Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers, nullptr, "GetNumberOfCurrentPlayersAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventGetNumberOfCurrentPlayersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers**)Z_Param__Result=USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Function GetNumberOfCurrentPlayersAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2212816286
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::execHandleCallback)
{
	P_GET_STRUCT_REF(FNumberOfCurrentPlayers,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers ******************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers;
UClass* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_NoRegister()
{
	return USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNumberOfCurrentPlayersAsync"), .Pointer = &USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::execGetNumberOfCurrentPlayersAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync, "GetNumberOfCurrentPlayersAsync" }, // 3672443724
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback, "HandleCallback" }, // 1022252068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayersAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3652756749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticRegisterNativesUSteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers()
{
	UClass* Class = USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.OuterSingleton;
}
USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers);
USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::~USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers() {}
// ********** End Class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers ********************

// ********** Begin Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3578864929
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoreUploaded,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Function UploadLeaderboardScoreAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
		int32 Score;
		TArray<int32> ScoreDetails;
		float Timeout;
		USteamCoreUserStatsAsyncActionUploadLeaderboardScore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreaterefterm", "ScoreDetails" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Uploads a user score to a specified leaderboard.\n\x09* Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\n\x09* you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09* Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09UploadScoreMethod\x09\x09""Do you want to force the score to change, or keep the previous score if it was better?\n\x09* @param\x09Score\x09\x09\x09\x09\x09The score to upload.\n\x09* @param\x09ScoreDetails\x09\x09\x09Optional: Array containing the details surrounding the unlocking of this score.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Upload Leaderboard Score" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\nyou could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param        SteamLeaderboard                A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        UploadScoreMethod               Do you want to force the score to change, or keep the previous score if it was better?\n@param        Score                                   The score to upload.\n@param        ScoreDetails                    Optional: Array containing the details surrounding the unlocking of this score.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function UploadLeaderboardScoreAsync constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UploadLeaderboardScoreAsync constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UploadLeaderboardScoreAsync Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1856530772
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, UploadScoreMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(0, nullptr) }; // 3017658279
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_UploadScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ScoreDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers) < 2048);
// ********** End Function UploadLeaderboardScoreAsync Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, nullptr, "UploadLeaderboardScoreAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::SteamCoreUserStatsAsyncActionUploadLeaderboardScore_eventUploadLeaderboardScoreAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(int32,Z_Param_ScoreDetails);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionUploadLeaderboardScore**)Z_Param__Result=USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Function UploadLeaderboardScoreAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore *********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore;
UClass* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionUploadLeaderboardScore;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionUploadLeaderboardScore"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionUploadLeaderboardScore,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_NoRegister()
{
	return USteamCoreUserStatsAsyncActionUploadLeaderboardScore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionUploadLeaderboardScore\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionUploadLeaderboardScore\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("UploadLeaderboardScoreAsync"), .Pointer = &USteamCoreUserStatsAsyncActionUploadLeaderboardScore::execUploadLeaderboardScoreAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback, "HandleCallback" }, // 389808799
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync, "UploadLeaderboardScoreAsync" }, // 3883782821
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionUploadLeaderboardScore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionUploadLeaderboardScore, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScoreAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 298099039
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore Property Definitions **
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticRegisterNativesUSteamCoreUserStatsAsyncActionUploadLeaderboardScore()
{
	UClass* Class = USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore.OuterSingleton;
}
USteamCoreUserStatsAsyncActionUploadLeaderboardScore::USteamCoreUserStatsAsyncActionUploadLeaderboardScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionUploadLeaderboardScore);
USteamCoreUserStatsAsyncActionUploadLeaderboardScore::~USteamCoreUserStatsAsyncActionUploadLeaderboardScore() {}
// ********** End Class USteamCoreUserStatsAsyncActionUploadLeaderboardScore ***********************

// ********** Begin Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms
	{
		UObject* WorldContextObject;
		FString LeaderboardName;
		ESteamLeaderboardSortMethod SortMethod;
		ESteamLeaderboardDisplayType DisplayType;
		float Timeout;
		USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name, it will create it if it's not yet created.\n\x09* You must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\n\x09* game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09* Leaderboards created with this function will not automatically show up in the Steam Community.\n\x09* You must manually set the Community Name field in the App Admin panel of the Steamworks website.\n\x09* As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\n\x09* website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09* You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\n\x09* for eLeaderboardDisplayType as this is undefined behavior.\n\x09*\n\x09* @param\x09LeaderboardName\x09\x09The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09* @param\x09SortMethod\x09\x09\x09The sort order of the new leaderboard if it's created.\n\x09* @param\x09""DisplayType\x09\x09\x09The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09* @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Find or Create Leaderboard" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\nYou must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\ngame session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community.\nYou must manually set the Community Name field in the App Admin panel of the Steamworks website.\nAs such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\nwebsite and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\nfor eLeaderboardDisplayType as this is undefined behavior.\n\n@param        LeaderboardName         The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param        SortMethod                      The sort order of the new leaderboard if it's created.\n@param        DisplayType                     The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n@param        Timeout                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindOrCreateLeaderboardAsync constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindOrCreateLeaderboardAsync constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindOrCreateLeaderboardAsync Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, SortMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 333087185
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, DisplayType), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 1194779769
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_DisplayType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers) < 2048);
// ********** End Function FindOrCreateLeaderboardAsync Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "FindOrCreateLeaderboardAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventFindOrCreateLeaderboardAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
	P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard**)Z_Param__Result=USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(Z_Param_WorldContextObject,Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType),Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Function FindOrCreateLeaderboardAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1283444140
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback)
{
	P_GET_STRUCT_REF(FFindOrCreateLeaderboardData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard ********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard;
UClass* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionFindOrCreateLeaderboard,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_NoRegister()
{
	return USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindOrCreateLeaderboardAsync"), .Pointer = &USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execFindOrCreateLeaderboardAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync, "FindOrCreateLeaderboardAsync" }, // 238292763
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback, "HandleCallback" }, // 1305651999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboardAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3710289502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard Property Definitions *
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticRegisterNativesUSteamCoreUserStatsAsyncActionFindOrCreateLeaderboard()
{
	UClass* Class = USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.OuterSingleton;
}
USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard);
USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::~USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard() {}
// ********** End Class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard **********************

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestUserStats Function HandleCallback ***
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 808212394
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::SteamCoreUserStatsAsyncActionRequestUserStats_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestUserStats::execHandleCallback)
{
	P_GET_STRUCT_REF(FRequestUserStatsData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionRequestUserStats Function HandleCallback *****

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestUserStats Function RequestUserStatsAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamID;
		float Timeout;
		USteamCoreUserStatsAsyncActionRequestUserStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09* These stats are not automatically updated; you'll need to call this function again to refresh any Data that may have change.\n\x09* To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\n\x09* UserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\n\x09* The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request stats for.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request User Stats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\nThese stats are not automatically updated; you'll need to call this function again to refresh any Data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\nUserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param        SteamID         The Steam ID of the user to request stats for.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestUserStatsAsync constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestUserStatsAsync constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestUserStatsAsync Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers) < 2048);
// ********** End Function RequestUserStatsAsync Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats, nullptr, "RequestUserStatsAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::SteamCoreUserStatsAsyncActionRequestUserStats_eventRequestUserStatsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionRequestUserStats::execRequestUserStatsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionRequestUserStats**)Z_Param__Result=USteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(Z_Param_WorldContextObject,Z_Param_SteamID,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionRequestUserStats Function RequestUserStatsAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestUserStats ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats;
UClass* USteamCoreUserStatsAsyncActionRequestUserStats::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionRequestUserStats;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionRequestUserStats"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionRequestUserStats,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_NoRegister()
{
	return USteamCoreUserStatsAsyncActionRequestUserStats::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionRequestUserStats\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionRequestUserStats\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestUserStats constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionRequestUserStats constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionRequestUserStats::execHandleCallback },
		{ .NameUTF8 = UTF8TEXT("RequestUserStatsAsync"), .Pointer = &USteamCoreUserStatsAsyncActionRequestUserStats::execRequestUserStatsAsync },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback, "HandleCallback" }, // 2187527375
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync, "RequestUserStatsAsync" }, // 1666146204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionRequestUserStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionRequestUserStats Property Definitions ******
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionRequestUserStats, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStatsAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2513757736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionRequestUserStats Property Definitions ********
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionRequestUserStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionRequestUserStats::StaticRegisterNativesUSteamCoreUserStatsAsyncActionRequestUserStats()
{
	UClass* Class = USteamCoreUserStatsAsyncActionRequestUserStats::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats.OuterSingleton;
}
USteamCoreUserStatsAsyncActionRequestUserStats::USteamCoreUserStatsAsyncActionRequestUserStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionRequestUserStats);
USteamCoreUserStatsAsyncActionRequestUserStats::~USteamCoreUserStatsAsyncActionRequestUserStats() {}
// ********** End Class USteamCoreUserStatsAsyncActionRequestUserStats *****************************

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function DownloadLeaderboardEntriesForUsersAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		TArray<FSteamID> Users;
		float Timeout;
		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\x09* A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\n\x09* If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09Users\x09\x09\x09\x09""An array of Steam IDs to get the leaderboard entries for.\n\x09* @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Download Leaderboard Entries for Users" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\nA maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\nIf you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        Users                           An array of Steam IDs to get the leaderboard entries for.\n@param        Timeout                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadLeaderboardEntriesForUsersAsync constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Users;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadLeaderboardEntriesForUsersAsync constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadLeaderboardEntriesForUsersAsync Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1856530772
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers) < 2048);
// ********** End Function DownloadLeaderboardEntriesForUsersAsync Property Definitions ************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "DownloadLeaderboardEntriesForUsersAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventDownloadLeaderboardEntriesForUsersAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_TARRAY(FSteamID,Z_Param_Users);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers**)Z_Param__Result=USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,Z_Param_Users,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function DownloadLeaderboardEntriesForUsersAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4093151137
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback)
{
	P_GET_STRUCT_REF(FLeaderboardScoresDownloadedForUsers,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Function HandleCallback 

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers *********
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
UClass* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_NoRegister()
{
	return USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DownloadLeaderboardEntriesForUsersAsync"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execDownloadLeaderboardEntriesForUsersAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync, "DownloadLeaderboardEntriesForUsersAsync" }, // 3141667552
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback, "HandleCallback" }, // 2657688120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Property Definitions 
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsersAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3857817683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers Property Definitions 
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticRegisterNativesUSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
{
	UClass* Class = USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.OuterSingleton;
}
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers);
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::~USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers() {}
// ********** End Class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers ***********

// ********** Begin Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Function AttachLeaderboardUGCAsync 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics
{
	struct SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamLeaderboard SteamLeaderboard;
		FSteamUGCHandle Handle;
		float Timeout;
		USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|UserStats|Async" },
		{ "Comment", "/**\n\x09* Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09* This content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09* Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09Handle\x09\x09\x09\x09Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09* @param\x09Timeout\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Attach Leaderboard UGC" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        SteamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        Handle                          Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n@param        Timeout                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function AttachLeaderboardUGCAsync constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AttachLeaderboardUGCAsync constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AttachLeaderboardUGCAsync Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 1856530772
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3346822915
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers) < 2048);
// ********** End Function AttachLeaderboardUGCAsync Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC, nullptr, "AttachLeaderboardUGCAsync", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventAttachLeaderboardUGCAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::execAttachLeaderboardUGCAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC**)Z_Param__Result=USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(Z_Param_WorldContextObject,Z_Param_SteamLeaderboard,Z_Param_Handle,Z_Param_Timeout);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Function AttachLeaderboardUGCAsync 

// ********** Begin Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Function HandleCallback 
struct Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics
{
	struct SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCallback constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCallback constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCallback Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2887204487
void Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers) < 2048);
// ********** End Function HandleCallback Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC, nullptr, "HandleCallback", 	Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::execHandleCallback)
{
	P_GET_STRUCT_REF(FAttachLeaderboardUGCData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Function HandleCallback *

// ********** Begin Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC ***********************
FClassRegistrationInfo Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC;
UClass* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::GetPrivateStaticClass()
{
	using TClass = USteamCoreUserStatsAsyncActionAttachLeaderboardUGC;
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SteamCoreUserStatsAsyncActionAttachLeaderboardUGC"),
			Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton,
			StaticRegisterNativesUSteamCoreUserStatsAsyncActionAttachLeaderboardUGC,
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
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.InnerSingleton;
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_NoRegister()
{
	return USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreUserStatsAsyncActionAttachLeaderboardUGC\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreUserStatsAsyncActionAttachLeaderboardUGC\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsAsyncActions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC constinit property declarations 
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AttachLeaderboardUGCAsync"), .Pointer = &USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::execAttachLeaderboardUGCAsync },
		{ .NameUTF8 = UTF8TEXT("HandleCallback"), .Pointer = &USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::execHandleCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync, "AttachLeaderboardUGCAsync" }, // 1070215914
		{ &Z_Construct_UFunction_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback, "HandleCallback" }, // 3693722880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreUserStatsAsyncActionAttachLeaderboardUGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics

// ********** Begin Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Property Definitions **
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC, OnCallback), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGCAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4010237374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers) < 2048);
// ********** End Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC Property Definitions ****
UObject* (*const Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::ClassParams = {
	&USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::Class_MetaDataParams)
};
void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticRegisterNativesUSteamCoreUserStatsAsyncActionAttachLeaderboardUGC()
{
	UClass* Class = USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::Funcs));
}
UClass* Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC()
{
	if (!Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton, Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC.OuterSingleton;
}
USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::USteamCoreUserStatsAsyncActionAttachLeaderboardUGC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USteamCoreUserStatsAsyncActionAttachLeaderboardUGC);
USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::~USteamCoreUserStatsAsyncActionAttachLeaderboardUGC() {}
// ********** End Class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC *************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard, USteamCoreUserStatsAsyncActionFindLeaderboard::StaticClass, TEXT("USteamCoreUserStatsAsyncActionFindLeaderboard"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionFindLeaderboard), 2891405905U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::StaticClass, TEXT("USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries), 1364279816U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats, USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::StaticClass, TEXT("USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats), 310265828U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::StaticClass, TEXT("USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages), 2103234023U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers, USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::StaticClass, TEXT("USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers), 1764089191U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, USteamCoreUserStatsAsyncActionUploadLeaderboardScore::StaticClass, TEXT("USteamCoreUserStatsAsyncActionUploadLeaderboardScore"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionUploadLeaderboardScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionUploadLeaderboardScore), 2830468966U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::StaticClass, TEXT("USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard), 1687256673U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionRequestUserStats, USteamCoreUserStatsAsyncActionRequestUserStats::StaticClass, TEXT("USteamCoreUserStatsAsyncActionRequestUserStats"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionRequestUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionRequestUserStats), 261678385U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::StaticClass, TEXT("USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers), 543368794U) },
		{ Z_Construct_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC, USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::StaticClass, TEXT("USteamCoreUserStatsAsyncActionAttachLeaderboardUGC"), &Z_Registration_Info_UClass_USteamCoreUserStatsAsyncActionAttachLeaderboardUGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreUserStatsAsyncActionAttachLeaderboardUGC), 430026241U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_SteamCore_2789469074{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamUserStats_SteamUserStatsAsyncActions_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
