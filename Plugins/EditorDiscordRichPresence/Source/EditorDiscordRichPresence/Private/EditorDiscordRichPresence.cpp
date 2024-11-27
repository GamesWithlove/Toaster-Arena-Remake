// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorDiscordRichPresence.h"
#include "discord-files/discord.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Runtime/Core/Public/Misc/App.h"
#if WITH_EDITOR
#include "UnrealEd.h"
//#include "Toolkits/AssetEditorToolkit.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Interfaces/IPluginManager.h"
#include "Framework/Application/SlateApplication.h"
#endif


#define LOCTEXT_NAMESPACE "FEditorDiscordRichPresenceModule"

discord::Core* fcore{};

void FEditorDiscordRichPresenceModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Get the base directory of this plugin
#if WITH_EDITOR
	FString BaseDir = IPluginManager::Get().FindPlugin("EditorDiscordRichPresence")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("ThirdParty/Discord/x64/Release/discord_game_sdk.dll"));
	DLLHandle = FPlatformProcess::GetDllHandle(*LibraryPath);
#endif // PLATFORM_WINDOWS

#endif

	/*
	Grab that Client ID from earlier
	Discord.CreateFlags.Default will require Discord to be running for the game to work
	If Discord is not running, it will:
	1. Close your game
	2. Open Discord
	3. Attempt to re-open your game
	Step 3 will fail when running directly from the Unreal Engine editor
	Therefore, always keep Discord running during tests, or use Discord.CreateFlags.NoRequireDiscord*/

		auto result = discord::Core::Create(1023921525285457950, DiscordCreateFlags_NoRequireDiscord, &fcore);
		//discord::Activity activity{};
		activity.SetType(discord::ActivityType::Playing);


		//Get project name from project settings, if blank get it from FApp (module name?)
		FString ProjectName;

		//get project name from project config
		GConfig->GetString(
			TEXT("/Script/EngineSettings.GeneralProjectSettings"),
			TEXT("ProjectName"),
			ProjectName,
			GGameIni
		);

		//check if its blank and use FApp to get it
		if (ProjectName.IsEmpty())
		{
			ProjectName = FApp::GetProjectName();

			if (ProjectName.IsEmpty())
			{
				ProjectName = "Untitled Project";
			}
		}

		//get engine version
		FString ver = "Engine Version: ";
		ver.AppendInt(ENGINE_MAJOR_VERSION);
		ver.Append(".").AppendInt(ENGINE_MINOR_VERSION);
		ver.Append(".").AppendInt(ENGINE_PATCH_VERSION);




		activity.SetDetails(TCHAR_TO_ANSI(*ProjectName));
		activity.SetState(TCHAR_TO_ANSI(*ver));

		discord::Timestamp time = FDateTime::UtcNow().ToUnixTimestamp();
		activity.GetTimestamps().SetStart(time);

		activity.GetAssets().SetLargeImage("ue5");

		if (fcore)
		{
			fcore->ActivityManager().UpdateActivity(activity, [](discord::Result result) {});
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Discord Error: fcore is null"));
		}


		//Tick for Discord update
		TickDelegate = FTickerDelegate::CreateRaw(this, &FEditorDiscordRichPresenceModule::Tick);
		//TickDelegateHandle = FTicker::GetCoreTicker().AddTicker(TickDelegate);
		FTSTicker::GetCoreTicker().AddTicker(TickDelegate);

		//FSlateApplication* SApp = &FSlateApplication::Get();
		//FText WTitle = SApp->GetActiveTopLevelRegularWindow()->GetTitle();

	
		//if (SApp)
		//{
			//FString WTitle = SApp->GetTitle().ToString();

			//UE_LOG(LogTemp, Log, TEXT("ProjectName: %s"), *WTitle);
		//}
		//else
		//{
			//UE_LOG(LogTemp, Log, TEXT("ProjectName: NULL"));
		//}

}

void FEditorDiscordRichPresenceModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
#if WITH_EDITOR
	//FTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);
	FTSTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);
	FPlatformProcess::FreeDllHandle(DLLHandle);
#endif
}

bool FEditorDiscordRichPresenceModule::Tick(float DeltaTime)
{
	//FEditorDiscordRichPresenceModule::Update(DeltaTime);
	//UpdateFocusedWindowStatus();
	FSlateApplication* SApp = &FSlateApplication::Get();
	if (SApp)
	{
		//FText WTitle = SApp->GetActiveTopLevelRegularWindow()->;
		//UE_LOG(LogTemp, Log, TEXT("ProjectName: %s"), *WTitle.ToString());
	}



	if (::fcore)
	{
		::fcore->RunCallbacks();
	}


	return true;
}


void FEditorDiscordRichPresenceModule::UpdateFocusedWindowStatus()
{
	//FAssetEditorManager assetEditorManager = FAssetEditorManager::Get();
	//TArray<UObject*> editedAssets = assetEditorManager.GetAllEditedAssets();
	//TArray<IAssetEditorInstance*> openedEditors

	UAssetEditorSubsystem* AssetSubsystem = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>();
	if (AssetSubsystem)
	{
		TArray<UObject*> editedAssets = AssetSubsystem->GetAllEditedAssets();
		TArray<IAssetEditorInstance*> openedEditors;

		//double LowestTime = -1.0;
		//UObject* LowestAsset;

		for (UObject* editedAsset : editedAssets)
		{
			double maxLastActivationTime = 0.0;
			maxLastActivationTime = AssetSubsystem->FindEditorForAsset(editedAsset, false)->GetAssociatedTabManager()->GetOwnerTab()->GetLastActivationTime();

			/*if (LowestTime == -1.0)
			{

			}*/

			//UE_LOG(LogTemp, Log, TEXT("LAT: %f, %s"), maxLastActivationTime, *AssetSubsystem->FindEditorForAsset(editedAsset, false)->GetEditorName().ToString());
		}
		
		
		
		/*if (!AssetSubsystem->GetAllEditedAssets().IsEmpty())
		{
			TArray<FEditorModeInfo> Info = AssetSubsystem->GetEditorModeInfoOrderedByPriority();
			//FString logString = 
			UE_LOG(LogTemp, Log, TEXT("ProjectName: %s"), *AssetSubsystem->GetAllEditedAssets()[0]->GetArchetype()->GetFName().ToString());
		}*/

	}
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEditorDiscordRichPresenceModule, EditorDiscordRichPresence)