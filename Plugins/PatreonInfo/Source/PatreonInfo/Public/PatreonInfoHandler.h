// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "PatreonInfoData.h"
#include "Interfaces/IHttpRequest.h"
#include "UObject/Object.h"
#include "PatreonInfoHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPatreonUserInfoFailedSignature, bool, Connection, int32, ResponseCode, bool, TokenExpired, const TArray<FString>&, Errors);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPatreonInfoDataSignature, const FPatreonInfoData&, UserInfo);

/**
 * 
 */
UCLASS(ClassGroup = (PatreonInfo), meta = (BlueprintSpawnableComponent))
class PATREONINFO_API UPatreonInfoHandler : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Send a HTTP request to obtain Patreon information for the user.
	 * This is an asynchronous call, use GetPatreonInfoFailedDelegate and GetPatreonInfoSucceededDelegate for getting a response.
	 */
	UFUNCTION(BlueprintCallable, Category = "Patreon Info")
	void GetPatreonInfo(const FString& Token);

	/**
	 *
	 */
	UPROPERTY(BlueprintAssignable, Category = "Patreon Info")
	FPatreonUserInfoFailedSignature GetPatreonInfoFailedDelegate;

	/*
	 *
	 */
	UPROPERTY(BlueprintAssignable, Category = "Patreon Info")
	FPatreonInfoDataSignature GetPatreonInfoSucceededDelegate;

private:
	void Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully) const;
};
