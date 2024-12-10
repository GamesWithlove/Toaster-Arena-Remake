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
class USteamCoreMatchmakingServersAsyncActionRequestServerList;
class USteamCoreMatchmakingServersAsyncActionPingServer;
class USteamCoreMatchmakingServersAsyncActionServerRules;
class FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer;
class FOnlineAsyncTaskSteamCoreMatchmakingServersServerList;
class FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules;

class STEAMCORE_API FSteamCoreModule : public IModuleInterface
#if UE_VERSION_NEWER_THAN(4,27,2)
, public FTSTickerObjectBase
#else
, public FTickerObjectBase
#endif
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool Tick(float DeltaTime) override;
public:
	FOnlineAsyncTaskManagerSteamCore* OnlineAsyncTaskThreadRunnable;
	FRunnableThread* OnlineAsyncTaskThread;
	static FString s_PluginName;
	static FString s_PluginVersion;
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
	friend class USteamCoreMatchmakingServersAsyncActionRequestServerList;
	friend class USteamCoreMatchmakingServersAsyncActionPingServer;
	friend class USteamCoreMatchmakingServersAsyncActionServerRules;
	friend class FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer;
	friend class FOnlineAsyncTaskSteamCoreMatchmakingServersServerList;
	friend class FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules;
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
protected:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* CurrentMatchmakingServersServerList; 
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* CurrentMatchmakingServersPingServer; 
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* CurrentMatchmakingServersServerRules; 
	
private:
	bool bInitialized = false;
};
