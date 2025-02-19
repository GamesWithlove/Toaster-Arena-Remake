/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides restricted access to Steam Community features.
* https://partner.steamgames.com/doc/webapi/ISteamCommunity
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCoreWeb/SteamCoreWeb.h"
#include "WebSteamCommunity.generated.h"

UCLASS()
class STEAMCOREWEB_API UWebSteamCommunity : public USteamCoreWebSubsystem
{
	GENERATED_BODY()
public:
	UWebSteamCommunity() { SubsystemType = ESubsystemWeb::Community; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Allows publishers to report users who are behaving badly on their community hub.
	*
	* @param	Key				Steamworks Web API publisher authentication Key.
	* @param	SteamIdActor	SteamID of user doing the reporting
	* @param	SteamIdTarget	SteamID of the entity being accused of abuse
	* @param	AppId			AppID to check for ownership
	* @param	AbuseType		Abuse type code (see EAbuseReportType enum)
	* @param	ContentType		Content type code (see ECommunityContentType enum)
	* @param	Description		Narrative from user
	* @param	Gid				GID of related record (depends on content type)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCoreWeb|SteamCommunity")
	void ReportAbuse(const FOnSteamCoreWebCallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid);
};
