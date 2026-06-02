// Copyright 2024 Ziya Bahceci. All Rights Reserved.

#pragma once

#include "Modules/ModuleInterface.h"

class FVaRestEditorModule : public IModuleInterface
{

public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
