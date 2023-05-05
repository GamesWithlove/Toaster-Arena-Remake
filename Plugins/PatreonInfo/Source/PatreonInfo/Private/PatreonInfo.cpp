// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfo.h"

#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "FPatreonInfoModule"

void FPatreonInfoModule::StartupModule()
{
	// Attempt to load saved computer information.
	if (UGameplayStatics::DoesSaveGameExist(TEXT("PatreonInfo"), 0))
	{
		PatreonInfoSaveGame = Cast<UPatreonInfoSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("PatreonInfo"), 0));
	}

	// If no saved info found or deemed invalid, regenerate a unique identifier.
	// This will invalidate existing tokens as the identifier is embedded at time of creation.
	if (!PatreonInfoSaveGame.IsValid() || PatreonInfoSaveGame->ComputerName != FPlatformProcess::ComputerName())
	{
		PatreonInfoSaveGame = CastChecked<UPatreonInfoSaveGame>(UGameplayStatics::CreateSaveGameObject(UPatreonInfoSaveGame::StaticClass()));
		SavePatreonInfoSaveGame();
	}

	// Prevent garbage collection (we can't use UPROPERTY in this class).
	PatreonInfoSaveGame->AddToRoot();
}

void FPatreonInfoModule::ShutdownModule()
{
	// Allow GC again.
	if (PatreonInfoSaveGame.IsValid())
	{
		PatreonInfoSaveGame->RemoveFromRoot();
	}
}

void FPatreonInfoModule::SavePatreonInfoSaveGame() const
{
	if (PatreonInfoSaveGame.IsValid())
	{
		UGameplayStatics::SaveGameToSlot(PatreonInfoSaveGame.Get(), TEXT("PatreonInfo"), 0);
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FPatreonInfoModule, PatreonInfo)
