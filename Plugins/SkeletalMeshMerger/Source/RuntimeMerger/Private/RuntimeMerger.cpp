// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved. 

#include "RuntimeMerger.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FRuntimeMerger"

void FRuntimeMerger::StartupModule()
{
}

void FRuntimeMerger::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRuntimeMerger, RuntimeMerger);