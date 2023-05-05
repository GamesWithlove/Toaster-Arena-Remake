// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfoRawData.h"

FPatreonUserInfoRequest::FPatreonUserInfoRequest(const FString& Token, int32 CampaignID, const FString& SystemID) :
	userjwt(Token),
	campaign_id(CampaignID),
	user_id(SystemID)
{
}

bool FPatreonUserInfoResponse::IsValid() const
{
	return errors.Num() == 0 && !expired;
}
