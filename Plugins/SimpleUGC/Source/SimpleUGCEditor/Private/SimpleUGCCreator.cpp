// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleUGCCreator.h"
#include "SimpleUGCPluginWizardDefinition.h"
#include "Widgets/Docking/SDockTab.h"
#include "IPluginBrowser.h"

#define LOCTEXT_NAMESPACE "FSimpleUGCCreator"

const FName FSimpleUGCCreator::SimpleUGCEditorPluginCreatorName("SimpleUGCPluginCreator");

FSimpleUGCCreator::FSimpleUGCCreator()
{
	RegisterTabSpawner();
}

FSimpleUGCCreator::~FSimpleUGCCreator()
{
	UnregisterTabSpawner();
}

void FSimpleUGCCreator::OpenNewPluginWizard(bool bSuppressErrors) const
{
	if (IPluginBrowser::IsAvailable())
	{
		FGlobalTabmanager::Get()->TryInvokeTab(SimpleUGCEditorPluginCreatorName);
	}
	else if (!bSuppressErrors)
	{
		FMessageDialog::Open(EAppMsgType::Ok,
		                     LOCTEXT("PluginBrowserDisabled",
		                             "Creating a game mod requires the use of the Plugin Browser, but it is currently disabled."));
	}
}

void FSimpleUGCCreator::RegisterTabSpawner()
{
	FTabSpawnerEntry& Spawner = FGlobalTabmanager::Get()->RegisterNomadTabSpawner(SimpleUGCEditorPluginCreatorName,
		FOnSpawnTab::CreateRaw(this, &FSimpleUGCCreator::HandleSpawnPluginTab));

	// Set a default size for this tab
	FVector2D DefaultSize(900.0f, 800.0f);
	FTabManager::RegisterDefaultTabWindowSize(SimpleUGCEditorPluginCreatorName, DefaultSize);

	Spawner.SetDisplayName(LOCTEXT("NewUGCTabHeader", "Create New MOD Package"));
	Spawner.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FSimpleUGCCreator::UnregisterTabSpawner()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(SimpleUGCEditorPluginCreatorName);
}

TSharedRef<SDockTab> FSimpleUGCCreator::HandleSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	check(IPluginBrowser::IsAvailable());
	return IPluginBrowser::Get().SpawnPluginCreatorTab(SpawnTabArgs, MakeShared<FSimpleUGCPluginWizardDefinition>());
}

#undef LOCTEXT_NAMESPACE
