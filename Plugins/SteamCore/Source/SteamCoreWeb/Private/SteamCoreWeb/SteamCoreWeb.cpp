/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#include "SteamCoreWeb/SteamCoreWeb.h"
#include "SteamCoreWeb/SteamCoreWebAsync.h"
#include "SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h"

#define LOCTEXT_NAMESPACE "FSteamCoreWebModule"

DEFINE_LOG_CATEGORY(SteamCoreWebLog);

void FSteamCoreWebModule::StartupModule()
{
	OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteamCoreWeb();
	check(OnlineAsyncTaskThreadRunnable);

	OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, TEXT("SteamCoreWeb"), 128 * 1024, TPri_Normal);
	check(OnlineAsyncTaskThread);

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

void FSteamCoreWebModule::ShutdownModule()
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

bool FSteamCoreWebModule::Tick(float DeltaTime)
{
	if (OnlineAsyncTaskThreadRunnable)
	{
		OnlineAsyncTaskThreadRunnable->GameTick();
	}

	return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSteamCoreWebModule, SteamCoreWeb)
void USteamCoreWebSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	if (FSteamCoreWebModule* CoreModule = FModuleManager::Get().GetModulePtr<FSteamCoreWebModule>("SteamCoreWeb"))
	{
		OnlineAsyncTaskThreadRunnable = CoreModule->OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThread = CoreModule->OnlineAsyncTaskThread;
	}
}

void USteamCoreWebSubsystem::Deinitialize()
{
	OnlineAsyncTaskThreadRunnable = nullptr;
	OnlineAsyncTaskThread = nullptr;
}

bool USteamCoreWebSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (SubsystemType == ESubsystemWeb::SteamCoreWeb)
	{
		return true;
	}

	bool m_Result = true;

	if (const USteamCoreWebSettings* Settings = GetDefault<USteamCoreWebSettings>())
	{
		m_Result = (Settings->DisabledSubsystems & (1 << static_cast<int32>(SubsystemType))) == 0;
	}

	return m_Result;
}

void USteamCoreWebSubsystem::QueueAsyncTask(class FOnlineAsyncTask* asyncTask)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(asyncTask);
}

void USteamCoreWebSubsystem::QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToOutQueue(asyncItem);
}
