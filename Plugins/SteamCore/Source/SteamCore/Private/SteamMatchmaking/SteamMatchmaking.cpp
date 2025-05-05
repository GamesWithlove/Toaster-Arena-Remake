/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#include "SteamMatchmaking/SteamMatchmaking.h"
#include "SteamMatchmaking/SteamMatchmakingAsyncTasks.h"
#include "SteamCorePluginPrivatePCH.h"

void UMatchmaking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if ENABLE_STEAMCORE
	OnFavoritesListAccountsUpdatedCallback.Register(this, &UMatchmaking::OnFavoritesListAccountsUpdated);
	OnFavoritesListChangedCallback.Register(this, &UMatchmaking::OnFavoritesListChanged);
	OnLobbyChatMsgCallback.Register(this, &UMatchmaking::OnLobbyChatMsg);
	OnLobbyChatUpdateCallback.Register(this, &UMatchmaking::OnLobbyChatUpdate);
	OnLobbyDataUpdateCallback.Register(this, &UMatchmaking::OnLobbyDataUpdate);
	OnLobbyEnterCallback.Register(this, &UMatchmaking::OnLobbyEnter);
	OnLobbyGameCreatedCallback.Register(this, &UMatchmaking::OnLobbyGameCreated);
	OnLobbyInviteCallback.Register(this, &UMatchmaking::OnLobbyInvite);
	OnLobbyKickedCallback.Register(this, &UMatchmaking::OnLobbyKicked);

	if (IsRunningDedicatedServer())
	{
		OnFavoritesListAccountsUpdatedCallback.SetGameserverFlag();
		OnFavoritesListChangedCallback.SetGameserverFlag();
		OnLobbyChatMsgCallback.SetGameserverFlag();
		OnLobbyChatUpdateCallback.SetGameserverFlag();
		OnLobbyDataUpdateCallback.SetGameserverFlag();
		OnLobbyEnterCallback.SetGameserverFlag();
		OnLobbyGameCreatedCallback.SetGameserverFlag();
		OnLobbyInviteCallback.SetGameserverFlag();
		OnLobbyKickedCallback.SetGameserverFlag();
	}
#endif
}

void UMatchmaking::Deinitialize()
{
#if ENABLE_STEAMCORE
	OnFavoritesListAccountsUpdatedCallback.Unregister();
	OnFavoritesListChangedCallback.Unregister();
	OnLobbyChatMsgCallback.Unregister();
	OnLobbyChatUpdateCallback.Unregister();
	OnLobbyDataUpdateCallback.Unregister();
	OnLobbyEnterCallback.Unregister();
	OnLobbyGameCreatedCallback.Unregister();
	OnLobbyInviteCallback.Unregister();
	OnLobbyKickedCallback.Unregister();
#endif
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UMatchmaking::AddFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer)
{
	LogVerbose("");

	int32 Result = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		int Data = 0;

		for (int i = 0; i < Flags.Num(); i++)
		{
			Data |= static_cast<int>(Flags[i]);
		}

		FIPv4Address IpAddress;
		FIPv4Address::Parse(IP, IpAddress);

		Result = SteamMatchmaking()->AddFavoriteGame(AppID, IpAddress.Value, ConnectionPort, QueryPort, Data, TimeLastPlayedOnServer);
	}
#endif

	return Result;
}

void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListCompatibleMembersFilter(SteamIDLobby);
	}
#endif
}

void UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListDistanceFilter(static_cast<ELobbyDistanceFilter>(LobbyDistanceFilter));
	}
#endif
}

void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(SlotsAvailable);
	}
#endif
}

void UMatchmaking::AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32 ValueToBeCloseTo)
{
	LogVerbose("");
#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListNearValueFilter(TCHAR_TO_UTF8(*KeyToMatch), ValueToBeCloseTo);
	}
#endif
}

void UMatchmaking::AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListNumericalFilter(TCHAR_TO_UTF8(*KeyToMatch), ValueToMatch, static_cast<ELobbyComparison>((static_cast<uint8>(ComparisonType) - 2)));
	}
