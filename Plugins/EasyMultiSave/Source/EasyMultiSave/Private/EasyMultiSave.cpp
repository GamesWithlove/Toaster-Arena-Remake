//Easy Multi Save - Copyright (C) 2024 by Michael Hegemann.  

#include "EasyMultiSave.h"
#include "EMSPluginSettings.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Developer/Settings/Public/ISettingsModule.h"

#define LOCTEXT_NAMESPACE "FEasyMultiSaveModule"

void FEasyMultiSaveModule::StartupModule()
{
	RegisterSettings();
}

void FEasyMultiSaveModule::ShutdownModule()
{
	if (UObjectInitialized())
	{
		UnregisterSettings();
	}
}

void FEasyMultiSaveModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		UEMSPluginSettings* PluginSettings = GetMutableDefault<UEMSPluginSettings>();
		
		SettingsModule->RegisterSettings("Project", "Plugins", "Easy Multi Save",
			LOCTEXT("RuntimeSettingsName", "Easy Multi Save"),
			LOCTEXT("RuntimeSettingsDescription", "Configure the Easy Multi Save plugin"),
			PluginSettings
		);
	
		if (PluginSettings->SlotInfoSaveGameClass.IsNull())
		{
			PluginSettings->SlotInfoSaveGameClass = FSoftClassPath(TEXT("/Script/EasyMultiSave.EMSInfoSaveGame"));
		}
	}
}

void FEasyMultiSaveModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "Easy Multi Save");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyMultiSaveModule, EasyMultiSave)