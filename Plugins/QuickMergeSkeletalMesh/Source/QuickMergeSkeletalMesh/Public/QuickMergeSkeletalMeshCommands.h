// Copyright 2023, EastFoxStudio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "QuickMergeSkeletalMeshStyle.h"

class FQuickMergeSkeletalMeshCommands : public TCommands<FQuickMergeSkeletalMeshCommands>
{
public:

	FQuickMergeSkeletalMeshCommands()
		: TCommands<FQuickMergeSkeletalMeshCommands>(TEXT("QuickMergeSkeletalMesh"), 
		NSLOCTEXT("Contexts", "QuickMergeSkeletalMesh", "QuickMergeSkeletalMesh Plugin"), NAME_None, FQuickMergeSkeletalMeshStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
