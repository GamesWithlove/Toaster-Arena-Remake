/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information and interact with users.
* https://partner.steamgames.com/doc/webapi/ISteamUser
*/

#include "SteamUser/WebSteamUser.h"
#include "SteamUser/WebSteamUserAsyncTasks.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

void UWebSteamUser::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UWebSteamUser::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UWebSteamUser::CheckAppOwnership(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId)
{
	FOnlineAsyncTaskSteamCoreWebCheckAppOwnership* Task = new FOnlineAsyncTaskSteamCoreWebCheckAppOwnership(this, Callback, Key, SteamId, AppId);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetAppPriceInfo(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, TArray<int32> AppIds)
{
	FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo* Task = new FOnlineAsyncTaskSteamCoreWebGetAppPriceInfo(this, Callback, Key, SteamId, AppIds);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetFriendList(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, FString Relationship)
{
	FOnlineAsyncTaskSteamCoreWebGetFriendList* Task = new FOnlineAsyncTaskSteamCoreWebGetFriendList(this, Callback, Key, SteamId, Relationship);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetPlayerBans(const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIDd)
{
	FOnlineAsyncTaskSteamCoreWebGetPlayerBans* Task = new FOnlineAsyncTaskSteamCoreWebGetPlayerBans(this, Callback, Key, SteamIDd);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetPlayerSummaries(const FOnSteamCoreWebCallback& Callback, FString Key, TArray<FString> SteamIDd)
{
	FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries* Task = new FOnlineAsyncTaskSteamCoreWebGetPlayerSummaries(this, Callback, Key, SteamIDd);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetPublisherAppOwnership(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership* Task = new FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnership(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetPublisherAppOwnershipChanges(const FOnSteamCoreWebCallback& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion)
{
	FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges* Task = new FOnlineAsyncTaskSteamCoreWebGetPublisherAppOwnershipChanges(this, Callback, Key, PackageRowVersion, CDKeyRowVersion);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GetUserGroupList(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId)
{
	FOnlineAsyncTaskSteamCoreWebGetUserGroupList* Task = new FOnlineAsyncTaskSteamCoreWebGetUserGroupList(this, Callback, Key, SteamId);
	QueueAsyncTask(Task);
}

void UWebSteamUser::GrantPackage(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId)
{
	FOnlineAsyncTaskSteamCoreWebGrantPackage* Task = new FOnlineAsyncTaskSteamCoreWebGrantPackage(this, Callback, Key, SteamId, PackageId, Ipaddress, ThirdPartyKey, ThirdPartyAppId);
	QueueAsyncTask(Task);
}

void UWebSteamUser::ResolveVanityURL(const FOnSteamCoreWebCallback& Callback, FString Key, FString VanityURL, EVanityUrlType URLType)
{
	FOnlineAsyncTaskSteamCoreWebResolveVanityURL* Task = new FOnlineAsyncTaskSteamCoreWebResolveVanityURL(this, Callback, Key, VanityURL, URLType);
	QueueAsyncTask(Task);
}
