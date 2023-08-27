/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Provides access to Steam broadcasts.
* https://partner.steamgames.com/doc/webapi/IBroadcastService
*
* For more info on how to use the Steamworks Web API please see the Web API Overview.
* https://partner.steamgames.com/doc/webapi_overview
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebBroadcastServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionPostGameDataFrame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Provides access to Steam broadcasts.
	*		
	* @param	Key				Steamworks Web API publisher authentication key.
	* @param	AppID			
	* @param	SteamID			
	* @param	BroadcastId		
	* @param	FrameData		
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Post Game Data Frame", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|Broadcast|Async")
	static USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData);
};
