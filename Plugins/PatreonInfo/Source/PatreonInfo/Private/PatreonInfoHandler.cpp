// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfoHandler.h"

#include "HttpModule.h"
#include "JsonObjectConverter.h"
#include "PatreonInfo.h"
#include "PatreonInfoData.h"
#include "PatreonInfoRawData.h"
#include "PatreonInfoSaveGame.h"
#include "PatreonInfoSettings.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

void UPatreonInfoHandler::GetPatreonInfo(const FString& Token)
{
	// User may simply not supply a token, obviously not valid.
	if (Token.IsEmpty())
	{
		GetPatreonInfoFailedDelegate.Broadcast(false, EHttpResponseCodes::Unknown, false, {TEXT("No Patreon Key provided")});
		return;
	}

	// Retrieve identifier and settings, check them just to be sure.
	const UPatreonInfoSaveGame* const PatreonInfoSaveGame = FModuleManager::GetModuleChecked<FPatreonInfoModule>(TEXT("PatreonInfo")).GetPatreonInfoSaveGame();
	const UPatreonInfoSettings* const Settings = GetDefault<UPatreonInfoSettings>();
	if (!ensure(PatreonInfoSaveGame && Settings))
	{
		GetPatreonInfoFailedDelegate.Broadcast(false, EHttpResponseCodes::Unknown, false, {TEXT("Unable to receive (default) save data or settings.")});
		return;
	}

	// Create request data structure and try to convert it to a JSON string.
	const FPatreonUserInfoRequest RequestData(Token, Settings->PatreonCampaignID, PatreonInfoSaveGame->Identifier.ToString());
	FString ContentString;
	if (!FJsonObjectConverter::UStructToJsonObjectString(FPatreonUserInfoRequest::StaticStruct(), &RequestData, ContentString, 0, 0))
	{
		GetPatreonInfoFailedDelegate.Broadcast(false, EHttpResponseCodes::Unknown, false, {TEXT("Failed to create JSON string from PatreonInfo request data.")});
		return;
	}

	// Set up and process the HTTP request, this will callback when completed/failed.
	const FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(Settings->PatreonInfoGetURL);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("User-Agent"), Settings->UserAgentName);
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Accepts"), TEXT("application/json"));
	Request->SetContentAsString(ContentString);
	Request->OnProcessRequestComplete().BindUObject(this, &UPatreonInfoHandler::Response);
	Request->ProcessRequest();
}

void UPatreonInfoHandler::Response(FHttpRequestPtr /*Request*/, const FHttpResponsePtr Response, const bool bConnectedSuccessfully) const
{
	check(Response); // Should be valid, even if unsuccessful.

	// Catch unsuccessful connection attempt (e.g. no internet, server down) and failed responses (e.g. internal server error).
	const int32 ResponseCode = Response->GetResponseCode();
	if (!bConnectedSuccessfully || !EHttpResponseCodes::IsOk(ResponseCode))
	{
		GetPatreonInfoFailedDelegate.Broadcast(bConnectedSuccessfully, ResponseCode, false, TArray<FString>());
		return;
	}

	// Try to convert the response JSON into a response FStruct.
	FPatreonUserInfoResponse RawData;
	if (!FJsonObjectConverter::JsonObjectStringToUStruct(Response->GetContentAsString(), &RawData, 0, 0) || !RawData.IsValid())
	{
		GetPatreonInfoFailedDelegate.Broadcast(true, ResponseCode, RawData.expired, RawData.errors);
		return;
	}

	GetPatreonInfoSucceededDelegate.Broadcast(FPatreonInfoData(RawData));
}
