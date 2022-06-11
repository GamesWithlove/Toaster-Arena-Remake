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

#if UE_VERSION_NEWER_THAN(4,27,2)
	m_Ticker = FTSTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateLambda([this](float Delta)
	{
		Tick(Delta);
		
		return true;
	}), 0.1f);
#else
	m_Ticker = FTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateLambda([this](float Delta)
	{
		Tick(Delta);
		
		return true;
	}), 0.1f);
#endif
}

void FSteamCoreModule::ShutdownModule()
{
	if (m_Ticker.IsValid())
	{
#if UE_VERSION_NEWER_THAN(4,27,2)
		FTSTicker::GetCoreTicker().RemoveTicker(m_Ticker);
#else
		FTicker::GetCoreTicker().RemoveTicker(m_Ticker);
#endif
	}
	
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

	if (!bSteamHook)
	{
		if (GetUtils())
		{
			GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);

			bSteamHook = true;
		}
	}

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
	}

	if (GetUtils())
	{
		GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);
	}
}

void USteamCoreSubsystem::Deinitialize()
{
	OnlineAsyncTaskThreadRunnable = nullptr;
	OnlineAsyncTaskThread = nullptr;
}

bool USteamCoreSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (SubsystemType == ESteamSubsystem::SteamCore)
	{
		return true;
	}

	bool Result = true;

	if (const USteamCoreSettings* Settings = GetDefault<USteamCoreSettings>())
	{
		Result = (Settings->DisabledSubsystems & (1 << static_cast<int32>(SubsystemType))) == 0;
	}

	return Result;
}

void USteamCoreSubsystem::QueueAsyncTask(class FOnlineAsyncTask* AsyncTask)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(AsyncTask);
}

void USteamCoreSubsystem::QueueAsyncOutgoingItem(class FOnlineAsyncItem* AsyncItem)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToOutQueue(AsyncItem);
}
