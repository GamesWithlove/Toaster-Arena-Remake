// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

PAKLOADER_API DECLARE_LOG_CATEGORY_EXTERN(LogPakLoader, Log, All);

/**
 * PakLoaderModule interface
 */
class IPakLoaderModule : public IModuleInterface
{
public:
	/**
	 * Get or load the PakLoader Module
	 * 
	 * @return The loaded module
	 */
	static inline IPakLoaderModule& Get()
	{
		return FModuleManager::LoadModuleChecked< IPakLoaderModule >("PakLoader");
	}
	
	/**
	 * Check whether the module has already been loaded
	 * 
	 * @return True if the module is loaded
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("PakLoader");
	}
};
