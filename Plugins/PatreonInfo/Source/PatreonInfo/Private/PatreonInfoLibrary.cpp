// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfoLibrary.h"

#include "PatreonInfo.h"
#include "PatreonInfoHandler.h"
#include "PatreonInfoSaveGame.h"
#include "PatreonInfoSettings.h"
#include "PlatformHttp.h"
#include "HAL/PlatformApplicationMisc.h"

void UPatreonInfoLibrary::OpenBrowserForPatreonKey()
{
	// Needed for constructing the full URL.
	const UPatreonInfoSaveGame* const PatreonInfoSaveGame = FModuleManager::GetModuleChecked<FPatreonInfoModule>(TEXT("PatreonInfo")).GetPatreonInfoSaveGame();
	const UPatreonInfoSettings* const Settings = GetDefault<UPatreonInfoSettings>();
	if (!ensure(PatreonInfoSaveGame && Settings))
	{
		return;
	}

	const FString EncodedIdentifier = FPlatformHttp::UrlEncode(PatreonInfoSaveGame->Identifier.ToString());
	const FString FullURL = FString::Format(TEXT("{0}?user_id={1}"), {Settings->GetTokenURL, EncodedIdentifier});
	if (FPlatformProcess::CanLaunchURL(*FullURL))
	{
		FString Error;
		FPlatformProcess::LaunchURL(*FullURL, nullptr, &Error);
		ensureMsgf(Error.IsEmpty(), TEXT("Unable to launch URL: %s"), *Error);
	}
}

FString UPatreonInfoLibrary::GetClipboardContents()
{
	FString ClipboardContents;
	FPlatformApplicationMisc::ClipboardPaste(ClipboardContents);
	return ClipboardContents;
}

UPatreonInfoHandler* UPatreonInfoLibrary::CreatePatreonInfoHandler()
{
	return NewObject<UPatreonInfoHandler>();
}

void UPatreonInfoLibrary::SavePatreonInfo()
{
	FModuleManager::GetModuleChecked<FPatreonInfoModule>(TEXT("PatreonInfo")).SavePatreonInfoSaveGame();
}

EPatronStatus UPatreonInfoLibrary::ParsePatronStatus(const FString& InputString)
{
	if (InputString.IsEmpty()) return EPatronStatus::NoPatron;
	if (InputString == TEXT("active_patron")) return EPatronStatus::ActivePatron;
	if (InputString == TEXT("declined_patron")) return EPatronStatus::DeclinedPatron;
	if (InputString == TEXT("former_patron")) return EPatronStatus::FormerPatron;

	ensureMsgf(false, TEXT("Unknown patron status ('%s')"), *InputString);
	return EPatronStatus::NoPatron;
}

EPaymentStatus UPatreonInfoLibrary::ParsePaymentStatus(const FString& InputString)
{
	if (InputString.IsEmpty()) return EPaymentStatus::Unknown;
	if (InputString == TEXT("Paid")) return EPaymentStatus::Paid;
	if (InputString == TEXT("Declined")) return EPaymentStatus::Declined;
	if (InputString == TEXT("Deleted")) return EPaymentStatus::Deleted;
	if (InputString == TEXT("Pending")) return EPaymentStatus::Pending;
	if (InputString == TEXT("Refunded")) return EPaymentStatus::Refunded;
	if (InputString == TEXT("Fraud")) return EPaymentStatus::Fraud;
	if (InputString == TEXT("Other")) return EPaymentStatus::Other;

	ensureMsgf(false, TEXT("Unknown payment status ('%s')"), *InputString);
	return EPaymentStatus::Unknown;
}

EPledgeEventType UPatreonInfoLibrary::ParsePledgeEventType(const FString& InputString)
{
	if (InputString.IsEmpty()) return EPledgeEventType::Unknown;
	if (InputString == TEXT("pledge_start")) return EPledgeEventType::PledgeStart;
	if (InputString == TEXT("pledge_upgrade")) return EPledgeEventType::PledgeUpgrade;
	if (InputString == TEXT("pledge_downgrade")) return EPledgeEventType::PledgeDowngrade;
	if (InputString == TEXT("pledge_delete")) return EPledgeEventType::PledgeDelete;
	if (InputString == TEXT("subscription")) return EPledgeEventType::Subscription;

	ensureMsgf(false, TEXT("Unknown pledge event type ('%s')"), *InputString);
	return EPledgeEventType::Unknown;
}
