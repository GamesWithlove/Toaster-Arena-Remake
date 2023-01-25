// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleUGCPackager.h"
#include "SimpleUGCEditor.h"
#include "SimpleUGCEditorCommands.h"
#include "SimpleUGCEditorStyle.h"
#include "Widgets/SWindow.h"
#include "Widgets/SWidget.h"
#include "Interfaces/IPluginManager.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Editor/UATHelper/Public/IUATHelperModule.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "FileHelpers.h"
#include "GeneralProjectSettings.h"
#include "ProjectDescriptor.h"
#include "HAL/FileManagerGeneric.h"
#include "Interfaces/IProjectManager.h"
#include "Misc/PackageName.h"

#define LOCTEXT_NAMESPACE "SimpleUGCPackager"

DEFINE_LOG_CATEGORY(SimpleUGCPackager);

FSimpleUGCPackager::FSimpleUGCPackager()
{
}

FSimpleUGCPackager::~FSimpleUGCPackager()
{
}

void FSimpleUGCPackager::OpenPluginPackager(TSharedRef<IPlugin> Plugin)
{
	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();

	FString DefaultDirectory = FPaths::ConvertRelativePathToFull(Plugin->GetBaseDir());
	FString OutputDirectory;

	// Prompt the user to save all dirty packages. We'll ensure that if any packages from the mod that the user wants to
	// package are dirty that they will not be able to save them.

	if (!IsAllContentSaved(Plugin))
	{
		FEditorFileUtils::SaveDirtyPackages(true, true, true);
	}

	if (IsAllContentSaved(Plugin))
	{
		void* ParentWindowWindowHandle = nullptr;
		IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
		const TSharedPtr<SWindow>& MainFrameParentWindow = MainFrameModule.GetParentWindow();
		if (MainFrameParentWindow.IsValid() && MainFrameParentWindow->GetNativeWindow().IsValid())
		{
			ParentWindowWindowHandle = MainFrameParentWindow->GetNativeWindow()->GetOSWindowHandle();
		}

		if (DesktopPlatform->OpenDirectoryDialog(ParentWindowWindowHandle, LOCTEXT("SelectOutputFolderTitle", "Select UGC output directory:").ToString(), DefaultDirectory, OutputDirectory))
		{
			PackagePlugin(Plugin, OutputDirectory);
		}
	}
	else
	{
		FText PackageModError = FText::Format(LOCTEXT("PackageUGCError_UnsavedContent", "You must save all assets in {0} before you can share it."), FText::FromString(Plugin->GetName()));

		FMessageDialog::Open(EAppMsgType::Ok, PackageModError);
	}
}

bool FSimpleUGCPackager::IsAllContentSaved(TSharedRef<IPlugin> Plugin)
{
	bool bAllContentSaved = true;

	TArray<UPackage*> UnsavedPackages;
	FEditorFileUtils::GetDirtyContentPackages(UnsavedPackages);
	FEditorFileUtils::GetDirtyWorldPackages(UnsavedPackages);

	if (UnsavedPackages.Num() > 0)
	{
		FString PluginBaseDir = Plugin->GetBaseDir();

		for (UPackage* Package : UnsavedPackages)
		{
			FString PackageFilename;
			if (FPackageName::TryConvertLongPackageNameToFilename(Package->GetName(), PackageFilename))
			{
				if (PackageFilename.Find(PluginBaseDir) == 0)
				{
					bAllContentSaved = false;
					break;
				}
			}
		}
	}

	return bAllContentSaved;
}

