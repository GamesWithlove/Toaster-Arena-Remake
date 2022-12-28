// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

class FSimpleUGCPluginWizardDefinition;
class SDockTab;

class FSimpleUGCCreator : public TSharedFromThis<FSimpleUGCCreator>
{
public:
	FSimpleUGCCreator();
	~FSimpleUGCCreator();

	/**
	 * Opens the mod creator wizard.
	 * @param	bSuppressErrors		If false, a dialog will be shown if the wizard cannot be opened for whatever reason
	 */
	void OpenNewPluginWizard(bool bSuppressErrors = false) const;

	/** The name to use when creating the tab for the tab spawner */
	static const FName SimpleUGCEditorPluginCreatorName;

private:
	/** Registers a nomad tab spawner that will create the mod wizard */
	void RegisterTabSpawner();

	/** Unregisters the nomad tab spawner */
	void UnregisterTabSpawner();

	/** Spawns the tab that hosts the mod creator wizard widget */
	TSharedRef<SDockTab> HandleSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
};