#endif
}

void UMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->AddRequestLobbyListResultCountFilter(MaxResults);
	}
#endif
}

void UMatchmaking::AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType)
{
	LogVerbose("");

	if (KeyToMatch.Len() == 0 || ValueToMatch.Len() == 0)
	{
		return;
	}

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		const FTCHARToUTF8 KeyAnsi(*KeyToMatch); 
		const FTCHARToUTF8 ValueAnsi(*ValueToMatch);

		SteamMatchmaking()->AddRequestLobbyListStringFilter(KeyAnsi.Get(), ValueAnsi.Get(), static_cast<ELobbyComparison>((static_cast<uint8>(ComparisonType) - 2)));
	}
#endif
}

void UMatchmaking::CreateLobby(const FOnCreateLobby& Callback, ESteamLobbyType LobbyType, int32 MaxMembers)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby* Task = new FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(this, Callback, static_cast<ELobbyType>(LobbyType), MaxMembers);
		QueueAsyncTask(Task);
	}
#endif
}

bool UMatchmaking::DeleteLobbyData(FSteamID SteamIDLobby, FString Key)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->DeleteLobbyData(SteamIDLobby, TCHAR_TO_UTF8(*Key));
	}
#endif
	
	return bResult;
}

bool UMatchmaking::GetFavoriteGame(int32 Game, int32& OutAppID, FString& OutIp, int32& OutConnectionPort, int32& OutQueryPort, TArray<ESteamFavoriteFlags>& OutFlags, int32& OutTimeLastPlayedOnServer)
{
	LogVeryVerbose("");

	bool bResult = false;

	OutFlags.Empty();
	OutIp.Empty();

	uint32 IpAddress = 0;
	uint32 Flags = 0;

	uint16 ConnectionPort = 0;
	uint16 QueryPort = 0;
	uint32 TimeLastPlayedOnServer = 0;
	uint32 AppId = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->GetFavoriteGame(Game, &AppId, &IpAddress, &ConnectionPort, &QueryPort, &Flags, &TimeLastPlayedOnServer);

		if (bResult)
		{
			FIPv4Address InternalIP(IpAddress);
			OutIp = InternalIP.ToString();

			for (uint8 i = 0; i < 31; i++)
			{
				if (Flags & 1 << i)
				{
					OutFlags.Add(static_cast<ESteamFavoriteFlags>(1 << i));
				}
			}
		}
	}

	OutConnectionPort = ConnectionPort;
	OutQueryPort = QueryPort;
	OutTimeLastPlayedOnServer = TimeLastPlayedOnServer;
	OutAppID = AppId;
#endif

	return bResult;
}

int32 UMatchmaking::GetFavoriteGameCount()
{
	LogVeryVerbose("");

	int32 Result = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetFavoriteGameCount();
	}
#endif

	return Result;
}

FSteamID UMatchmaking::GetLobbyByIndex(int32 Lobby)
{
	LogVeryVerbose("");

	FSteamID Result;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyByIndex(Lobby);
	}
#endif

	return Result;
}

int32 UMatchmaking::GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& OutSteamIDUser, FString& OutMessage, ESteamChatEntryType& OutChatEntryType)
{
	LogVeryVerbose("");
	
	int32 Result = 0;

#if ENABLE_STEAMCORE
	CSteamID SteamIdUser;
	EChatEntryType ChatEntryType = k_EChatEntryTypeInvalid;
	OutMessage.Empty();

	if (SteamMatchmaking())
	{
		TArray<uint8> DataArray;
		DataArray.SetNum(1024);

		Result = SteamMatchmaking()->GetLobbyChatEntry(SteamIDLobby, MessageID, &SteamIdUser, DataArray.GetData(), DataArray.Num(), &ChatEntryType);
		DataArray.SetNum(Result);

		if (Result > 0)
		{
			FMemoryReader Reader(DataArray);
			Reader << OutMessage;
			Reader.Close();
		}
	}

	OutChatEntryType = static_cast<ESteamChatEntryType>(ChatEntryType);
	OutSteamIDUser = SteamIdUser;
#endif

	return Result;
}