void FSimpleUGCPackager::PackagePlugin(TSharedRef<class IPlugin> Plugin, const FString& OutputDirectory)
{
#if PLATFORM_WINDOWS
	FText PlatformName = LOCTEXT("PlatformName_Windows", "Win64");
#elif PLATFORM_MAC
	FText PlatformName = LOCTEXT("PlatformName_Mac", "Mac");
#elif PLATFORM_LINUX
	FText PlatformName = LOCTEXT("PlatformName_Linux", "Linux");
#else
	FText PlatformName = LOCTEXT("PlatformName_Desktop", "Desktop");
#endif

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	FString ReleaseVersion;
	FString GameModuleName;

	FString ProjectDir = FPaths::GetPath(FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath()));
	FString ReleasesDir = FString::Printf(TEXT("%s/Releases"), *ProjectDir);

	// look for any AssetRegistry.bin files to find the release directory to base this packaging on
	TArray<FString> AssetRegistries = GetAllFilesInDirectory(ReleasesDir, true, TEXT("AssetRegistry"), TEXT(""));
	if( AssetRegistries.Num() < 1 )
	{
		UE_LOG(SimpleUGCPackager, Error, TEXT("Failed to find an AssetRegistry to determine the release data to use!  Make sure you propeerly set up [ProjectDir]/Releases as described in the documentation."));
		return;
	}

	// fetch first dir name under the Releases dir from the first AssetRegistry found, to determine the release data to use for this packaging
	TArray<FString> AssetRegistryPathSegments;
	AssetRegistries[0].Replace(*ReleasesDir, TEXT("")).TrimChar(*TEXT("/")).ParseIntoArray(AssetRegistryPathSegments, TEXT("/"));
	ReleaseVersion = AssetRegistryPathSegments[0];
	UE_LOG(SimpleUGCPackager, Display, TEXT("***** Basing mod packaging on release: %s *****"), *ReleaseVersion);

	// determine the game module, the mods are packaged for - VERY simple implementation, this only works if you have ONE module (or the first one is the right one)
	const FProjectDescriptor* Project = IProjectManager::Get().GetCurrentProject();

	if( Project->Modules.Num() > 1 )
	{
		UE_LOG(SimpleUGCPackager, Warning, TEXT("There are more than one modules in this project, you might want to doublecheck if we're using the right one!"));
	}

	GameModuleName = Project->Modules[0].Name.ToString();
	UE_LOG(SimpleUGCPackager, Display, TEXT("***** Determined game module name mods are supposingly packaged for: %s *****"), *GameModuleName);

	// set up some path names where things are going
	FString StagePath = FString::Printf(TEXT("%s/Temp"), *OutputDirectory);
	FString StagePathPackedMod = FString::Printf(TEXT("%s/Temp/Windows/%s/Mods"), *OutputDirectory, *GameModuleName);

	// clean a possibly left over staging area
	PlatformFile.DeleteDirectoryRecursively(*StagePath);

	// UAT command for packaging our mod
	FString CommandLine = FString::Printf(TEXT(
		"BuildCookRun"
		" -project=\"%s\""
		" -dlcname=\"%s\""
		" -basedonreleaseversion= 1.0"
		" -generatepatch"
		" -archivedirectory=\"%s\""
		" -targetplatform=Win64"
		" -DLCIncludeEngineContent -DLCPakPluginFile -nodebuginfo"
		" -noP4"
		" -build -cook -stage -package -pak -archive -cookall -compressed -distribution"
		" -clientconfig=Development -serverconfig=Development"),
	                                      *FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath()),
	                                      *Plugin->GetName(),
	                                      *ReleaseVersion,
	                                      *StagePath
	);

	FText PackagingText = FText::Format(LOCTEXT("SimpleUGCEditor_PackagePluginTaskName", "Packaging {0}"), FText::FromString(Plugin->GetName()));

	FString FriendlyName = Plugin->GetDescriptor().FriendlyName;
	IUATHelperModule::Get().CreateUatTask(CommandLine, PlatformName, PackagingText,
	                                      PackagingText, FSimpleUGCEditorStyle::Get().GetBrush(TEXT("SimpleUGCEditor.PackageUGCAction")),
	                                      [ReleaseVersion, PlatformName, FriendlyName, OutputDirectory, StagePath, StagePathPackedMod]
                                      (FString TaskResult, double TimeSec)
	                                      {
		                                      // move the actual mod files into the requested output dir and cleanup the staging area
		                                      IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		                                      PlatformFile.CopyDirectoryTree(*OutputDirectory, *StagePathPackedMod, true);
		                                      PlatformFile.DeleteDirectoryRecursively(*StagePath);
	                                      });
}

void FSimpleUGCPackager::FindAvailableGameMods(TArray<TSharedRef<IPlugin>>& OutAvailableGameMods)
{
	OutAvailableGameMods.Empty();

	// Find available game mods from the list of discovered plugins

	for (TSharedRef<IPlugin> Plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		// All game project plugins that are marked as mods are valid
		if (Plugin->GetLoadedFrom() == EPluginLoadedFrom::Project && Plugin->GetType() == EPluginType::Mod)
		{
			UE_LOG(LogTemp, Display, TEXT("Adding %s"), *Plugin->GetName());
			OutAvailableGameMods.AddUnique(Plugin);
		}
	}
}

void FSimpleUGCPackager::GeneratePackagerMenuContent_Internal(class FMenuBuilder& MenuBuilder, const TArray<TSharedPtr<FUICommandInfo>>& Commands)
{
	for (TSharedPtr<FUICommandInfo> Command : Commands)
	{
		MenuBuilder.AddMenuEntry(Command, NAME_None, TAttribute<FText>(), TAttribute<FText>(), FSlateIcon(FSimpleUGCEditorStyle::GetStyleSetName(), "SimpleUGCEditor.Folder"));
	}
}

