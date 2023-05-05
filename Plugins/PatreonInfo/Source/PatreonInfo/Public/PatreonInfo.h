// Copyright Green Forest Games. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PatreonInfoSaveGame.h"
#include "Modules/ModuleManager.h"

class FPatreonInfoModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void SavePatreonInfoSaveGame() const;
	
	UPatreonInfoSaveGame* GetPatreonInfoSaveGame() const { return PatreonInfoSaveGame.Get(); }

private:
	TWeakObjectPtr<UPatreonInfoSaveGame> PatreonInfoSaveGame;
};