FString UMatchmaking::GetLobbyData(FSteamID SteamIDLobby, FString Key)
{
	LogVeryVerbose("");

	FString Result;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyData(SteamIDLobby, TCHAR_TO_UTF8(*Key)));
	}
#endif

	return Result;
}

bool UMatchmaking::GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& OutKey, FString& OutValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutKey.Empty();
	OutValue.Empty();
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		TArray<char> Keys;
		TArray<char> Value;
		Keys.SetNum(k_nMaxLobbyKeyLength);
		Value.SetNum(k_cubChatMetadataMax);

		bResult = SteamMatchmaking()->GetLobbyDataByIndex(SteamIDLobby, LobbyData, Keys.GetData(), k_nMaxLobbyKeyLength, Value.GetData(), k_cubChatMetadataMax);

		if (bResult)
		{
			TCHAR KeyChar[k_nMaxLobbyKeyLength];
			FCString::Strncpy(KeyChar, UTF8_TO_TCHAR(Keys.GetData()), k_nMaxLobbyKeyLength);
			TCHAR ValueChar[k_cubChatMetadataMax];
			FCString::Strncpy(ValueChar, UTF8_TO_TCHAR(Value.GetData()), k_cubChatMetadataMax);

			OutKey = KeyChar;
			OutValue = ValueChar;
		}
	}
#endif

	return bResult;
}

int32 UMatchmaking::GetLobbyDataCount(FSteamID SteamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyDataCount(SteamIDLobby);
	}
#endif

	return Result;
}

bool UMatchmaking::GetLobbyGameServer(FSteamID SteamIDLobby, FString& OutGameServerIP, int32& OutGameServerPort, FSteamID& OutSteamIDGameServer)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutGameServerIP.Empty();

	uint32 GameServerIP = 0;
	uint16 GameServerPort = 0;
#if ENABLE_STEAMCORE
	CSteamID SteamIDGameServer;

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->GetLobbyGameServer(SteamIDLobby, &GameServerIP, &GameServerPort, &SteamIDGameServer);

		if (bResult)
		{
			OutGameServerIP = FIPv4Address(GameServerIP).ToString();
		}
	}

	OutGameServerPort = GameServerPort;
	OutSteamIDGameServer = SteamIDGameServer;
#endif

	return bResult;
}

FSteamID UMatchmaking::GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member)
{
	LogVeryVerbose("");

	FSteamID Result;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyMemberByIndex(SteamIDLobby, Member);
	}
#endif

	return Result;
}

FString UMatchmaking::GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key)
{
	LogVeryVerbose("");

	FString Result;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyMemberData(SteamIDLobby, SteamIDUser, TCHAR_TO_UTF8(*Key)));
	}
#endif

	return Result;
}

int32 UMatchmaking::GetLobbyMemberLimit(FSteamID SteamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyMemberLimit(SteamIDLobby);
	}
#endif

	return Result;
}

FSteamID UMatchmaking::GetLobbyOwner(FSteamID SteamIDLobby)
{
	LogVeryVerbose("");

	FSteamID Result;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetLobbyOwner(SteamIDLobby);
	}
#endif

	return Result;
}

int32 UMatchmaking::GetNumLobbyMembers(FSteamID SteamIDLobby)
{
	LogVeryVerbose("");

	int32 Result = 0;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		Result = SteamMatchmaking()->GetNumLobbyMembers(SteamIDLobby);
	}
#endif

	return Result;
}

bool UMatchmaking::InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee)
{
	LogVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->InviteUserToLobby(SteamIDLobby, SteamIDInvitee);
	}
#endif

	return bResult;
}

void UMatchmaking::JoinLobby(const FOnJoinLobby& Callback, FSteamID SteamIDLobby)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreJoinLobby* Task = new FOnlineAsyncTaskSteamCoreJoinLobby(this, Callback, SteamIDLobby);
		QueueAsyncTask(Task);
	}
