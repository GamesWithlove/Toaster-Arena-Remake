// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfoData.h"

#include "PatreonInfoLibrary.h"
#include "PatreonInfoRawData.h"
#include "PatreonTextFormatter.h"

FPatreonTierInfo::FPatreonTierInfo(const FTierRawData& ResponseData) :
	AmountCents(ResponseData.amount_cents),
	Title(ResponseData.title),
	Description(FPatreonTextFormatter::ParseTierDescription(ResponseData.description)),
	ImageURL(ResponseData.image_url)
{
}

FPatreonPledgeInfo::FPatreonPledgeInfo(const FPledgeRawData& ResponseData) :
	PaymentStatus(UPatreonInfoLibrary::ParsePaymentStatus(ResponseData.payment_status)),
	TierTitle(ResponseData.tier_title),
	Type(UPatreonInfoLibrary::ParsePledgeEventType(ResponseData.type))
{
	FDateTime::ParseIso8601(*ResponseData.date, Date);
}

FPatreonInfoData::FPatreonInfoData(const FPatreonUserInfoResponse& ResponseData) :
	UserID(ResponseData.info.userid),
	bWhitelisted(ResponseData.info.whitelisted),
	bBlacklisted(ResponseData.info.blacklisted),
	FirstName(ResponseData.info.first_name),
	LastName(ResponseData.info.last_name),
	AvatarURL(ResponseData.info.image_url),
	PatronStatus(UPatreonInfoLibrary::ParsePatronStatus(ResponseData.info.patron_status)),
	LastChargeStatus(UPatreonInfoLibrary::ParsePaymentStatus(ResponseData.info.last_charge_status)),
	CampaignLifetimeSupportCents(ResponseData.info.campaign_lifetime_support_cents)
{
	FDateTime::ParseIso8601(*ResponseData.info.last_charge_date, LastChargeDate);

	// All tiers the user is currently eligible for.
	for (const FTierRawData& RawTier : ResponseData.info.tiers)
	{
		Tiers.Emplace(FPatreonTierInfo(RawTier));
	}

	// The history of pledge events this user has made.
	for (const FPledgeRawData& RawPledge : ResponseData.info.pledge_history)
	{
		PledgeHistory.Emplace(FPatreonPledgeInfo(RawPledge));
	}
}
