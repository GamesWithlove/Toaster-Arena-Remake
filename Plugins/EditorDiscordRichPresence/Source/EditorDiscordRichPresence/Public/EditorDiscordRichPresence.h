// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Containers/Ticker.h"
#include "discord-files/discord.h"
#if WITH_EDITORONLY_DATA
#include "Interfaces/IPluginManager.h"
#endif

class FEditorDiscordRichPresenceModule : public IModuleInterface
{
public:

	FTickerDelegate TickDelegate;
	//FDelegateHandle TickDelegateHandle;
	FTSTicker::FDelegateHandle TickDelegateHandle;

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool Tick(float DeltaTime);

private:
	/** Handle to the test dll we will load */
	void* DLLHandle;
	void UpdateFocusedWindowStatus();
	//FString GetFriendlyEditorName(FName name);

	discord::Activity activity{};
};
