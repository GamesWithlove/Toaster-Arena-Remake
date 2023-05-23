// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#include "PakLoaderModule.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogPakLoader);

class FPakLoaderModule : public IPakLoaderModule
{
private:
	// IModuleInterface Interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FPakLoaderModule, PakLoader );

void FPakLoaderModule::StartupModule()
{
	UE_LOG(LogPakLoader, Log, TEXT("FPakLoaderModule::StartupModule()"));
}

void FPakLoaderModule::ShutdownModule()
{
	UE_LOG(LogPakLoader, Log, TEXT("FPakLoaderModule::ShutdownModule()"));
}
