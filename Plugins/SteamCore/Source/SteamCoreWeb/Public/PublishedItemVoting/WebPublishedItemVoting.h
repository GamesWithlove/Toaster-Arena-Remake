/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Allows partners to access the voting information of the content in their Steam Workshop.
* https://partner.steamgames.com/doc/webapi/IPublishedItemVoting
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebPublishedItemVoting.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebPublishedItemVoting : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebPublishedItemVoting() { SubsystemType = ESubsystemWeb::PublishedItemVoting; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Item Vote Summary
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					Steam ID of user
	* @param	AppId					AppId of product
	* @param	PublishedFileIds		The Published File ID who's vote details are requdred
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedItemVoting", meta = (AutoCreateRefTerm = "PublishedFileIDd"))
	void ItemVoteSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> PublishedFileIds);

	/**
	* Item Vote Summary
	*
	* @param	Key						Steamworks Web API publisher authentication Key.
	* @param	SteamId					Steam ID of user
	* @param	PublishedFileIds		The Published File ID who's vote details are requdred
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|PublishedItemVoting", meta = (AutoCreateRefTerm = "PublishedFileIDd"))
	void UserVoteSummary(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamId, TArray<FString> PublishedFileIds);
};
