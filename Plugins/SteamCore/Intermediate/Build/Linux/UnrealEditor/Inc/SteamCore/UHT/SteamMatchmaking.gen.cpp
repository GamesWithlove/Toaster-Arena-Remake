// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamMatchmaking/SteamMatchmaking.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmaking() {}
// Cross Module References
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
// End Cross Module References
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyJoinable)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_UBOOL(Z_Param_bLobbyJoinable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execSetLinkedLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobbyDependent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLinkedLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDLobbyDependent);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::RequestLobbyData(Z_Param_SteamIDLobby);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execLeaveLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::LeaveLobby(Z_Param_SteamIDLobby);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execInviteUserToLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetNumLobbyMembers)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetNumLobbyMembers(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyOwner(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyMemberLimit(Z_Param_SteamIDLobby);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_Member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_Member);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyDataCount(Z_Param_SteamIDLobby);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMatchmaking::GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyByIndex(Z_Param_Lobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetFavoriteGameCount();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execDeleteLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListResultCountFilter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNearValueFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListDistanceFilter)
	{
		P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamIDLobby);
		P_NATIVE_END;
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
	void UMatchmaking::StaticRegisterNativesUMatchmaking()
	{
		UClass* Class = UMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFavoriteGame", &UMatchmaking::execAddFavoriteGame },
			{ "AddRequestLobbyListCompatibleMembersFilter", &UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
			{ "AddRequestLobbyListDistanceFilter", &UMatchmaking::execAddRequestLobbyListDistanceFilter },
			{ "AddRequestLobbyListFilterSlotsAvailable", &UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
			{ "AddRequestLobbyListNearValueFilter", &UMatchmaking::execAddRequestLobbyListNearValueFilter },
			{ "AddRequestLobbyListNumericalFilter", &UMatchmaking::execAddRequestLobbyListNumericalFilter },
			{ "AddRequestLobbyListResultCountFilter", &UMatchmaking::execAddRequestLobbyListResultCountFilter },
			{ "AddRequestLobbyListStringFilter", &UMatchmaking::execAddRequestLobbyListStringFilter },
			{ "CreateLobby", &UMatchmaking::execCreateLobby },
			{ "DeleteLobbyData", &UMatchmaking::execDeleteLobbyData },
			{ "GetFavoriteGame", &UMatchmaking::execGetFavoriteGame },
			{ "GetFavoriteGameCount", &UMatchmaking::execGetFavoriteGameCount },
			{ "GetLobbyByIndex", &UMatchmaking::execGetLobbyByIndex },
			{ "GetLobbyChatEntry", &UMatchmaking::execGetLobbyChatEntry },
			{ "GetLobbyData", &UMatchmaking::execGetLobbyData },
			{ "GetLobbyDataByIndex", &UMatchmaking::execGetLobbyDataByIndex },
			{ "GetLobbyDataCount", &UMatchmaking::execGetLobbyDataCount },
			{ "GetLobbyGameServer", &UMatchmaking::execGetLobbyGameServer },
			{ "GetLobbyMemberByIndex", &UMatchmaking::execGetLobbyMemberByIndex },
			{ "GetLobbyMemberData", &UMatchmaking::execGetLobbyMemberData },
			{ "GetLobbyMemberLimit", &UMatchmaking::execGetLobbyMemberLimit },
			{ "GetLobbyOwner", &UMatchmaking::execGetLobbyOwner },
			{ "GetNumLobbyMembers", &UMatchmaking::execGetNumLobbyMembers },
			{ "InviteUserToLobby", &UMatchmaking::execInviteUserToLobby },
			{ "JoinLobby", &UMatchmaking::execJoinLobby },
			{ "LeaveLobby", &UMatchmaking::execLeaveLobby },
			{ "RemoveFavoriteGame", &UMatchmaking::execRemoveFavoriteGame },
			{ "RequestLobbyData", &UMatchmaking::execRequestLobbyData },
			{ "RequestLobbyList", &UMatchmaking::execRequestLobbyList },
			{ "SendLobbyChatMsg", &UMatchmaking::execSendLobbyChatMsg },
			{ "SetLinkedLobby", &UMatchmaking::execSetLinkedLobby },
			{ "SetLobbyData", &UMatchmaking::execSetLobbyData },
			{ "SetLobbyGameServer", &UMatchmaking::execSetLobbyGameServer },
			{ "SetLobbyJoinable", &UMatchmaking::execSetLobbyJoinable },
			{ "SetLobbyMemberData", &UMatchmaking::execSetLobbyMemberData },
			{ "SetLobbyMemberLimit", &UMatchmaking::execSetLobbyMemberLimit },
			{ "SetLobbyOwner", &UMatchmaking::execSetLobbyOwner },
			{ "SetLobbyType", &UMatchmaking::execSetLobbyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\n@param        AppID                                           The App ID of the game.\n@param        IP                                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          The port used to connect to the server, in host order.\n@param        QueryPort                                       The port used to query the server, in host order.\n@param        Flags                                           Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          This should be the current time in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Matchmaking_eventAddFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Checks the player compatibility based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDLobby\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Checks the player compatibility based on the frenemy system.\n\n@param        SteamIDLobby" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms
		{
			ESteamLobbyDistanceFilter LobbyDistanceFilter;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, METADATA_PARAMS(nullptr, 0) }; // 1309983039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\x09*\n\x09* @param\x09LobbyDistanceFilter\x09\x09Specifies the maximum distance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\n@param        LobbyDistanceFilter             Specifies the maximum distance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
		{
			int32 SlotsAvailable;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Filters to only return lobbies with the specified number of open slots available.\n\x09*\n\x09* @param\x09SlotsAvailable\x09The number of open slots that must be open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Filters to only return lobbies with the specified number of open slots available.\n\n@param        SlotsAvailable  The number of open slots that must be open." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToBeCloseTo;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sorts the results closest to the specified value.\n\x09*\n\x09* Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToBeCloseTo\x09The value that lobbies will be sorted on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sorts the results closest to the specified value.\n\nNear filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToBeCloseTo        The value that lobbies will be sorted on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) }; // 2369388323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a numerical comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The number to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a numerical comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The number to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms
		{
			int32 MaxResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\x09*\n\x09* @param\x09MaxResults\x09The maximum number of lobbies to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\n@param        MaxResults      The maximum number of lobbies to return." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListStringFilter_Parms
		{
			FString KeyToMatch;
			FString ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) }; // 2369388323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a string comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09KeyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09ValueToMatch\x09\x09The string to match.\n\x09* @param\x09""ComparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Adds a string comparison filter to the next RequestLobbyList call.\n\n@param        KeyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        ValueToMatch            The string to match.\n@param        ComparisonType          The type of comparison to make." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListStringFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Matchmaking_eventAddRequestLobbyListStringFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics
	{
		struct Matchmaking_eventCreateLobby_Parms
		{
			FScriptDelegate Callback;
			ESteamLobbyType LobbyType;
			int32 MaxMembers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData)) }; // 3762265135
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) }; // 4181664104
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "CreateLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Matchmaking_eventCreateLobby_Parms), Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics
	{
		struct Matchmaking_eventDeleteLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes a metadata key from the lobby.\n\x09*\n\x09* This can only be done by the owner of the lobby.\n\x09* This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to delete the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09The key to delete the data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes a metadata key from the lobby.\n\nThis can only be done by the owner of the lobby.\nThis will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby    The Steam ID of the lobby to delete the metadata for.\n@param        Key                             The key to delete the data for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "DeleteLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Matchmaking_eventDeleteLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_DeleteLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Game), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of the favorite game server by index.\n\x09*\n\x09* You must call GetFavoriteGameCount before calling this.\n\x09*\n\x09* @param\x09Game\x09\x09\x09\x09\x09\x09The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n\x09* @param\x09""AppID\x09\x09\x09\x09\x09\x09Returns the App ID this server is for.\n\x09* @param\x09IP\x09\x09\x09\x09\x09\x09\x09Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09\x09\x09Returns the port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09\x09\x09Returns the port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09\x09\x09Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09TimeLastPlayedOnServer\x09\x09Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of the favorite game server by index.\n\nYou must call GetFavoriteGameCount before calling this.\n\n@param        Game                                            The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n@param        AppID                                           Returns the App ID this server is for.\n@param        IP                                                      Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort                          Returns the port used to connect to the server, in host order.\n@param        QueryPort                                       Returns the port used to query the server, in host order.\n@param        Flags                                           Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n@param        TimeLastPlayedOnServer          Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Matchmaking_eventGetFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics
	{
		struct Matchmaking_eventGetFavoriteGameCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of favorite and recent game servers the user has stored locally.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of favorite and recent game servers the user has stored locally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGameCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Matchmaking_eventGetFavoriteGameCount_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyByIndex_Parms
		{
			int32 Lobby;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, Lobby), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\x09*\n\x09* This should only be called after a LobbyMatchList_t call result is received.\n\x09*\n\x09* @param\x09Lobby\x09The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\nThis should only be called after a LobbyMatchList_t call result is received.\n\n@param        Lobby   The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Matchmaking_eventGetLobbyByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) }; // 172190028
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09MessageID\x09\x09\x09\x09The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n\x09* @param\x09SteamIDUser\x09\x09\x09\x09If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09Message\x09\x09\x09\x09\x09Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n\x09* @param\x09""ChatEntryType\x09\x09\x09If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the data from a lobby chat message after receiving a LobbyChatMsg_t Callback.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n@param        MessageID                               The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n@param        SteamIDUser                             If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n@param        Message                                 Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n@param        ChatEntryType                   If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyChatEntry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Matchmaking_eventGetLobbyChatEntry_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics
	{
		struct Matchmaking_eventGetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the metadata associated with the specified key from the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the metadata associated with the specified key from the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Matchmaking_eventGetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyData;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets a lobby metadata key/value pair by index.\n\x09*\n\x09* You must call GetLobbyDataCount before calling this.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n\x09* @param\x09LobbyData\x09\x09\x09""An index between 0 and GetLobbyDataCount.\n\x09* @param\x09Key\x09\x09\x09\x09\x09Returns the name of the key at the specified index by copying it into this buffer.\n\x09* @param\x09Value\x09\x09\x09\x09Returns the value associated with the key at the specified index by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets a lobby metadata key/value pair by index.\n\nYou must call GetLobbyDataCount before calling this.\n\n@param        SteamIDLobby            This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n@param        LobbyData                       An index between 0 and GetLobbyDataCount.\n@param        Key                                     Returns the name of the key at the specified index by copying it into this buffer.\n@param        Value                           Returns the value associated with the key at the specified index by copying it into this buffer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Matchmaking_eventGetLobbyDataByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics
	{
		struct Matchmaking_eventGetLobbyDataCount_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of metadata keys set on the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09* This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\n\x09* This should typically only ever be used for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDLobby\x09 The Steam ID of the lobby to get the data count from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of metadata keys set on the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\nThis is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\nThis should typically only ever be used for debugging purposes.\n\n@param        SteamIDLobby     The Steam ID of the lobby to get the data count from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Matchmaking_eventGetLobbyDataCount_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of a game server set in a lobby.\n\x09*\n\x09* Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to get the game server information from.\n\x09* @param\x09GameServerIP\x09\x09\x09Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n\x09* @param\x09GameServerPort\x09\x09\x09Returns the connection port of the game server, in host order, if it's set.\n\x09* @param\x09SteamIDGameServer\x09\x09Returns the Steam ID of the game server, if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the details of a game server set in a lobby.\n\nEither the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to get the game server information from.\n@param        GameServerIP                    Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n@param        GameServerPort                  Returns the connection port of the game server, in host order, if it's set.\n@param        SteamIDGameServer               Returns the Steam ID of the game server, if it's set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Matchmaking_eventGetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyMemberByIndex_Parms
		{
			FSteamID SteamIDLobby;
			int32 Member;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Member;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, Member), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby member at the given index.\n\x09*\n\x09* You must call GetNumLobbyMembers before calling this.\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n\x09* @param\x09Member\x09\x09\x09""An index between 0 and GetNumLobbyMembers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby member at the given index.\n\nYou must call GetNumLobbyMembers before calling this.\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\n@param        SteamIDLobby    This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n@param        Member                  An index between 0 and GetNumLobbyMembers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Matchmaking_eventGetLobbyMemberByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics
	{
		struct Matchmaking_eventGetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDUser;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets per-user metadata from another player in the specified lobby.\n\x09*\n\x09* This can only be queried from members in lobbies that you are currently in.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby that the other player is in.\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the player to get the metadata from.\n\x09* @param\x09Key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets per-user metadata from another player in the specified lobby.\n\nThis can only be queried from members in lobbies that you are currently in.\n\n@param        SteamIDLobby    The Steam ID of the lobby that the other player is in.\n@param        SteamIDUser             The Steam ID of the player to get the metadata from.\n@param        Key                             The key to get the value of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Matchmaking_eventGetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventGetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* The current limit on the # of users who can join the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the member limit of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "The current limit on the # of users who can join the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the member limit of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Matchmaking_eventGetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics
	{
		struct Matchmaking_eventGetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Returns the current lobby owner.\n\x09*\n\x09* You must be a member of the lobby to access this.\n\x09* There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the owner of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Returns the current lobby owner.\n\nYou must be a member of the lobby to access this.\nThere always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the owner of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Matchmaking_eventGetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics
	{
		struct Matchmaking_eventGetNumLobbyMembers_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of users in a lobby.\n\x09*\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to get the number of members of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Gets the number of users in a lobby.\n\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\n@param        SteamIDLobby    The Steam ID of the lobby to get the number of members of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetNumLobbyMembers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Matchmaking_eventGetNumLobbyMembers_Parms), Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics
	{
		struct Matchmaking_eventInviteUserToLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDInvitee;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Invite another user to the lobby.\n\x09*\n\x09* If the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\n\x09* or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to invite the user to.\n\x09* @param\x09SteamIDInvitee\x09\x09The Steam ID of the person who will be invited.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Invite another user to the lobby.\n\nIf the specified user clicks the join link, a GameLobbyJoinRequested_t Callback will be posted if the user is in-game,\nor if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n@param        SteamIDLobby            The Steam ID of the lobby to invite the user to.\n@param        SteamIDInvitee          The Steam ID of the person who will be invited." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "InviteUserToLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Matchmaking_eventInviteUserToLobby_Parms), Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_InviteUserToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics
	{
		struct Matchmaking_eventJoinLobby_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDLobby;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData)) }; // 2753327557
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09*\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Joins an existing lobby.\n\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "JoinLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Matchmaking_eventJoinLobby_Parms), Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics
	{
		struct Matchmaking_eventLeaveLobby_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The lobby to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t Callback.\n\n@param        SteamIDLobby    The lobby to leave." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Matchmaking_eventLeaveLobby_Parms), Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3531789794
	void Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes the game server from the local favorites list.\n\x09*\n\x09* @param\x09""AppID\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09IP\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""ConnectionPort\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09QueryPort\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""Flags\x09\x09\x09\x09Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Removes the game server from the local favorites list.\n\n@param        AppID                           The App ID of the game.\n@param        IP                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ConnectionPort          The port used to connect to the server, in host order.\n@param        QueryPort                       The port used to query the server, in host order.\n@param        Flags                           Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RemoveFavoriteGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Matchmaking_eventRemoveFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics
	{
		struct Matchmaking_eventRequestLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Refreshes all of the metadata for a lobby that you're not in right now.\n\x09*\n\x09* You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to refresh the metadata of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Refreshes all of the metadata for a lobby that you're not in right now.\n\nYou will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\n@param        SteamIDLobby    The Steam ID of the lobby to refresh the metadata of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Matchmaking_eventRequestLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics
	{
		struct Matchmaking_eventRequestLobbyList_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventRequestLobbyList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData)) }; // 2723212868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09*\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\n\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Matchmaking_eventRequestLobbyList_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics
	{
		struct Matchmaking_eventSendLobbyChatMsg_Parms
		{
			FSteamID SteamIDLobby;
			FString Message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\x09*\n\x09* All users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\n\x09* If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\n\x09* For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\n\x09* These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to send the chat message to.\n\x09* @param\x09Message\x09\x09\x09This can be text or binary data, up to 4 Kilobytes in size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\nAll users in the lobby (including the local user) will receive a LobbyChatMsg_t Callback with the message.\nIf you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\nFor communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\nThese messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\n@param        SteamIDLobby    The Steam ID of the lobby to send the chat message to.\n@param        Message                 This can be text or binary data, up to 4 Kilobytes in size." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SendLobbyChatMsg", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Matchmaking_eventSendLobbyChatMsg_Parms), Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics
	{
		struct Matchmaking_eventSetLinkedLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDLobbyDependent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobbyDependent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent = { "SteamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\n\x09* You must be the lobby owner of both lobbies.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09\x09The Steam ID of the primary lobby.\n\x09* @param\x09SteamIDLobbyDependent\x09\x09The Steam ID that will be linked to the primary lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\nYou must be the lobby owner of both lobbies.\n\n@param        SteamIDLobby                            The Steam ID of the primary lobby.\n@param        SteamIDLobbyDependent           The Steam ID that will be linked to the primary lobby." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLinkedLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Matchmaking_eventSetLinkedLobby_Parms), Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLinkedLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics
	{
		struct Matchmaking_eventSetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\x09*\n\x09* This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set the metadata for.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\nThis can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThis will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set the metadata for.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Matchmaking_eventSetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics
	{
		struct Matchmaking_eventSetLobbyGameServer_Parms
		{
			FSteamID SteamIDLobby;
			FString GameServerIP;
			int32 GameServerPort;
			FSteamID SteamIDGameServer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the game server associated with the lobby.\n\x09*\n\x09* This can only be set by the owner of the lobby.\n\x09* Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\n\x09* A LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09\x09The Steam ID of the lobby to set the game server information for.\n\x09* @param\x09GameServerIP\x09\x09\x09Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09GameServerPort\x09\x09\x09Sets the connection port of the game server, in host order.\n\x09* @param\x09SteamIDGameServer\x09\x09Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets the game server associated with the lobby.\n\nThis can only be set by the owner of the lobby.\nEither the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\nA LobbyGameCreated_t Callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\n@param        SteamIDLobby                    The Steam ID of the lobby to set the game server information for.\n@param        GameServerIP                    Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        GameServerPort                  Sets the connection port of the game server, in host order.\n@param        SteamIDGameServer               Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyGameServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Matchmaking_eventSetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics
	{
		struct Matchmaking_eventSetLobbyJoinable_Parms
		{
			FSteamID SteamIDLobby;
			bool bLobbyJoinable;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_bLobbyJoinable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\x09*\n\x09* If joining is disabled, then no players can join, even if they are a friend or have been invited.\n\x09* Lobbies with joining disabled will not be returned from a lobby search.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby\n\x09* @param\x09""bLobbyJoinable\x09\x09""Enable (true) or disable (false) allowing users to join this lobby?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\nIf joining is disabled, then no players can join, even if they are a friend or have been invited.\nLobbies with joining disabled will not be returned from a lobby search.\n\n@param        SteamIDLobby            The Steam ID of the lobby\n@param        bLobbyJoinable          Enable (true) or disable (false) allowing users to join this lobby?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyJoinable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Matchmaking_eventSetLobbyJoinable_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics
	{
		struct Matchmaking_eventSetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets per-user metadata for the local user.\n\x09*\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\n\x09* There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby to set our metadata in.\n\x09* @param\x09Key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09Value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Sets per-user metadata for the local user.\n\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t Callback, and any new users joining will receive any existing data.\nThere is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        SteamIDLobby            The Steam ID of the lobby to set our metadata in.\n@param        Key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        Value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Matchmaking_eventSetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventSetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			int32 MaxMembers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Set the maximum number of players that can join the lobby.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the member limit for.\n\x09* @param\x09MaxMembers\x09\x09The maximum number of players allowed in this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Set the maximum number of players that can join the lobby.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the member limit for.\n@param        MaxMembers              The maximum number of players allowed in this lobby. This can not be above 250." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Matchmaking_eventSetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics
	{
		struct Matchmaking_eventSetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDNewOwner;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	void Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Changes who the lobby owner is.\n\x09*\n\x09* This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\x09*\n\x09* @param\x09SteamIDLobby\x09\x09The Steam ID of the lobby where the owner change will take place.\n\x09* @param\x09SteamIDNewOwner\x09\x09The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Changes who the lobby owner is.\n\nThis can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\n@param        SteamIDLobby            The Steam ID of the lobby where the owner change will take place.\n@param        SteamIDNewOwner         The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Matchmaking_eventSetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics
	{
		struct Matchmaking_eventSetLobbyType_Parms
		{
			FSteamID SteamIDLobby;
			ESteamLobbyType LobbyType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) }; // 1620016601
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) }; // 4181664104
	void Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Matchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Updates what type of lobby this is.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to set the type of.\n\x09* @param\x09LobbyType\x09\x09The new lobby type to that will be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
		{ "ToolTip", "Updates what type of lobby this is.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        SteamIDLobby    The Steam ID of the lobby to set the type of.\n@param        LobbyType               The new lobby type to that will be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Matchmaking_eventSetLobbyType_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmaking);
	UClass* Z_Construct_UClass_UMatchmaking_NoRegister()
	{
		return UMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 1235045197
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 1083964611
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 2314539907
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 2370909111
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 2423030615
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 2187143606
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 3046380128
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 3466843632
		{ &Z_Construct_UFunction_UMatchmaking_CreateLobby, "CreateLobby" }, // 1568454559
		{ &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 97922010
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 2752602611
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 14619260
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 750548177
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 2508861882
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyData, "GetLobbyData" }, // 447725721
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 3265889484
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 4016000661
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 3203969024
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 4152671356
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 3979241991
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 1808790313
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 2035814838
		{ &Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 1916766524
		{ &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 1373067431
		{ &Z_Construct_UFunction_UMatchmaking_JoinLobby, "JoinLobby" }, // 3783030054
		{ &Z_Construct_UFunction_UMatchmaking_LeaveLobby, "LeaveLobby" }, // 2427710375
		{ &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 1008920872
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 762876881
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 4194403012
		{ &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 1253843899
		{ &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 4099911361
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyData, "SetLobbyData" }, // 3700977331
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 228874621
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 2825603965
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 1246180534
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 1343181732
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 2274606350
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyType, "SetLobbyType" }, // 1766208308
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamMatchmaking/SteamMatchmaking.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData)) }; // 1212745199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData)) }; // 3918647642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData)) }; // 2371545796
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData)) }; // 1388441788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData)) }; // 603909016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData)) }; // 2282620869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData)) }; // 116464332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData)) }; // 241077458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmaking.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData)) }; // 2747235824
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmaking>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmaking()
	{
		if (!Z_Registration_Info_UClass_UMatchmaking.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmaking.OuterSingleton, Z_Construct_UClass_UMatchmaking_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmaking.OuterSingleton;
	}
	template<> STEAMCORE_API UClass* StaticClass<UMatchmaking>()
	{
		return UMatchmaking::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmaking);
	UMatchmaking::~UMatchmaking() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmaking, UMatchmaking::StaticClass, TEXT("UMatchmaking"), &Z_Registration_Info_UClass_UMatchmaking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmaking), 2670269774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h_2425854665(TEXT("/Script/SteamCore"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamMatchmaking_SteamMatchmaking_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
