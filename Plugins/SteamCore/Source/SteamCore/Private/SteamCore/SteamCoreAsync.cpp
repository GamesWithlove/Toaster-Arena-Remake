/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreAsync.h"
#include "SteamCorePluginPrivatePCH.h"
#include "SteamCoreSettings.h"
#include "SteamCoreModule.h"
#include "SteamCore/SteamTypes.h"

void FOnlineAsyncTaskManagerSteamCore::OnlineTick()
{
}

void USteamCoreAsyncAction::Activate()
{
	Super::Activate();
}

void USteamCoreAsyncAction::SetReadyToDestroy()
{
	Super::SetReadyToDestroy();
}

USteamCoreSubsystem* USteamCoreAsyncAction::GetInstancedSubsystem(UObject* WorldContextObject)
{
	checkf(GEngine && GEngine->IsInitialized(), TEXT("Game engine not initialized."));
    	
	if (WorldContextObject && WorldContextObject->GetWorld())
	{
		const auto GameInstance = WorldContextObject->GetWorld()->GetGameInstance();

		if (GameInstance)
		{
			return GameInstance->GetSubsystem<USteamCoreSubsystem>();
		}
	}

	return nullptr;
}

FOnlineAsyncTaskSteamCore::FOnlineAsyncTaskSteamCore()
	: FOnlineAsyncTaskBasic(nullptr)
	, bInit(false)
	, bTimedOut(false)
#if ENABLE_STEAMCORE
	, m_CallbackHandle(k_uAPICallInvalid)
#else
	, m_CallbackHandle(0)
#endif
	, m_AsyncObject(nullptr)
	, m_AsyncTimeout(10.f)
{
}

void FOnlineAsyncTaskSteamCore::Tick()
{
	LogVerbose("Tick: %s", *ToString());

	if (!bIsComplete)
	{
		bTimedOut = GetElapsedTime() > m_AsyncTimeout;

		if (bTimedOut)
		{
			bIsComplete = true;
			bWasSuccessful = false;

			LogVerbose("%s timed out or finished ", *ToString());
		}
	}
}
