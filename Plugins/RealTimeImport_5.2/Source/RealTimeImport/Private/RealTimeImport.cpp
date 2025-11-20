// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImport.h"

#define LOCTEXT_NAMESPACE "FRealTimeImportModule"

URealTimeImportAnimationsFrames::URealTimeImportAnimationsFrames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
}

void FRealTimeImportModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FRealTimeImportModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRealTimeImportModule, RealTimeImport)