void FSimpleUGCPackager::GeneratePackagerMenuContent(class FMenuBuilder& MenuBuilder)
{
	TArray<TSharedRef<IPlugin>> AvailableGameMods;
	FindAvailableGameMods(AvailableGameMods);
	GetAvailableUGCCommands(AvailableGameMods);

	// Regenerate the action list
	TSharedPtr<FUICommandList> GameModActionsList = MakeShareable(new FUICommandList);

	for (int32 Index = 0; Index < UGCCommands.Num(); ++Index)
	{
		GameModActionsList->MapAction(
			UGCCommands[Index],
			FExecuteAction::CreateRaw(this, &FSimpleUGCPackager::OpenPluginPackager, AvailableGameMods[Index]),
			FCanExecuteAction()
		);
	}

	TArray<TSharedPtr<FUICommandInfo>> Commands;

	MenuBuilder.PushCommandList(GameModActionsList.ToSharedRef());
	GeneratePackagerMenuContent_Internal(MenuBuilder, UGCCommands);
	MenuBuilder.PopCommandList();
}

TSharedRef<SWidget> FSimpleUGCPackager::GeneratePackagerComboButtonContent()
{
	// Regenerate the game mod commands
	TArray<TSharedRef<IPlugin>> AvailableGameMods;
	FindAvailableGameMods(AvailableGameMods);

	GetAvailableUGCCommands(AvailableGameMods);

	// Regenerate the action list
	TSharedPtr<FUICommandList> GameModActionsList = MakeShareable(new FUICommandList);

	for (int32 Index = 0; Index < UGCCommands.Num(); ++Index)
	{
		GameModActionsList->MapAction(
			UGCCommands[Index],
			FExecuteAction::CreateRaw(this, &FSimpleUGCPackager::OpenPluginPackager, AvailableGameMods[Index]),
			FCanExecuteAction()
		);
	}

	// Show the drop down menu
	const bool bShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, GameModActionsList);

	MenuBuilder.BeginSection(NAME_None, LOCTEXT("PackageUGC", "Share..."));
	{
		GeneratePackagerMenuContent_Internal(MenuBuilder, UGCCommands);
	}
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

void FSimpleUGCPackager::GetAvailableUGCCommands(const TArray<TSharedRef<IPlugin>>& AvailableUGC)
{
	if (UGCCommands.Num() > 0)
	{
		// Unregister UI Commands
		FSimpleUGCEditorCommands::Get().UnregisterUGCCommands(UGCCommands);
	}
	UGCCommands.Empty(AvailableUGC.Num());

	UGCCommands = FSimpleUGCEditorCommands::Get().RegisterUGCCommands(AvailableUGC);
}

TArray<FString> FSimpleUGCPackager::GetAllFilesInDirectory(const FString Directory, const bool FullPath, const FString OnlyFilesStartingWith, const FString OnlyFilesWithExtension)
{
	// Get all files in directory
	TArray<FString> DirectoriesToSkip;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FLocalTimestampDirectoryVisitor Visitor(PlatformFile, DirectoriesToSkip, DirectoriesToSkip, false);
	PlatformFile.IterateDirectory(*Directory, Visitor);
	TArray<FString> Files;

	for (TMap<FString, FDateTime>::TIterator TimestampIt(Visitor.FileTimes); TimestampIt; ++TimestampIt)
	{
		const FString FilePath = TimestampIt.Key();
		const FString FileName = FPaths::GetCleanFilename(FilePath);
		bool ShouldAddFile = true;

		// Check if filename starts with required characters
		if (!OnlyFilesStartingWith.IsEmpty())
		{
			const FString left = FileName.Left(OnlyFilesStartingWith.Len());

			if (!(FileName.Left(OnlyFilesStartingWith.Len()).Equals(OnlyFilesStartingWith, ESearchCase::IgnoreCase)))
			{
				ShouldAddFile = false;
			}
		}

		// Check if file extension is required characters
		if (!OnlyFilesWithExtension.IsEmpty())
		{
			if (!(FPaths::GetExtension(FileName, false).Equals(OnlyFilesWithExtension, ESearchCase::IgnoreCase)))
			{
				ShouldAddFile = false;
			}
		}

		// Add full path to results
		if (ShouldAddFile)
		{
			Files.Add(FullPath ? FilePath : FileName);
		}
	}

	return Files;
}

#undef LOCTEXT_NAMESPACE
