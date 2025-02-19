/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore::Web Documentation: https://eeldev.com/index.php/steamcoreweb-plugin/
*
* Used to access information about users.
* https://partner.steamgames.com/doc/webapi/IUserAuth
*/

#pragma once

#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "WebUserAuthAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAuthenticateUser
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Authenticate User
	*
	* @param	SteamId					Should be the users steamid, unencrypted.
	* @param	SessionKey				Should be a 32 byte random blob of data, which is then encrypted with RSA using the Steam system's public key. Randomness is important here for security.
	* @param	EncryptedLoginKey		Should be the users hashed loginkey, AES encrypted with the sessionkey.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Authenticate User", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(UObject* WorldContextObject, FString SteamId, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreWebAsyncActionAuthenticateUserTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREWEB_API USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{
	GENERATED_BODY()
public:
	/**
	* Authenticate User Ticket
	*
	* @param	Key			Steamworks Web API publisher authentication key.
	* @param	AppId		The App ID to get the betas of.
	* @param	Ticket		Convert the ticket from GetAuthSessionTicket from binary to hex into an appropriately sized byte character array and pass the result in as this ticket parameter.
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DisplayName = "Authenticate User Ticket", BlueprintInternalUseOnly="true"), Category = "SteamCoreWeb|PlayerService|Async")
	static USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Ticket);
};
