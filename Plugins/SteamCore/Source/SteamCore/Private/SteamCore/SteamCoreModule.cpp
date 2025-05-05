/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamCorePluginPrivatePCH.h"
#include <Interfaces/IPluginManager.h>

#define LOCTEXT_NAMESPACE "FSteamCoreModule"

DEFINE_LOG_CATEGORY(LogSteamCore);
#define STEAM_SDK_ROOT_PATH TEXT("Binaries/ThirdParty/Steamworks")

FString FSteamCoreModule::s_PluginName;
FString FSteamCoreModule::s_PluginVersion;

static void __cdecl SteamworksWarningMessageHook(int Severity, const char* Message)
{
	ESteamMessageType MessageType = ESteamMessageType::ENotification;

	switch (Severity)
	{
	case 0:
		MessageType = ESteamMessageType::EMessage;
		UE_LOG(LogSteamCore, Log, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
		break;
	case 1:
		MessageType = ESteamMessageType::EWarning;
		UE_LOG(LogSteamCore, Warning, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
		break;
	}
	
	USteamUtilities::InvokeSteamMessage(MessageType, UTF8_TO_TCHAR(Message));

}

void FSteamCoreModule::StartupModule()
{
	OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteamCore();
	check(OnlineAsyncTaskThreadRunnable);

	OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, TEXT("SteamCore"), 128 * 1024, TPri_Normal);
	check(OnlineAsyncTaskThread);

	TSharedPtr<IPlugin> PluginPtr = IPluginManager::Get().FindPlugin("SteamCore");
	if (!PluginPtr)	PluginPtr = IPluginManager::Get().FindPlugin("SteamCoreLite");

	if (PluginPtr)
	{
		if (PluginPtr->GetDescriptor().FriendlyName.Contains("Lite")) 
		{
			s_PluginName = "SteamCoreLite";
			s_PluginVersion = PluginPtr->GetDescriptor().VersionName;
		}
		else 
		{
			s_PluginName = "SteamCore";
			s_PluginVersion = PluginPtr->GetDescriptor().VersionName;
		}
	}

	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));
	UE_LOG(LogTemp, Log, TEXT("Using %s Version: %s"), *s_PluginName, *s_PluginVersion);
	UE_LOG(LogTemp, Log, TEXT("--------------------------------------------------------------------------------"));

}

void FSteamCoreModule::ShutdownModule()
{
	if (OnlineAsyncTaskThread)
	{
		delete OnlineAsyncTaskThread;
		OnlineAsyncTaskThread = nullptr;
	}

	if (OnlineAsyncTaskThreadRunnable)
	{
		delete OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThreadRunnable = nullptr;
	}

}

static bool bSteamHook = false;

bool FSteamCoreModule::Tick(float DeltaTime)
{
	if (OnlineAsyncTaskThreadRunnable)
	{
		OnlineAsyncTaskThreadRunnable->GameTick();
	}

#if ENABLE_STEAMCORE
	if (!bSteamHook)
	{
		if (GetUtils())
		{
			GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);

			bSteamHook = true;
		}
	}
#endif

	return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSteamCoreModule, SteamCore)
void USteamCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FSteamCoreModule* CoreModule = FModuleManager::Get().GetModulePtr<FSteamCoreModule>("SteamCore");

	if (CoreModule)
	{
		OnlineAsyncTaskThreadRunnable = CoreModule->OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThread = CoreModule->OnlineAsyncTaskThread;
		bInitialized = true;
	}

#if ENABLE_STEAMCORE
	if (GetUtils())
	{
		GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);
	}
#endif
}

void USteamCoreSubsystem::Deinitialize()
{
	OnlineAsyncTaskThreadRunnable = nullptr;
	OnlineAsyncTaskThread = nullptr;
}

bool USteamCoreSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
#if !ENABLE_STEAMCORE
	return false;
#endif
	
	if (SubsystemType == ESteamSubsystem::SteamCore)
	{
		return true;
	}
	
	return true;
}

void USteamCoreSubsystem::QueueAsyncTask(class FOnlineAsyncTask* AsyncTask)
{
	check(GEngine && GEngine->IsInitialized());
	check(bInitialized);
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(AsyncTask);
}

void USteamCoreSubsystem::QueueAsyncOutgoingItem(class FOnlineAsyncItem* AsyncItem)
{
	check(GEngine && GEngine->IsInitialized());
	check(bInitialized);
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToOutQueue(AsyncItem);
}
