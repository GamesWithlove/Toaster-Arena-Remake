/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamVideo
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamVideoTypes.h"
#include "SteamVideo.generated.h"

UCLASS()
class STEAMCORE_API UVideo : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UVideo() { SubsystemType = ESteamSubsystem::Video; }
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Video|Delegates")
	FOnGetOPFSettingsResult GetOPFSettingsResult;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Video|Delegates")
	FOnGetVideoURLResult GetVideoURLResult;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Get the OPF details for 360 video playback
	* 
	* To retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.
	*
	* @param	VideoAppID		The video app ID to get the OPF details of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Video")
	static void GetOPFSettings(int32 VideoAppID);

	/**
	* Gets the OPF string for the specified video App ID.
	*
	* Once the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format. 
	* The size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.
	* NOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.
	*
	* param		VideoAppID		The video app ID to get the OPF string for.
	* param		OutBuffer			Returns the OPF string by writing it to this buffer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Video")
	static bool GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer);

	/**
	* Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.
	*
	* param		videoAppID	The video app ID to receive the video stream for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Video")
	static void GetVideoURL(int32 VideoAppID);

	/**
	* Checks if the user is currently live broadcasting and gets the number of users. 
	*
	* param		numViewers		Returns the number of viewers currently watching the live broadcast.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Video")
	static bool IsBroadcasting(int32& NumViewers);


private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
#if ENABLE_STEAMCORE
	STEAM_CALLBACK_MANUAL(UVideo, OnGetOPFSettingsResult, GetOPFSettingsResult_t, OnGetOPFSettingsResultCallback);
	STEAM_CALLBACK_MANUAL(UVideo, OnGetVideoURLResult, GetVideoURLResult_t, OnGetVideoURLResultCallback);
#endif
};
