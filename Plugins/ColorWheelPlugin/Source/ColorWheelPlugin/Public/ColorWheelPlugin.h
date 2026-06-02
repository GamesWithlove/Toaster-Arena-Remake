// Copyright (c) W2.Wizard 2020-2021. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FColorWheelPluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
