/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Allows partners to access the voting information of the content in their Steam Workshop.
* https://partner.steamgames.com/doc/webapi/IPublishedItemVoting
*/

#include "PublishedItemVoting/WebPublishedItemVotingAsyncActions.h"
#include "PublishedItemVoting/WebPublishedItemVotingAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"
#include "SteamCoreWeb/SteamCoreWeb.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionItemVoteSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionItemVoteSummary* USteamCoreWebAsyncActionItemVoteSummary::ItemVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, TArray<FString> PublishedFileIds)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionItemVoteSummary>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebItemVoteSummary(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, AppId, PublishedFileIds);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionUserVoteSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreWebAsyncActionUserVoteSummary* USteamCoreWebAsyncActionUserVoteSummary::UserVoteSummaryAsync(UObject* WorldContextObject, FString Key, FString SteamId, TArray<FString> PublishedFileIds)
{
	auto* GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* Subsystem = GameInstance->GetSubsystem<USteamCoreWebSubsystem>();

	auto* AsyncObject = NewObject<USteamCoreWebAsyncActionUserVoteSummary>();
	auto* Task = new FOnlineAsyncTaskSteamCoreWebUserVoteSummary(Subsystem, AsyncObject->OnCallbackInternal, Key, SteamId, PublishedFileIds);
	AsyncObject->RegisterWithGameInstance(GameInstance);
	AsyncObject->m_WorldContextObject = WorldContextObject;
	Subsystem->QueueAsyncTask(Task);
	AsyncObject->Activate();

	return AsyncObject;
}
