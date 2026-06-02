// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleUGCPluginWizardDefinition.h"
#include "Interfaces/IPluginManager.h"
#include "IContentBrowserSingleton.h"
#include "SlateBasics.h"
#include "FindDirectoriesVisitor.h"

#define LOCTEXT_NAMESPACE "SimpleUGCPluginWizard"

FSimpleUGCPluginWizardDefinition::FSimpleUGCPluginWizardDefinition()
{
	PluginBaseDir = IPluginManager::Get().FindPlugin(TEXT("SimpleUGC"))->GetBaseDir();
	TArray<FString> FoundDirs;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString TemplatesBaseDir = PluginBaseDir / TEXT("Templates");
	FFindDirectoriesVisitor FindDirectoriesVisitor(PlatformFile, FoundDirs);

	// Find the Content Only Template that ships with the plugin.
	// Download the Robo Recall Mod Kit and check the Plugins/OdinEditor code for how to build and use your own UGC templates from your game content

	// The base template that will be included with/for all created mods
	FPluginTemplateDescription* BackingTemplateDesc = new FPluginTemplateDescription(FText::FromString("Base Mod"), FText::FromString("Empty Mod"), TEXT("BaseTemplate"), true, EHostType::Runtime);
	BackingTemplateDesc->SortPriority = 100;
	BackingTemplateDesc->bCanBePlacedInEngine = false;
	BackingTemplate = MakeShareable(BackingTemplateDesc);
	BackingTemplatePath = PluginBaseDir / TEXT("Templates") / BackingTemplate->OnDiskPath;
	TemplateDefinitions.Add(BackingTemplate.ToSharedRef());

	SelectedTemplates.Empty();
	SelectedTemplates.Add(BackingTemplate);

	// Find all additional mod templates and add them to the list of available selections
	FindTemplates();
}

void FSimpleUGCPluginWizardDefinition::FindTemplates()
{
	PluginBaseDir = IPluginManager::Get().FindPlugin(TEXT("SimpleUGC"))->GetBaseDir();
	TArray<FString> FoundDirs;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString TemplatesBaseDir = PluginBaseDir / TEXT("Templates");
	FFindDirectoriesVisitor FindDirectoriesVisitor(PlatformFile, FoundDirs);

	PlatformFile.IterateDirectory(*TemplatesBaseDir, FindDirectoriesVisitor);

	for (FString TemplateDirPath : FoundDirs)
	{
		FString TemplateDir = FPaths::GetCleanFilename(TemplateDirPath);

		// exclude template directories starting with tow underscores (we consider those "disabled") and the base template, as we already added that one
		if ((!TemplateDir.StartsWith("__")) && (!TemplateDir.Equals("BaseTemplate")))
		{
			TArray<FString> TemplateDetails;
			FString TemplateName = FName::NameToDisplayString(TemplateDir, false);
			FString TemplateDescription = TEXT("");
			int32 TemplateSortPriority = 100;
			TSharedPtr<FPluginTemplateDescription> TemplateDescShrPtr;
			FString TemplateDetailsFilePath = FString::Printf(TEXT("%s.txt"), *(TemplatesBaseDir / TemplateDir));

			// see if we have a .TXT file supplying us with better details for the template
			TemplateDetails.Empty();
			FFileHelper::LoadFileToStringArray(TemplateDetails, *TemplateDetailsFilePath);
			if (TemplateDetails.Num() >= 1)
			{
				TemplateName = TemplateDetails[0];
			}
			if (TemplateDetails.Num() >= 2)
			{
				TemplateDescription = TemplateDetails[1];
			}
			if (TemplateDetails.Num() >= 3)
			{
				TemplateSortPriority = FCString::Atoi(*TemplateDetails[2]);
			}

			FPluginTemplateDescription* TemplateDesc = new FPluginTemplateDescription(
				FText::FromString(TemplateName),
				FText::FromString(TemplateDescription),
				TemplateDir,
				true,
				EHostType::Runtime);
			TemplateDesc->SortPriority = TemplateSortPriority;  // this seem to do nothing?!
			TemplateDesc->bCanBePlacedInEngine = false;
			TemplateDescShrPtr = MakeShareable(TemplateDesc);

			TemplateDefinitions.Add(TemplateDescShrPtr.ToSharedRef());
		}
	}
}

const TArray<TSharedRef<FPluginTemplateDescription>>& FSimpleUGCPluginWizardDefinition::GetTemplatesSource() const
{
	return TemplateDefinitions;
}

void FSimpleUGCPluginWizardDefinition::OnTemplateSelectionChanged(TSharedPtr<FPluginTemplateDescription> InSelectedItem, ESelectInfo::Type SelectInfo)
{
	SelectedTemplates.Empty();
	SelectedTemplates.Add(InSelectedItem);
}

TSharedPtr<FPluginTemplateDescription> FSimpleUGCPluginWizardDefinition::GetSelectedTemplate() const
{
	if (SelectedTemplates.Num() > 0)
	{
		return SelectedTemplates[0];
	}

	return BackingTemplate;
}

