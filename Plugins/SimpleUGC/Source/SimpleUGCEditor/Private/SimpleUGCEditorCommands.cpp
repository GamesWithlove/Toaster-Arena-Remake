// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleUGCEditorCommands.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FSimpleUGCEditorModule"

void FSimpleUGCEditorCommands::RegisterCommands()
{
	UI_COMMAND(CreateUGCAction, "Create Mod", "Create a new MOD package in a mod plugin", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PackageUGCAction, "Package Mod", "Pack your MOD for sharing", EUserInterfaceActionType::Button, FInputChord());
}

TArray<TSharedPtr<FUICommandInfo>> FSimpleUGCEditorCommands::RegisterUGCCommands(const TArray<TSharedRef<class IPlugin>>& UGCList) const
{
	TArray<TSharedPtr<FUICommandInfo>> AvailableUGCActions;
	AvailableUGCActions.Reserve(UGCList.Num());

	FSimpleUGCEditorCommands* MutableThis = const_cast<FSimpleUGCEditorCommands*>(this);

	for (int32 Index = 0; Index < UGCList.Num(); ++Index)
	{
		AvailableUGCActions.Add(TSharedPtr<FUICommandInfo>());
		TSharedRef<IPlugin> UGC = UGCList[Index];

		FString CommandName = "UGCEditorUGC_" + UGC->GetName();

		FUICommandInfo::MakeCommandInfo(MutableThis->AsShared(),
		                                AvailableUGCActions[Index],
		                                FName(*CommandName),
		                                FText::FromString("MOD: " + UGC->GetName()),
		                                FText::FromString("MOD located at " + UGC->GetBaseDir()),
		                                FSlateIcon(),
		                                EUserInterfaceActionType::Button,
		                                FInputChord());
	}

	return AvailableUGCActions;
}

void FSimpleUGCEditorCommands::UnregisterUGCCommands(TArray<TSharedPtr<FUICommandInfo>>& UICommands) const
{
	FSimpleUGCEditorCommands* MutableThis = const_cast<FSimpleUGCEditorCommands*>(this);

	for (TSharedPtr<FUICommandInfo> Command : UICommands)
	{
		FUICommandInfo::UnregisterCommandInfo(MutableThis->AsShared(), Command.ToSharedRef());
	}
}

#undef LOCTEXT_NAMESPACE
