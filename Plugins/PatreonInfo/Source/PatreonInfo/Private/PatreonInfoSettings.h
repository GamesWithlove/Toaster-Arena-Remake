// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PatreonInfoSettings.generated.h"

UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Patreon Info"))
class UPatreonInfoSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, config, Category = "Server Settings")
	FString GetTokenURL = TEXT("https://example.com/");
	UPROPERTY(EditAnywhere, config, Category = "Server Settings")
	FString PatreonInfoGetURL = TEXT("https://example.com/");

	UPROPERTY(EditAnywhere, config, Category = "Patreon Settings")
	int32 PatreonCampaignID = 0;

	UPROPERTY(EditAnywhere, config, Category = "Security Settings")
	FString UserAgentName = TEXT("Application/YourGameName");

	// Replace '<ul>' and '<li>' tags with a bullet or dash character. This allows Rich Text to properly format text as it does not support nesting.
	UPROPERTY(EditAnywhere, config, Category = "Text Formatting")
	bool bFormatLists = true;
	// Some fonts do not have a glyph implementation for the bullet character, so use the more commonly supported dash character instead.
	/*UPROPERTY(EditAnywhere, config, Category = "Text Formatting", meta = (EditCondition = "bFormatLists"))
	bool bReplaceBulletCharacterWithDash = true;*/
	// Strip the content out of end HTML tags to make it syntax compatible with Rich Text (e.g. '</strong>' becomes '</>').
	UPROPERTY(EditAnywhere, config, Category = "Text Formatting")
	bool bStripEndTags = true;
};
