// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PatreonInfoRawData.generated.h"

USTRUCT()
struct FTierRawData
{
	GENERATED_BODY()

	UPROPERTY()
	int amount_cents = 0;
	UPROPERTY()
	FString description = TEXT("");
	UPROPERTY()
	FString image_url = TEXT("");
	UPROPERTY()
	FString title = TEXT("");
};

USTRUCT()
struct FPledgeRawData
{
	GENERATED_BODY()

	UPROPERTY()
	FString date;
	UPROPERTY()
	FString payment_status;
	UPROPERTY()
	FString tier_title;
	UPROPERTY()
	FString type;
};

USTRUCT()
struct FUserRawData
{
	GENERATED_BODY()

	UPROPERTY()
	FString first_name = TEXT("");
	UPROPERTY()
	FString last_name = TEXT("");
	UPROPERTY()
	FString full_name = TEXT("");
	UPROPERTY()
	FString image_url = TEXT("");
	UPROPERTY()
	FString patron_status = TEXT("");
	UPROPERTY()
	TArray<FTierRawData> tiers = TArray<FTierRawData>();
	UPROPERTY()
	int32 userid = 0;
	UPROPERTY()
	bool whitelisted = false;
	UPROPERTY()
	bool blacklisted = false;
	UPROPERTY()
	FString last_charge_date = TEXT("");
	UPROPERTY()
	FString last_charge_status = TEXT("");
	UPROPERTY()
	TArray<FPledgeRawData> pledge_history = TArray<FPledgeRawData>();
	UPROPERTY()
	int32 campaign_lifetime_support_cents = 0;
};

USTRUCT()
struct FPatreonUserInfoRequest
{
	GENERATED_BODY()

	FPatreonUserInfoRequest() = default;
	FPatreonUserInfoRequest(const FString& Token, int32 CampaignID, const FString& SystemID);
	
	UPROPERTY()
	FString userjwt = TEXT("");
	UPROPERTY()
	int32 campaign_id = 0;
	UPROPERTY()
	FString user_id = TEXT("");
};

USTRUCT()
struct FPatreonUserInfoResponse
{
	GENERATED_BODY()

	bool IsValid() const;

	UPROPERTY()
	TArray<FString> errors = TArray<FString>();
	UPROPERTY()
	bool expired = true;
	UPROPERTY()
	FUserRawData info;
};