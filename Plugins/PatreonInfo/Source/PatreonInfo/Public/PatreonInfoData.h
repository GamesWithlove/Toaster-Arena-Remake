// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PatreonInfoData.generated.h"

UENUM(BlueprintType)
enum class EPatronStatus : uint8
{
	NoPatron,
	ActivePatron,
	DeclinedPatron,
	FormerPatron
};

UENUM(BlueprintType)
enum class EPaymentStatus : uint8
{
	Paid,
	Declined,
	Deleted,
	Pending,
	Refunded,
	Fraud,
	Other,
	Unknown
};

UENUM(BlueprintType)
enum class EPledgeEventType : uint8
{
	PledgeStart,
	PledgeUpgrade,
	PledgeDowngrade,
	PledgeDelete,
	Subscription,
	Unknown
};

USTRUCT(BlueprintType)
struct PATREONINFO_API FPatreonTierInfo
{
	GENERATED_BODY()

	FPatreonTierInfo() = default;
	explicit FPatreonTierInfo(const struct FTierRawData& ResponseData);

	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	int AmountCents = 0;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString Title = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString Description = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString ImageURL = TEXT("");
};

USTRUCT(BlueprintType)
struct PATREONINFO_API FPatreonPledgeInfo
{
	GENERATED_BODY()

	FPatreonPledgeInfo() = default;
	explicit FPatreonPledgeInfo(const struct FPledgeRawData& ResponseData);
	
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FDateTime Date = FDateTime(0);
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	EPaymentStatus PaymentStatus = EPaymentStatus::Unknown;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString TierTitle = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	EPledgeEventType Type = EPledgeEventType::Unknown;
};

USTRUCT(BlueprintType)
struct PATREONINFO_API FPatreonInfoData
{
	GENERATED_BODY()

	FPatreonInfoData() = default;
	explicit FPatreonInfoData(const struct FPatreonUserInfoResponse& ResponseData);

	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	int UserID = 0;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	bool bWhitelisted = false;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	bool bBlacklisted = false;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString FirstName = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString LastName = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FString AvatarURL = TEXT("");
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	EPatronStatus PatronStatus = EPatronStatus::NoPatron;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	TArray<FPatreonTierInfo> Tiers;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	FDateTime LastChargeDate = FDateTime(0);
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	EPaymentStatus LastChargeStatus = EPaymentStatus::Unknown;
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	TArray<FPatreonPledgeInfo> PledgeHistory = TArray<FPatreonPledgeInfo>();
	UPROPERTY(BlueprintReadOnly, Category = "Patreon Info")
	int32 CampaignLifetimeSupportCents = 0;
};