#endif
}

void UMatchmaking::LeaveLobby(FSteamID SteamIDLobby)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		SteamMatchmaking()->LeaveLobby(SteamIDLobby);
	}
#endif
}

bool UMatchmaking::RemoveFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags)
{
	LogVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		int Data = 0;

		for (int i = 0; i < Flags.Num(); i++)
		{
			Data |= static_cast<int>(Flags[i]);
		}

		FIPv4Address IpAddress;
		FIPv4Address::Parse(IP, IpAddress);

		bResult = SteamMatchmaking()->RemoveFavoriteGame(AppID, IpAddress.Value, ConnectionPort, QueryPort, Data);
	}
#endif

	return bResult;
}

bool UMatchmaking::RequestLobbyData(FSteamID SteamIDLobby)
{
	LogVerbose("");

	bool bResult = false;
#if ENABLE_STEAMCORE

	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->RequestLobbyData(SteamIDLobby);
	}
#endif

	return bResult;
}

void UMatchmaking::RequestLobbyList(const FOnRequestLobbyList& Callback)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreRequestLobbyList* Task = new FOnlineAsyncTaskSteamCoreRequestLobbyList(this, Callback);
		QueueAsyncTask(Task);
	}
#endif
}

bool UMatchmaking::SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		TArray<uint8> DataArray;
		DataArray.SetNum(Message.Len());
		FMemoryWriter Writer(DataArray);
		Writer << Message;
		Writer.Close();

		bResult = SteamMatchmaking()->SendLobbyChatMsg(SteamIDLobby, DataArray.GetData(), DataArray.Num());
	}
#endif

	return bResult;
}

bool UMatchmaking::SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLinkedLobby(SteamIDLobby, SteamIDLobbyDependent);
	}
#endif

	return bResult;
}

bool UMatchmaking::SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = SteamMatchmaking()->SetLobbyData(SteamIDLobby, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

void UMatchmaking::SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer)
{
	LogVerbose("");

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		FIPv4Address IP;
		FIPv4Address::Parse(GameServerIP, IP);

		SteamMatchmaking()->SetLobbyGameServer(SteamIDLobby, IP.Value, GameServerPort, SteamIDGameServer);
	}
#endif
}

bool UMatchmaking::SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyJoinable(SteamIDLobby, bLobbyJoinable);
	}
#endif

	return bResult;
}

void UMatchmaking::SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value)
{
	LogVerbose("");

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return;
	}

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		SteamMatchmaking()->SetLobbyMemberData(SteamIDLobby, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif
}

bool UMatchmaking::SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyMemberLimit(SteamIDLobby, MaxMembers);
	}
#endif

	return bResult;
}

bool UMatchmaking::SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyOwner(SteamIDLobby, SteamIDNewOwner);
	}
#endif

	return bResult;
}

bool UMatchmaking::SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType)
{
	LogVerbose("");

	bool bResult = false;

#if ENABLE_STEAMCORE
	if (SteamMatchmaking())
	{
		bResult = SteamMatchmaking()->SetLobbyType(SteamIDLobby, static_cast<ELobbyType>(LobbyType));
	}
#endif

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if ENABLE_STEAMCORE

void UMatchmaking::OnFavoritesListAccountsUpdated(FavoritesListAccountsUpdated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		FavoritesListAccountsUpdated.Broadcast(Data);
	});
}

void UMatchmaking::OnFavoritesListChanged(FavoritesListChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		FavoritesListChanged.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyChatMsg(LobbyChatMsg_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyChatMsg.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyChatUpdate(LobbyChatUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyChatUpdate.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyDataUpdate(LobbyDataUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyDataUpdate.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyEnter(LobbyEnter_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyEnter.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyGameCreated(LobbyGameCreated_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyGameCreated.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyInvite(LobbyInvite_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyInvite.Broadcast(Data);
	});
}

void UMatchmaking::OnLobbyKicked(LobbyKicked_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		LobbyKicked.Broadcast(Data);
	});
}

#endif