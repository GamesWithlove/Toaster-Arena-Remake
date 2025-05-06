// Copyright 2023, EastFoxStudio. All Rights Reserved.

#include "QuickMergeSkeletalMeshCommands.h"

#define LOCTEXT_NAMESPACE "FQuickMergeSkeletalMeshModule"

void FQuickMergeSkeletalMeshCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "QuickMergeSkeletalMesh", "Execute QuickMergeSkeletalMesh action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
