/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "SteamFriendsTypes.h"
#include "SteamCore/SteamCoreAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsSetPersonaName : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetPersonaName m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(USteamCoreSubsystem* Subsystem, const FOnSetPersonaName Callback, const FString Name, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_Name(Name)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FString Name, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_Name(Name)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName() = delete;
protected:
	SetPersonaNameResponse_t m_CallbackResults;
	FString m_Name;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsSetPersonaName")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadClanActivityCounts m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(USteamCoreSubsystem* Subsystem, const FOnDownloadClanActivityCounts Callback, const TArray<FSteamID> SteamIDClans, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDClans(SteamIDClans)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const TArray<FSteamID> SteamIDClans, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamIDClans(SteamIDClans)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts() = delete;
protected:
	DownloadClanActivityCountsResult_t m_CallbackResults;
	TArray<FSteamID> m_SteamIDClans;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreRequestClanOfficerList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestClanOfficerList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(USteamCoreSubsystem* Subsystem, const FOnRequestClanOfficerList Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList() = delete;
protected:
	ClanOfficerListResponse_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestClanOfficerList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinClanChatRoom m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(USteamCoreSubsystem* Subsystem, FOnJoinClanChatRoom Callback, const FSteamID SteamIdClan, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamIDClan(SteamIdClan)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamIdClan, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamIDClan(SteamIdClan)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom() = delete;
protected:
	JoinClanChatRoomCompletionResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnEnumerateFollowingList m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(USteamCoreSubsystem* Subsystem, const FOnEnumerateFollowingList Callback, const int32 StartIndex, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_StartIndex(StartIndex)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const int32 StartIndex, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_StartIndex(StartIndex)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList() = delete;
protected:
	FriendsEnumerateFollowingList_t m_CallbackResults;
	int32 m_StartIndex;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsIsFollowing : public FOnlineAsyncTaskSteamCore
{
public:
	FOnIsFollowing m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(USteamCoreSubsystem* Subsystem, FOnIsFollowing Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing() = delete;
protected:
	FriendsIsFollowing_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsIsFollowing")); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class STEAMCORE_API FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetFollowerCount m_OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(USteamCoreSubsystem* Subsystem, FOnGetFollowerCount Callback, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, Timeout)
		  , m_OnSteamCallback(Callback)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
	}

	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(USteamCoreSubsystem* Subsystem, USteamCoreAsyncAction* AsyncObject, const FSteamID SteamId, float Timeout = 10.f)
		: FOnlineAsyncTaskSteamCore(Subsystem, k_uAPICallInvalid, AsyncObject, Timeout)
		  , m_CallbackResults()
		  , m_SteamID(SteamId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount() = delete;
protected:
	FriendsGetFollowerCount_t m_CallbackResults;
	FSteamID m_SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount")); }
};
#endif