// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SimpleUGCEditorStyle.h"

class FSimpleUGCEditorCommands : public TCommands<FSimpleUGCEditorCommands>
{
public:
	FSimpleUGCEditorCommands()
		: TCommands<FSimpleUGCEditorCommands>(TEXT("SimpleUGCEditor"), NSLOCTEXT("Contexts", "SimpleUGCEditor", "SimpleUGCEditor Plugin"), NAME_None, FSimpleUGCEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

	TArray<TSharedPtr<FUICommandInfo>> RegisterUGCCommands(const TArray<TSharedRef<class IPlugin>>& UGCList) const;
	void UnregisterUGCCommands(TArray<TSharedPtr<FUICommandInfo>>& UICommands) const;

public:
	TSharedPtr<FUICommandInfo> CreateUGCAction;
	TSharedPtr<FUICommandInfo> PackageUGCAction;
};
