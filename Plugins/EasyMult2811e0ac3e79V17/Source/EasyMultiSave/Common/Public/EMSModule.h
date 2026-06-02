//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class EASYMULTISAVE_API FEasyMultiSaveModule : public IModuleInterface
{

public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void RegisterSettings();
	void UnregisterSettings();
};