void FSimpleUGCPluginWizardDefinition::ClearTemplateSelection()
{
	SelectedTemplates.Empty();
}

bool FSimpleUGCPluginWizardDefinition::HasValidTemplateSelection() const
{
	// A mod should be created even if no templates are actually selected
	return true;
}

bool FSimpleUGCPluginWizardDefinition::HasModules() const
{
	bool bHasModules = false;

	for (TSharedPtr<FPluginTemplateDescription> Template : SelectedTemplates)
	{
		if (FPaths::DirectoryExists(PluginBaseDir / TEXT("Templates") / Template->OnDiskPath / TEXT("Source")))
		{
			bHasModules = true;
			break;
		}
	}

	return bHasModules;
}

bool FSimpleUGCPluginWizardDefinition::IsMod() const
{
	return true;
}

void FSimpleUGCPluginWizardDefinition::OnShowOnStartupCheckboxChanged(ECheckBoxState CheckBoxState)
{
}

ECheckBoxState FSimpleUGCPluginWizardDefinition::GetShowOnStartupCheckBoxState() const
{
	return ECheckBoxState();
}

FText FSimpleUGCPluginWizardDefinition::GetInstructions() const
{
	return LOCTEXT("CreateNewUGCPanel", "Choose a mod type to create, fill out the details like name, etc.\nand hit the \"Create Mod\" button.");
}

TSharedPtr<SWidget> FSimpleUGCPluginWizardDefinition::GetCustomHeaderWidget()
{
	if (!CustomHeaderWidget.IsValid())
	{
		FString IconPath;
		GetPluginIconPath(IconPath);

		const FName BrushName(*IconPath);
		const FIntPoint Size = FSlateApplication::Get().GetRenderer()->GenerateDynamicImageResource(BrushName);
		if ((Size.X > 0) && (Size.Y > 0))
		{
			IconBrush = MakeShareable(new FSlateDynamicImageBrush(BrushName, FVector2D(Size.X, Size.Y)));
		}

		CustomHeaderWidget = SNew(SHorizontalBox)
			// Header image
			+ SHorizontalBox::Slot()
			  .AutoWidth()
			  .Padding(4.0f)
			[
				SNew(SBox)
				.WidthOverride(80.0f)
				.HeightOverride(80.0f)
				[
					SNew(SImage)
					.Image(IconBrush.IsValid() ? IconBrush.Get() : nullptr)
				]
			];
	}

	return CustomHeaderWidget;
}

bool FSimpleUGCPluginWizardDefinition::GetPluginIconPath(FString& OutIconPath) const
{
	// Replace this file with your own 128x128 image if desired.
	OutIconPath = BackingTemplatePath / TEXT("Resources/Icon128.png");
	return false;
}

bool FSimpleUGCPluginWizardDefinition::GetTemplateIconPath(TSharedRef<FPluginTemplateDescription> InTemplate, FString& OutIconPath) const
{
	FString TemplateName = InTemplate->Name.ToString();

	OutIconPath = PluginBaseDir / TEXT("Resources");

	if (TemplateToIconMap.Contains(TemplateName))
	{
		OutIconPath /= TemplateToIconMap[TemplateName];
	}
	else
	{
		// Couldn't find a suitable icon to use for this template, so use the default one instead
		OutIconPath /= TEXT("Icon128.png");
	}

	return false;
}

FString FSimpleUGCPluginWizardDefinition::GetPluginFolderPath() const
{
	return BackingTemplatePath;
}

EHostType::Type FSimpleUGCPluginWizardDefinition::GetPluginModuleDescriptor() const
{
	return BackingTemplate->ModuleDescriptorType;
}

ELoadingPhase::Type FSimpleUGCPluginWizardDefinition::GetPluginLoadingPhase() const
{
	return BackingTemplate->LoadingPhase;
}

TArray<FString> FSimpleUGCPluginWizardDefinition::GetFoldersForSelection() const
{
	TArray<FString> SelectedFolders;
	SelectedFolders.Add(BackingTemplatePath); // This will always be a part of the mod plugin

	for (TSharedPtr<FPluginTemplateDescription> Template : SelectedTemplates)
	{
		SelectedFolders.AddUnique(PluginBaseDir / TEXT("Templates") / Template->OnDiskPath);
	}

	return SelectedFolders;
}

void FSimpleUGCPluginWizardDefinition::PluginCreated(const FString& PluginName, bool bWasSuccessful) const
{
	// Override Category to UGC
	if (bWasSuccessful)
	{
		TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(PluginName);
		if (Plugin != nullptr)
		{
			FPluginDescriptor Desc = Plugin->GetDescriptor();
			Desc.Category = "Game Mods";
			FText UpdateFailureText;
			Plugin->UpdateDescriptor(Desc, UpdateFailureText);
		}
	}
}

#undef LOCTEXT_NAMESPACE
