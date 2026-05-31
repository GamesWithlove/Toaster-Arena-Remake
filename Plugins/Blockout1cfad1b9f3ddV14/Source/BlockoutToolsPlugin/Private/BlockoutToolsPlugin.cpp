// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#include "BlockoutToolsPlugin.h"
#include "ISettingsModule.h"
#include "BlockoutToolsSettings.h"

#define LOCTEXT_NAMESPACE "FBlockoutToolsPluginModule"

void FBlockoutToolsPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

#if WITH_EDITOR
// Register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "BlockoutToolsPlugin",
			LOCTEXT("RuntimeSettingsName", "Blockout Tools Plugin"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the Blockout Tools Plugin"),
			GetMutableDefault<UBlockoutToolsSettings>()
		);
	}
#endif // WITH_EDITOR
}

void FBlockoutToolsPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

#if WITH_EDITOR
// Unregister settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "BlockoutToolsPlugin");
	}
#endif // WITH_EDITOR
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlockoutToolsPluginModule, BlockoutToolsPlugin)