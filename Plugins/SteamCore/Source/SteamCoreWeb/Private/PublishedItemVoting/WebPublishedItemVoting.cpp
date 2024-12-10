/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Allows partners to access the voting information of the content in their Steam Workshop.
* https://partner.steamgames.com/doc/webapi/IPublishedItemVoting
*/

#include "PublishedItemVoting/WebPublishedItemVoting.h"
#include "PublishedItemVoting/WebPublishedItemVotingAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebPublishedItemVoting::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebPublishedItemVoting::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebPublishedItemVoting::ItemVoteSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebItemVoteSummary* Task = new FOnlineAsyncTaskSteamCoreWebItemVoteSummary(this, Callback, Key, SteamId, AppId, PublishedFileIds);
	QueueAsyncTask(Task);
}

void UWebPublishedItemVoting::UserVoteSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, TArray<FString> PublishedFileIds)
{
	FOnlineAsyncTaskSteamCoreWebUserVoteSummary* Task = new FOnlineAsyncTaskSteamCoreWebUserVoteSummary(this, Callback, Key, SteamId, PublishedFileIds);
	QueueAsyncTask(Task);
}
