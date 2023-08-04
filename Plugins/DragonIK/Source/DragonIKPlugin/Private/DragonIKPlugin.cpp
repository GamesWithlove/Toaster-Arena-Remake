/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonIKPlugin.h"

#define LOCTEXT_NAMESPACE "FDragonIKPluginModule"

void FDragonIKPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	
#if    WITH_EDITOR
//		FModuleManager::Get().LoadModule(TEXT("BlueprintGraph"));
//		FModuleManager::Get().LoadModule(TEXT("AnimGraph"));
//		FModuleManager::Get().LoadModule(TEXT("DragonIKPluginEditor"));
#endif


}

void FDragonIKPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDragonIKPluginModule, DragonIKPlugin)