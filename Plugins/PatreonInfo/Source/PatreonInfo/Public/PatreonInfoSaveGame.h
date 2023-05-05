// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PatreonInfoSaveGame.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (PatreonInfo))
class PATREONINFO_API UPatreonInfoSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPatreonInfoSaveGame();
	
	UPROPERTY(VisibleAnywhere, Category = "Patreon Info")
	FGuid Identifier;
	UPROPERTY(VisibleAnywhere, Category = "Patreon Info")
	FString ComputerName;
};
