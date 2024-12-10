/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "SteamAppsTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamAppsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFileDetailsResultAsyncDelegate, const FFileDetailsResult&, Data, bool, bWasSuccessful);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnFileDetailsResultAsyncDelegate OnCallback;
public:
	/**
	* Asynchronously retrieves metadata details about a specific file in the depot manifest.
	* Currently provides:
	* The file size in bytes.
	* The file's SHA1 hash.
	* The file's flags.
	*
	* @param	FileName	The absolute path and name to the file.
	* @param	Timeout		How long we wait for this function to finish before aborting
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Get File Details", BlueprintInternalUseOnly="true"), Category = "SteamCore|Apps|Async")
	static USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, FString FileName, float Timeout = 10.f);
public:
	UFUNCTION()
	void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
};
