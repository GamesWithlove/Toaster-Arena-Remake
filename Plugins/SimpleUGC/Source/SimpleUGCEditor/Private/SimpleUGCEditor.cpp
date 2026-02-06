// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleUGCEditor.h"
#include "SimpleUGCEditorStyle.h"
#include "SimpleUGCEditorCommands.h"
#include "SimpleUGCCreator.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "LevelEditor.h"

static const FName SimpleUGCEditorTabName("SimpleUGCEditor");

#define LOCTEXT_NAMESPACE "FSimpleUGCEditorModule"

void FSimpleUGCEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	UGCCreator = MakeShared<FSimpleUGCCreator>();
	UGCPackager = MakeShared<FSimpleUGCPackager>();

	FSimpleUGCEditorStyle::Initialize();
	FSimpleUGCEditorStyle::ReloadTextures();

	FSimpleUGCEditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSimpleUGCEditorCommands::Get().CreateUGCAction,
		FExecuteAction::CreateRaw(this, &FSimpleUGCEditorModule::CreateUGCButtonClicked),
		FCanExecuteAction()
	);

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	// Add commands
	{
		FName MenuSection = "FileProject";
		FName ToolbarSection = "Content";

		// Add creator button to the menu
		{
			TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
			MenuExtender->AddMenuExtension(MenuSection, EExtensionHook::After, PluginCommands,
			                               FMenuExtensionDelegate::CreateRaw(
				                               this, &FSimpleUGCEditorModule::AddUGCCreatorMenuExtension));

			LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
		}

		// Add creator button to the toolbar
		{
			TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
			ToolbarExtender->AddToolBarExtension(ToolbarSection, EExtensionHook::After, PluginCommands,
			                                     FToolBarExtensionDelegate::CreateRaw(
				                                     this, &FSimpleUGCEditorModule::AddUGCCreatorToolbarExtension));

			LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
		}

		// Add packager button to the menu
		{
			TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
			MenuExtender->AddMenuExtension(MenuSection, EExtensionHook::After, PluginCommands,
			                               FMenuExtensionDelegate::CreateRaw(
				                               this, &FSimpleUGCEditorModule::AddUGCPackagerMenuExtension));

			LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
		}

		// Add packager button to the toolbar
		{
			TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
			ToolbarExtender->AddToolBarExtension(ToolbarSection, EExtensionHook::After, PluginCommands,
			                                     FToolBarExtensionDelegate::CreateRaw(
				                                     this, &FSimpleUGCEditorModule::AddUGCPackagerToolbarExtension));

			LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
		}
	}
}

void FSimpleUGCEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FSimpleUGCEditorStyle::Shutdown();

	FSimpleUGCEditorCommands::Unregister();
}

void FSimpleUGCEditorModule::CreateUGCButtonClicked()
{
	if (UGCCreator.IsValid())
	{
		UGCCreator->OpenNewPluginWizard();
	}
}

void FSimpleUGCEditorModule::AddUGCCreatorMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FSimpleUGCEditorCommands::Get().CreateUGCAction);
}

void FSimpleUGCEditorModule::AddUGCCreatorToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FSimpleUGCEditorCommands::Get().CreateUGCAction);
}

void FSimpleUGCEditorModule::AddUGCPackagerMenuExtension(FMenuBuilder& Builder)
{
	FSimpleUGCPackager* Packager = UGCPackager.Get();

	Builder.AddSubMenu(LOCTEXT("PackageUGCMenu_Label", "Package Mod"),
	                   LOCTEXT("PackageUGCMenu_Tooltip", "Pack your MOD for sharing"),
	                   FNewMenuDelegate::CreateRaw(Packager, &FSimpleUGCPackager::GeneratePackagerMenuContent),
	                   false,
	                   FSlateIcon(FSimpleUGCEditorStyle::GetStyleSetName(), "SimpleUGCEditor.PackageUGCAction")
	);
}

void FSimpleUGCEditorModule::AddUGCPackagerToolbarExtension(FToolBarBuilder& Builder)
{
	FSimpleUGCPackager* Packager = UGCPackager.Get();

	Builder.AddComboButton(FUIAction(),
	                       FOnGetContent::CreateSP(Packager, &FSimpleUGCPackager::GeneratePackagerComboButtonContent),
	                       LOCTEXT("PackageUGC_Label", "Package Mod"),
	                       LOCTEXT("PackageUGC_Tooltip", "Pack your MOD for sharing"),
	                       FSlateIcon(FSimpleUGCEditorStyle::GetStyleSetName(), "SimpleUGCEditor.PackageUGCAction")
	);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSimpleUGCEditorModule, SimpleUGCEditor)
