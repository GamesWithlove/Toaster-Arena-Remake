// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGBuilderSettings.h"

UPCGBuilderSettings::UPCGBuilderSettings()
{
	// By default include this mode
	EditingModes.Add(EPCGEditorDirtyMode::LoadAsPreview);
}
