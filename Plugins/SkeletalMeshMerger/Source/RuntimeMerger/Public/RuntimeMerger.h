// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FRuntimeMerger : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	void StartupModule() override;
	void ShutdownModule() override;
	
};
