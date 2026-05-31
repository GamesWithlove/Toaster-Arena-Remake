// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMatchmaking/SteamMatchmaking.h"
#include "Engine/GameInstance.h"
#include "SteamTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSteamMatchmaking() {}

// ********** Begin Cross Module References ********************************************************
STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking();
STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking_NoRegister();
STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature();
STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature();
STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
UPackage* Z_Construct_UPackage__Script_SteamCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMatchmaking Function AddFavoriteGame ************************************
struct Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics
{
	struct Matchmaking_eventAddFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\n@param        AppID                                           The App ID of the game.\n@param        IP                                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          The port used to connect to the server, in host order.\n@param        QueryPort                                       The port used to query the server, in host order.\n@param        Flags                                           Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          This should be the current time in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddFavoriteGame constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddFavoriteGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddFavoriteGame Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function AddFavoriteGame Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddFavoriteGame", 	Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Matchmaking_eventAddFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Matchmaking_eventAddFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags,Z_Param_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddFavoriteGame **************************************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListCompatibleMembersFilter *********
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Checks the player compatibility based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDLobby\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Checks the player compatibility based on the frenemy system.\n\n@param        SteamIDLobby" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListCompatibleMembersFilter constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListCompatibleMembersFilter constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListCompatibleMembersFilter Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListCompatibleMembersFilter Property Definitions *********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListCompatibleMembersFilter ***********

// ********** Begin Class UMatchmaking Function AddRequestLobbyListDistanceFilter ******************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms
	{
		ESteamLobbyDistanceFilter LobbyDistanceFilter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\x09*\n\x09* @param\x09LobbyDistanceFilter\x09\x09Specifies the maximum distance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\n@param        LobbyDistanceFilter             Specifies the maximum distance." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListDistanceFilter constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListDistanceFilter constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListDistanceFilter Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 4187397365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListDistanceFilter Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListDistanceFilter)
{
	P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListDistanceFilter ********************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListFilterSlotsAvailable ************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
{
	struct Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
	{
		int32 SlotsAvailable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Filters to only return lobbies with the specified number of open slots available.\n\x09*\n\x09* @param\x09SlotsAvailable\x09The number of open slots that must be open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Filters to only return lobbies with the specified number of open slots available.\n\n@param        SlotsAvailable  The number of open slots that must be open." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListFilterSlotsAvailable constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListFilterSlotsAvailable constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListFilterSlotsAvailable Property Definitions **********
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListFilterSlotsAvailable Property Definitions ************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListFilterSlotsAvailable **************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListNearValueFilter *****************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToBeCloseTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sorts the results closest to the specified value.\n\x09*\n\x09* Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToBeCloseTo\x09The value that lobbies will be sorted on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sorts the results closest to the specified value.\n\nNear filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToBeCloseTo        The value that lobbies will be sorted on." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListNearValueFilter constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListNearValueFilter constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListNearValueFilter Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListNearValueFilter Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNearValueFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListNearValueFilter *******************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListNumericalFilter *****************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms
	{
		FString KeyToMatch;
		int32 ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a numerical comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The number to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a numerical comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The number to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListNumericalFilter constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListNumericalFilter constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListNumericalFilter Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 3487133031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListNumericalFilter Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNumericalFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListNumericalFilter *******************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListResultCountFilter ***************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms
	{
		int32 MaxResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\x09*\n\x09* @param\x09MaxResults\x09The maximum number of lobbies to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\n@param        MaxResults      The maximum number of lobbies to return." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListResultCountFilter constinit property declarations **
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListResultCountFilter constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListResultCountFilter Property Definitions *************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListResultCountFilter Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListResultCountFilter)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListResultCountFilter *****************

// ********** Begin Class UMatchmaking Function AddRequestLobbyListStringFilter ********************
struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics
{
	struct Matchmaking_eventAddRequestLobbyListStringFilter_Parms
	{
		FString KeyToMatch;
		FString ValueToMatch;
		ESteamLobbyComparison ComparisonType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a string comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The string to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a string comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The string to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRequestLobbyListStringFilter constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRequestLobbyListStringFilter constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRequestLobbyListStringFilter Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(0, nullptr) }; // 3487133031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers) < 2048);
// ********** End Function AddRequestLobbyListStringFilter Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListStringFilter", 	Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Matchmaking_eventAddRequestLobbyListStringFilter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Matchmaking_eventAddRequestLobbyListStringFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListStringFilter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
	P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function AddRequestLobbyListStringFilter **********************

// ********** Begin Class UMatchmaking Function CreateLobby ****************************************
struct Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics
{
	struct Matchmaking_eventCreateLobby_Parms
	{
		FScriptDelegate Callback;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLobby constinit property declarations ***************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLobby constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLobby Property Definitions **************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2785747288
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 1984566643
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers) < 2048);
// ********** End Function CreateLobby Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "CreateLobby", 	Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Matchmaking_eventCreateLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Matchmaking_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execCreateLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateLobby(FOnCreateLobby(Z_Param_Out_Callback),ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function CreateLobby ******************************************

// ********** Begin Class UMatchmaking Function DeleteLobbyData ************************************
struct Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics
{
	struct Matchmaking_eventDeleteLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes a metadata key from the lobby.\n\x09*\n\x09* This can only be done by the owner of the lobby.\n\x09* This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to delete the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09The key to delete the data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes a metadata key from the lobby.\n\nThis can only be done by the owner of the lobby.\nThis will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby    The Steam ID of the lobby to delete the metadata for.\n@param        Key                             The key to delete the data for." },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteLobbyData constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeleteLobbyData constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeleteLobbyData Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers) < 2048);
// ********** End Function DeleteLobbyData Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "DeleteLobbyData", 	Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Matchmaking_eventDeleteLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Matchmaking_eventDeleteLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_DeleteLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execDeleteLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function DeleteLobbyData **************************************

// ********** Begin Class UMatchmaking Function GetFavoriteGame ************************************
struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics
{
	struct Matchmaking_eventGetFavoriteGame_Parms
	{
		int32 Game;
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		int32 TimeLastPlayedOnServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of the favorite game server by index.\n\x09*\n\x09* You must call GetFavoriteGameCount before calling this.\n\x09*\n\x09* @param\x09Game\x09\x09\x09\x09\x09\x09The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09Returns the App ID this server is for.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09Returns the port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09Returns the port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of the favorite game server by index.\n\nYou must call GetFavoriteGameCount before calling this.\n\n@param        Game                                            The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n@param        AppID                                           Returns the App ID this server is for.\n@param        IP                                                      Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          Returns the port used to connect to the server, in host order.\n@param        QueryPort                                       Returns the port used to query the server, in host order.\n@param        Flags                                           Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFavoriteGame constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Game;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFavoriteGame constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFavoriteGame Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Game), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Game,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function GetFavoriteGame Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGame", 	Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Matchmaking_eventGetFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Matchmaking_eventGetFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Game);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
	P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeLastPlayedOnServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::GetFavoriteGame(Z_Param_Game,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_TimeLastPlayedOnServer);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetFavoriteGame **************************************

// ********** Begin Class UMatchmaking Function GetFavoriteGameCount *******************************
struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics
{
	struct Matchmaking_eventGetFavoriteGameCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of favorite and recent game servers the user has stored locally.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of favorite and recent game servers the user has stored locally." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFavoriteGameCount constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFavoriteGameCount constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFavoriteGameCount Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers) < 2048);
// ********** End Function GetFavoriteGameCount Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGameCount", 	Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Matchmaking_eventGetFavoriteGameCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Matchmaking_eventGetFavoriteGameCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGameCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::GetFavoriteGameCount();
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetFavoriteGameCount *********************************

// ********** Begin Class UMatchmaking Function GetLobbyByIndex ************************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics
{
	struct Matchmaking_eventGetLobbyByIndex_Parms
	{
		int32 Lobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\x09*\n\x09* This should only be called after a LobbyMatchList_t call result is received.\n\x09*\n\x09* @param\x09Lobby\x09The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\nThis should only be called after a LobbyMatchList_t call result is received.\n\n@param        Lobby   The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyByIndex constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyByIndex constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyByIndex Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, Lobby), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyByIndex Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyByIndex", 	Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Matchmaking_eventGetLobbyByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Matchmaking_eventGetLobbyByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Lobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyByIndex(Z_Param_Lobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyByIndex **************************************

// ********** Begin Class UMatchmaking Function GetLobbyChatEntry **********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics
{
	struct Matchmaking_eventGetLobbyChatEntry_Parms
	{
		FSteamID SteamIDLobby;
		int32 MessageID;
		FSteamID SteamIDUser;
		FString Message;
		ESteamChatEntryType ChatEntryType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09MessageID\x09\x09\x09\x09The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n\x09* @param\x09SteamIDUser\x09\x09\x09\x09If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09Message\x09\x09\x09\x09\x09Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n\x09* @param\x09""ChatEntryType\x09\x09\x09If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n@param        MessageID                               The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n@param        SteamIDUser                             If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n@param        Message                                 Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n@param        ChatEntryType                   If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyChatEntry constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyChatEntry constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyChatEntry Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, MessageID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(0, nullptr) }; // 2279825220
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyChatEntry Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyChatEntry", 	Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Matchmaking_eventGetLobbyChatEntry_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Matchmaking_eventGetLobbyChatEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyChatEntry)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDUser);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::GetLobbyChatEntry(Z_Param_SteamIDLobby,Z_Param_MessageID,Z_Param_Out_SteamIDUser,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyChatEntry ************************************

// ********** Begin Class UMatchmaking Function GetLobbyData ***************************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics
{
	struct Matchmaking_eventGetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the metadata associated with the specified key from the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the metadata associated with the specified key from the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyData constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyData Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyData", 	Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Matchmaking_eventGetLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Matchmaking_eventGetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMatchmaking::GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyData *****************************************

// ********** Begin Class UMatchmaking Function GetLobbyDataByIndex ********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics
{
	struct Matchmaking_eventGetLobbyDataByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 LobbyData;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets a lobby metadata key/value pair by index.\n\x09*\n\x09* You must call GetLobbyDataCount before calling this.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n\x09* @param\x09LobbyData\x09\x09\x09""An index between 0 and GetLobbyDataCount.\n\x09* @param\x09Key\x09\x09\x09\x09\x09Returns the name of the key at the specified index by copying it into this buffer.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the value associated with the key at the specified index by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets a lobby metadata key/value pair by index.\n\nYou must call GetLobbyDataCount before calling this.\n\n@param        SteamIDLobby            This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n@param        LobbyData                       An index between 0 and GetLobbyDataCount.\n@param        Key                                     Returns the name of the key at the specified index by copying it into this buffer.\n@param        Value                           Returns the value associated with the key at the specified index by copying it into this buffer." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyDataByIndex constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyDataByIndex constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyDataByIndex Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyDataByIndex Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataByIndex", 	Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Matchmaking_eventGetLobbyDataByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Matchmaking_eventGetLobbyDataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_LobbyData);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::GetLobbyDataByIndex(Z_Param_SteamIDLobby,Z_Param_LobbyData,Z_Param_Out_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyDataByIndex **********************************

// ********** Begin Class UMatchmaking Function GetLobbyDataCount **********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics
{
	struct Matchmaking_eventGetLobbyDataCount_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of metadata keys set on the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09* This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\n\x09* This should typically only ever be used for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDLobby\x09 The Steam ID of the lobby to get the data count from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of metadata keys set on the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\nThis is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\nThis should typically only ever be used for debugging purposes.\n\n@param        SteamIDLobby     The Steam ID of the lobby to get the data count from." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyDataCount constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyDataCount constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyDataCount Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyDataCount Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataCount", 	Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Matchmaking_eventGetLobbyDataCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Matchmaking_eventGetLobbyDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataCount)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::GetLobbyDataCount(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyDataCount ************************************

// ********** Begin Class UMatchmaking Function GetLobbyGameServer *********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics
{
	struct Matchmaking_eventGetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of a game server set in a lobby.\n\x09*\n\x09* Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the game server information from.\n\x09* @param\x09GameServerIP\x09\x09\x09Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n\x09* @param\x09GameServerPort\x09\x09\x09Returns the connection port of the game server, in host order, if it's set.\n\x09* @param\x09SteamIDGameServer\x09\x09Returns the Steam ID of the game server, if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of a game server set in a lobby.\n\nEither the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the game server information from.\n@param        GameServerIP                    Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n@param        GameServerPort                  Returns the connection port of the game server, in host order, if it's set.\n@param        SteamIDGameServer               Returns the Steam ID of the game server, if it's set." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyGameServer constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyGameServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyGameServer Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyGameServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyGameServer", 	Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Matchmaking_eventGetLobbyGameServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Matchmaking_eventGetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::GetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_SteamIDGameServer);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyGameServer ***********************************

// ********** Begin Class UMatchmaking Function GetLobbyMemberByIndex ******************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics
{
	struct Matchmaking_eventGetLobbyMemberByIndex_Parms
	{
		FSteamID SteamIDLobby;
		int32 Member;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby member at the given index.\n\x09*\n\x09* You must call GetNumLobbyMembers before calling this.\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n\x09* @param\x09Member\x09\x09\x09""An index between 0 and GetNumLobbyMembers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby member at the given index.\n\nYou must call GetNumLobbyMembers before calling this.\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\n@param        SteamIDLobby    This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n@param        Member                  An index between 0 and GetNumLobbyMembers." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberByIndex constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Member;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberByIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberByIndex Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, Member), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberByIndex Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberByIndex", 	Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Matchmaking_eventGetLobbyMemberByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Matchmaking_eventGetLobbyMemberByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberByIndex)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_Member);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_Member);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyMemberByIndex ********************************

// ********** Begin Class UMatchmaking Function GetLobbyMemberData *********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics
{
	struct Matchmaking_eventGetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDUser;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets per-user metadata from another player in the specified lobby.\n\x09*\n\x09* This can only be queried from members in lobbies that you are currently in.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby that the other player is in.\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the player to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets per-user metadata from another player in the specified lobby.\n\nThis can only be queried from members in lobbies that you are currently in.\n\n@param        SteamIDLobby    The Steam ID of the lobby that the other player is in.\n@param        SteamIDUser             The Steam ID of the player to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberData", 	Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Matchmaking_eventGetLobbyMemberData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Matchmaking_eventGetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMatchmaking::GetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_SteamIDUser,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyMemberData ***********************************

// ********** Begin Class UMatchmaking Function GetLobbyMemberLimit ********************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics
{
	struct Matchmaking_eventGetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* The current limit on the # of users who can join the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the member limit of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "The current limit on the # of users who can join the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the member limit of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyMemberLimit constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyMemberLimit constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyMemberLimit Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyMemberLimit Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberLimit", 	Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Matchmaking_eventGetLobbyMemberLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Matchmaking_eventGetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::GetLobbyMemberLimit(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyMemberLimit **********************************

// ********** Begin Class UMatchmaking Function GetLobbyOwner **************************************
struct Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics
{
	struct Matchmaking_eventGetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Returns the current lobby owner.\n\x09*\n\x09* You must be a member of the lobby to access this.\n\x09* There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the owner of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Returns the current lobby owner.\n\nYou must be a member of the lobby to access this.\nThere always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the owner of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLobbyOwner constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLobbyOwner constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLobbyOwner Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers) < 2048);
// ********** End Function GetLobbyOwner Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyOwner", 	Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Matchmaking_eventGetLobbyOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Matchmaking_eventGetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyOwner(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetLobbyOwner ****************************************

// ********** Begin Class UMatchmaking Function GetNumLobbyMembers *********************************
struct Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics
{
	struct Matchmaking_eventGetNumLobbyMembers_Parms
	{
		FSteamID SteamIDLobby;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of users in a lobby.\n\x09*\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the number of members of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of users in a lobby.\n\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the number of members of." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumLobbyMembers constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumLobbyMembers constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumLobbyMembers Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers) < 2048);
// ********** End Function GetNumLobbyMembers Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetNumLobbyMembers", 	Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Matchmaking_eventGetNumLobbyMembers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Matchmaking_eventGetNumLobbyMembers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execGetNumLobbyMembers)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMatchmaking::GetNumLobbyMembers(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function GetNumLobbyMembers ***********************************

// ********** Begin Class UMatchmaking Function InviteUserToLobby **********************************
struct Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics
{
	struct Matchmaking_eventInviteUserToLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDInvitee;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Invite another user to the lobby.\n\x09*\n\x09* If the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\n\x09* or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to invite the user to.\n\x09* @param\x09SteamIDInvitee\x09\x09The Steam ID of the person who will be invited.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Invite another user to the lobby.\n\nIf the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\nor if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n@param        SteamIDLobby            The Steam ID of the lobby to invite the user to.\n@param        SteamIDInvitee          The Steam ID of the person who will be invited." },
	};
#endif // WITH_METADATA

// ********** Begin Function InviteUserToLobby constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InviteUserToLobby constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InviteUserToLobby Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers) < 2048);
// ********** End Function InviteUserToLobby Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "InviteUserToLobby", 	Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Matchmaking_eventInviteUserToLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Matchmaking_eventInviteUserToLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_InviteUserToLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execInviteUserToLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function InviteUserToLobby ************************************

// ********** Begin Class UMatchmaking Function JoinLobby ******************************************
struct Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics
{
	struct Matchmaking_eventJoinLobby_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09*\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Joins an existing lobby.\n\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinLobby constinit property declarations *****************************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JoinLobby constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JoinLobby Property Definitions ****************************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1911286682
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers) < 2048);
// ********** End Function JoinLobby Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "JoinLobby", 	Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Matchmaking_eventJoinLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Matchmaking_eventJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_JoinLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execJoinLobby)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinLobby(FOnJoinLobby(Z_Param_Out_Callback),Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function JoinLobby ********************************************

// ********** Begin Class UMatchmaking Function LeaveLobby *****************************************
struct Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics
{
	struct Matchmaking_eventLeaveLobby_Parms
	{
		FSteamID SteamIDLobby;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The lobby to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\n@param        SteamIDLobby    The lobby to leave." },
	};
#endif // WITH_METADATA

// ********** Begin Function LeaveLobby constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LeaveLobby constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LeaveLobby Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers) < 2048);
// ********** End Function LeaveLobby Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "LeaveLobby", 	Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Matchmaking_eventLeaveLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Matchmaking_eventLeaveLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_LeaveLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execLeaveLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::LeaveLobby(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function LeaveLobby *******************************************

// ********** Begin Class UMatchmaking Function RemoveFavoriteGame *********************************
struct Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics
{
	struct Matchmaking_eventRemoveFavoriteGame_Parms
	{
		int32 AppID;
		FString IP;
		int32 ConnectionPort;
		int32 QueryPort;
		TArray<ESteamFavoriteFlags> Flags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes the game server from the local favorites list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes the game server from the local favorites list.\n\n@param        AppID                           The App ID of the game.\n@param        IP                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort          The port used to connect to the server, in host order.\n@param        QueryPort                       The port used to query the server, in host order.\n@param        Flags                           Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information." },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveFavoriteGame constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveFavoriteGame constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveFavoriteGame Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(0, nullptr) }; // 358319
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 358319
void Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers) < 2048);
// ********** End Function RemoveFavoriteGame Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RemoveFavoriteGame", 	Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Matchmaking_eventRemoveFavoriteGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Matchmaking_eventRemoveFavoriteGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execRemoveFavoriteGame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function RemoveFavoriteGame ***********************************

// ********** Begin Class UMatchmaking Function RequestLobbyData ***********************************
struct Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics
{
	struct Matchmaking_eventRequestLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Refreshes all of the metadata for a lobby that you're not in right now.\n\x09*\n\x09* You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to refresh the metadata of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Refreshes all of the metadata for a lobby that you're not in right now.\n\nYou will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\n@param        SteamIDLobby    The Steam ID of the lobby to refresh the metadata of." },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLobbyData constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLobbyData constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLobbyData Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers) < 2048);
// ********** End Function RequestLobbyData Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyData", 	Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Matchmaking_eventRequestLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Matchmaking_eventRequestLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execRequestLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::RequestLobbyData(Z_Param_SteamIDLobby);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function RequestLobbyData *************************************

// ********** Begin Class UMatchmaking Function RequestLobbyList ***********************************
struct Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics
{
	struct Matchmaking_eventRequestLobbyList_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09*\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\n\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestLobbyList constinit property declarations **********************
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestLobbyList constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestLobbyList Property Definitions *********************************
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2082010632
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers) < 2048);
// ********** End Function RequestLobbyList Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyList", 	Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Matchmaking_eventRequestLobbyList_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Matchmaking_eventRequestLobbyList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execRequestLobbyList)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function RequestLobbyList *************************************

// ********** Begin Class UMatchmaking Function SendLobbyChatMsg ***********************************
struct Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics
{
	struct Matchmaking_eventSendLobbyChatMsg_Parms
	{
		FSteamID SteamIDLobby;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\x09*\n\x09* All users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\n\x09* If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\n\x09* For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\n\x09* These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to send the chat message to.\n\x09* @param\x09Message\x09\x09\x09This can be text or binary data, up to 4 Kilobytes in size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\nAll users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\nIf you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\nFor communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\nThese messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\n@param        SteamIDLobby    The Steam ID of the lobby to send the chat message to.\n@param        Message                 This can be text or binary data, up to 4 Kilobytes in size." },
	};
#endif // WITH_METADATA

// ********** Begin Function SendLobbyChatMsg constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendLobbyChatMsg constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendLobbyChatMsg Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers) < 2048);
// ********** End Function SendLobbyChatMsg Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SendLobbyChatMsg", 	Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Matchmaking_eventSendLobbyChatMsg_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Matchmaking_eventSendLobbyChatMsg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSendLobbyChatMsg)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SendLobbyChatMsg(Z_Param_SteamIDLobby,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SendLobbyChatMsg *************************************

// ********** Begin Class UMatchmaking Function SetLinkedLobby *************************************
struct Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics
{
	struct Matchmaking_eventSetLinkedLobby_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDLobbyDependent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\n\x09* You must be the lobby owner of both lobbies.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09\x09The Steam ID of the primary lobby.\n\x09* @param\x09SteamIDLobbyDependent\x09\x09The Steam ID that will be linked to the primary lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\nYou must be the lobby owner of both lobbies.\n\n@param        SteamIDLobby                            The Steam ID of the primary lobby.\n@param        SteamIDLobbyDependent           The Steam ID that will be linked to the primary lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLinkedLobby constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobbyDependent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLinkedLobby constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLinkedLobby Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent = { "SteamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers) < 2048);
// ********** End Function SetLinkedLobby Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLinkedLobby", 	Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Matchmaking_eventSetLinkedLobby_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Matchmaking_eventSetLinkedLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLinkedLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLinkedLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobbyDependent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLinkedLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDLobbyDependent);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLinkedLobby ***************************************

// ********** Begin Class UMatchmaking Function SetLobbyData ***************************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics
{
	struct Matchmaking_eventSetLobbyData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\x09*\n\x09* This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\nThis can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThis will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set the metadata for.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyData constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyData constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyData Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyData Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyData", 	Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Matchmaking_eventSetLobbyData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Matchmaking_eventSetLobbyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyData *****************************************

// ********** Begin Class UMatchmaking Function SetLobbyGameServer *********************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics
{
	struct Matchmaking_eventSetLobbyGameServer_Parms
	{
		FSteamID SteamIDLobby;
		FString GameServerIP;
		int32 GameServerPort;
		FSteamID SteamIDGameServer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the game server associated with the lobby.\n\x09*\n\x09* This can only be set by the owner of the lobby.\n\x09* Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\n\x09* A LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to set the game server information for.\n\x09* @param\x09GameServerIP\x09\x09\x09Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09GameServerPort\x09\x09\x09Sets the connection port of the game server, in host order.\n\x09* @param\x09SteamIDGameServer\x09\x09Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the game server associated with the lobby.\n\nThis can only be set by the owner of the lobby.\nEither the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\nA LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to set the game server information for.\n@param        GameServerIP                    Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        GameServerPort                  Sets the connection port of the game server, in host order.\n@param        SteamIDGameServer               Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyGameServer constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyGameServer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyGameServer Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyGameServer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyGameServer", 	Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Matchmaking_eventSetLobbyGameServer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Matchmaking_eventSetLobbyGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyGameServer)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::SetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_SteamIDGameServer);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyGameServer ***********************************

// ********** Begin Class UMatchmaking Function SetLobbyJoinable ***********************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics
{
	struct Matchmaking_eventSetLobbyJoinable_Parms
	{
		FSteamID SteamIDLobby;
		bool bLobbyJoinable;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\x09*\n\x09* If joining is disabled, then no players can join, even if they are a friend or have been invited.\n\x09* Lobbies with joining disabled will not be returned from a lobby search.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby\n\x09* @param\x09""bLobbyJoinable\x09\x09""Enable (true) or disable (false) allowing users to join this lobby?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\nIf joining is disabled, then no players can join, even if they are a friend or have been invited.\nLobbies with joining disabled will not be returned from a lobby search.\n\n@param        SteamIDLobby            The Steam ID of the lobby\n@param        bLobbyJoinable          Enable (true) or disable (false) allowing users to join this lobby?" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyJoinable constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static void NewProp_bLobbyJoinable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyJoinable constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyJoinable Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyJoinable Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyJoinable", 	Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Matchmaking_eventSetLobbyJoinable_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Matchmaking_eventSetLobbyJoinable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyJoinable)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_UBOOL(Z_Param_bLobbyJoinable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyJoinable *************************************

// ********** Begin Class UMatchmaking Function SetLobbyMemberData *********************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics
{
	struct Matchmaking_eventSetLobbyMemberData_Parms
	{
		FSteamID SteamIDLobby;
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets per-user metadata for the local user.\n\x09*\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set our metadata in.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets per-user metadata for the local user.\n\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThere is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set our metadata in.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyMemberData constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyMemberData constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyMemberData Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyMemberData Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberData", 	Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Matchmaking_eventSetLobbyMemberData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Matchmaking_eventSetLobbyMemberData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMatchmaking::SetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyMemberData ***********************************

// ********** Begin Class UMatchmaking Function SetLobbyMemberLimit ********************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics
{
	struct Matchmaking_eventSetLobbyMemberLimit_Parms
	{
		FSteamID SteamIDLobby;
		int32 MaxMembers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Set the maximum number of players that can join the lobby.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the member limit for.\n\x09* @param\x09MaxMembers\x09\x09The maximum number of players allowed in this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Set the maximum number of players that can join the lobby.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the member limit for.\n@param        MaxMembers              The maximum number of players allowed in this lobby. This can not be above 250." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyMemberLimit constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyMemberLimit constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyMemberLimit Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyMemberLimit Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberLimit", 	Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Matchmaking_eventSetLobbyMemberLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Matchmaking_eventSetLobbyMemberLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberLimit)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyMemberLimit **********************************

// ********** Begin Class UMatchmaking Function SetLobbyOwner **************************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics
{
	struct Matchmaking_eventSetLobbyOwner_Parms
	{
		FSteamID SteamIDLobby;
		FSteamID SteamIDNewOwner;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Changes who the lobby owner is.\n\x09*\n\x09* This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby where the owner change will take place.\n\x09* @param\x09SteamIDNewOwner\x09\x09The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Changes who the lobby owner is.\n\nThis can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\n@param        SteamIDLobby            The Steam ID of the lobby where the owner change will take place.\n@param        SteamIDNewOwner         The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyOwner constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyOwner constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyOwner Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
void Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyOwner Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyOwner", 	Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Matchmaking_eventSetLobbyOwner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Matchmaking_eventSetLobbyOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyOwner)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLobbyOwner(Z_Param_SteamIDLobby,Z_Param_SteamIDNewOwner);
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyOwner ****************************************

// ********** Begin Class UMatchmaking Function SetLobbyType ***************************************
struct Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics
{
	struct Matchmaking_eventSetLobbyType_Parms
	{
		FSteamID SteamIDLobby;
		ESteamLobbyType LobbyType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Updates what type of lobby this is.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the type of.\n\x09* @param\x09LobbyType\x09\x09The new lobby type to that will be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Updates what type of lobby this is.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the type of.\n@param        LobbyType               The new lobby type to that will be set." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLobbyType constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLobbyType constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLobbyType Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 3382971600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 1984566643
void Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Matchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers) < 2048);
// ********** End Function SetLobbyType Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyType", 	Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Matchmaking_eventSetLobbyType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Matchmaking_eventSetLobbyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchmaking::execSetLobbyType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMatchmaking::SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
	P_NATIVE_END;
}
// ********** End Class UMatchmaking Function SetLobbyType *****************************************

// ********** Begin Class UMatchmaking *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMatchmaking;
UClass* UMatchmaking::GetPrivateStaticClass()
{
	using TClass = UMatchmaking;
	if (!Z_Registration_Info_UClass_UMatchmaking.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Matchmaking"),
			Z_Registration_Info_UClass_UMatchmaking.InnerSingleton,
			StaticRegisterNativesUMatchmaking,
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
	return Z_Registration_Info_UClass_UMatchmaking.InnerSingleton;
}
UClass* Z_Construct_UClass_UMatchmaking_NoRegister()
{
	return UMatchmaking::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMatchmaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmaking/SteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMatchmaking constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMatchmaking constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddFavoriteGame"), .Pointer = &UMatchmaking::execAddFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListCompatibleMembersFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListDistanceFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListDistanceFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListFilterSlotsAvailable"), .Pointer = &UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListNearValueFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListNearValueFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListNumericalFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListNumericalFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListResultCountFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListResultCountFilter },
		{ .NameUTF8 = UTF8TEXT("AddRequestLobbyListStringFilter"), .Pointer = &UMatchmaking::execAddRequestLobbyListStringFilter },
		{ .NameUTF8 = UTF8TEXT("CreateLobby"), .Pointer = &UMatchmaking::execCreateLobby },
		{ .NameUTF8 = UTF8TEXT("DeleteLobbyData"), .Pointer = &UMatchmaking::execDeleteLobbyData },
		{ .NameUTF8 = UTF8TEXT("GetFavoriteGame"), .Pointer = &UMatchmaking::execGetFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("GetFavoriteGameCount"), .Pointer = &UMatchmaking::execGetFavoriteGameCount },
		{ .NameUTF8 = UTF8TEXT("GetLobbyByIndex"), .Pointer = &UMatchmaking::execGetLobbyByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyChatEntry"), .Pointer = &UMatchmaking::execGetLobbyChatEntry },
		{ .NameUTF8 = UTF8TEXT("GetLobbyData"), .Pointer = &UMatchmaking::execGetLobbyData },
		{ .NameUTF8 = UTF8TEXT("GetLobbyDataByIndex"), .Pointer = &UMatchmaking::execGetLobbyDataByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyDataCount"), .Pointer = &UMatchmaking::execGetLobbyDataCount },
		{ .NameUTF8 = UTF8TEXT("GetLobbyGameServer"), .Pointer = &UMatchmaking::execGetLobbyGameServer },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberByIndex"), .Pointer = &UMatchmaking::execGetLobbyMemberByIndex },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberData"), .Pointer = &UMatchmaking::execGetLobbyMemberData },
		{ .NameUTF8 = UTF8TEXT("GetLobbyMemberLimit"), .Pointer = &UMatchmaking::execGetLobbyMemberLimit },
		{ .NameUTF8 = UTF8TEXT("GetLobbyOwner"), .Pointer = &UMatchmaking::execGetLobbyOwner },
		{ .NameUTF8 = UTF8TEXT("GetNumLobbyMembers"), .Pointer = &UMatchmaking::execGetNumLobbyMembers },
		{ .NameUTF8 = UTF8TEXT("InviteUserToLobby"), .Pointer = &UMatchmaking::execInviteUserToLobby },
		{ .NameUTF8 = UTF8TEXT("JoinLobby"), .Pointer = &UMatchmaking::execJoinLobby },
		{ .NameUTF8 = UTF8TEXT("LeaveLobby"), .Pointer = &UMatchmaking::execLeaveLobby },
		{ .NameUTF8 = UTF8TEXT("RemoveFavoriteGame"), .Pointer = &UMatchmaking::execRemoveFavoriteGame },
		{ .NameUTF8 = UTF8TEXT("RequestLobbyData"), .Pointer = &UMatchmaking::execRequestLobbyData },
		{ .NameUTF8 = UTF8TEXT("RequestLobbyList"), .Pointer = &UMatchmaking::execRequestLobbyList },
		{ .NameUTF8 = UTF8TEXT("SendLobbyChatMsg"), .Pointer = &UMatchmaking::execSendLobbyChatMsg },
		{ .NameUTF8 = UTF8TEXT("SetLinkedLobby"), .Pointer = &UMatchmaking::execSetLinkedLobby },
		{ .NameUTF8 = UTF8TEXT("SetLobbyData"), .Pointer = &UMatchmaking::execSetLobbyData },
		{ .NameUTF8 = UTF8TEXT("SetLobbyGameServer"), .Pointer = &UMatchmaking::execSetLobbyGameServer },
		{ .NameUTF8 = UTF8TEXT("SetLobbyJoinable"), .Pointer = &UMatchmaking::execSetLobbyJoinable },
		{ .NameUTF8 = UTF8TEXT("SetLobbyMemberData"), .Pointer = &UMatchmaking::execSetLobbyMemberData },
		{ .NameUTF8 = UTF8TEXT("SetLobbyMemberLimit"), .Pointer = &UMatchmaking::execSetLobbyMemberLimit },
		{ .NameUTF8 = UTF8TEXT("SetLobbyOwner"), .Pointer = &UMatchmaking::execSetLobbyOwner },
		{ .NameUTF8 = UTF8TEXT("SetLobbyType"), .Pointer = &UMatchmaking::execSetLobbyType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 258195089
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 3390632224
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 558710827
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 1375238418
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 3206503870
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 19848211
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 806810004
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 256781461
		{ &Z_Construct_UFunction_UMatchmaking_CreateLobby, "CreateLobby" }, // 3321641102
		{ &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 3974928575
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 2012416804
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 848677284
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 1835412174
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 1052084128
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyData, "GetLobbyData" }, // 581853408
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 1803126437
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 153612097
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 979584217
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 3286584098
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 4086732042
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 472743849
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 1140638622
		{ &Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 551508574
		{ &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 4047275215
		{ &Z_Construct_UFunction_UMatchmaking_JoinLobby, "JoinLobby" }, // 2664716525
		{ &Z_Construct_UFunction_UMatchmaking_LeaveLobby, "LeaveLobby" }, // 3578129437
		{ &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 1962140307
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 77180741
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 1093696171
		{ &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 2565485374
		{ &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 874637255
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyData, "SetLobbyData" }, // 2685058632
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 206746474
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 139675779
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 2129220607
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 539890100
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 1497271273
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyType, "SetLobbyType" }, // 159019750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmaking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMatchmaking_Statics

// ********** Begin Class UMatchmaking Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListAccountsUpdated_MetaData), NewProp_FavoritesListAccountsUpdated_MetaData) }; // 3734009197
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FavoritesListChanged_MetaData), NewProp_FavoritesListChanged_MetaData) }; // 3195085298
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatMsg_MetaData), NewProp_LobbyChatMsg_MetaData) }; // 670371135
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyChatUpdate_MetaData), NewProp_LobbyChatUpdate_MetaData) }; // 292749614
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyDataUpdate_MetaData), NewProp_LobbyDataUpdate_MetaData) }; // 241265380
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyEnter_MetaData), NewProp_LobbyEnter_MetaData) }; // 718094864
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyGameCreated_MetaData), NewProp_LobbyGameCreated_MetaData) }; // 1573572455
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyInvite_MetaData), NewProp_LobbyInvite_MetaData) }; // 2009329549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyKicked_MetaData), NewProp_LobbyKicked_MetaData) }; // 211471813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::PropPointers) < 2048);
// ********** End Class UMatchmaking Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UMatchmaking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmaking_Statics::ClassParams = {
	&UMatchmaking::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMatchmaking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams), Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams)
};
void UMatchmaking::StaticRegisterNativesUMatchmaking()
{
	UClass* Class = UMatchmaking::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMatchmaking_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMatchmaking()
{
	if (!Z_Registration_Info_UClass_UMatchmaking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmaking.OuterSingleton, Z_Construct_UClass_UMatchmaking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMatchmaking.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMatchmaking);
UMatchmaking::~UMatchmaking() {}
// ********** End Class UMatchmaking ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h__Script_SteamCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmaking, UMatchmaking::StaticClass, TEXT("UMatchmaking"), &Z_Registration_Info_UClass_UMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmaking), 848152001U) },
	};
}; // Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h__Script_SteamCore_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h__Script_SteamCore_4233317827{
	TEXT("/Script/SteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h__Script_SteamCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h__Script_SteamCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
