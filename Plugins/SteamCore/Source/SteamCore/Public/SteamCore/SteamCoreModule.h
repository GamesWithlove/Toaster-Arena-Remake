/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SteamCore/SteamUtilities.h"
#include "SteamCore/SteamCoreSettings.h"
#include "Misc/EngineVersionComparison.h"
#include "SteamCoreModule.generated.h"

class FOnlineAsyncTaskManagerSteamCore;
class FRunnableThread;

class STEAMCORE_API FSteamCoreModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool Tick(float DeltaTime);
public:
	FOnlineAsyncTaskManagerSteamCore* OnlineAsyncTaskThreadRunnable;
	FRunnableThread* OnlineAsyncTaskThread;
	static FString s_PluginName;
	static FString s_PluginVersion;
private:
#if UE_VERSION_NEWER_THAN(4,27,2)
	FTSTicker::FDelegateHandle m_Ticker;
#else
	FDelegateHandle m_Ticker;
#endif
};

UCLASS(abstract)
class STEAMCORE_API USteamCore : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class STEAMCORE_API USteamCoreSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	FOnlineAsyncTaskManagerSteamCore* OnlineAsyncTaskThreadRunnable;
	FRunnableThread* OnlineAsyncTaskThread;
	ESteamSubsystem SubsystemType;
public:
	USteamCoreSubsystem()
		: SubsystemType(ESteamSubsystem::SteamCore)
	{
	}

public:
	void QueueAsyncTask(class FOnlineAsyncTask* AsyncTask);
	void QueueAsyncOutgoingItem(class FOnlineAsyncItem* AsyncItem);
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
};
