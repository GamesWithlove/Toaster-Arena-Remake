/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCoreWeb Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "SteamWebUtilities.h"
#include "SteamCoreWebSettings.h"
#include "Containers/Ticker.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Misc/EngineVersionComparison.h"
#include "SteamCoreWeb.generated.h"

class FSteamCoreWebModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool Tick(float DeltaTime);
public:
	class FOnlineAsyncTaskManagerSteamCoreWeb* OnlineAsyncTaskThreadRunnable;
	class FRunnableThread* OnlineAsyncTaskThread;
private:
    #if UE_VERSION_NEWER_THAN(4,27,2)
    	FTSTicker::FDelegateHandle m_Ticker;
    #else
    	FDelegateHandle m_Ticker;
    #endif
};

UCLASS(abstract)
class STEAMCOREWEB_API USteamCoreWeb : public UObject
{
	GENERATED_BODY()
};

UCLASS()
class STEAMCOREWEB_API USteamCoreWebSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	class FOnlineAsyncTaskManagerSteamCoreWeb* OnlineAsyncTaskThreadRunnable;
	class FRunnableThread* OnlineAsyncTaskThread;
	ESubsystemWeb SubsystemType;
public:
	USteamCoreWebSubsystem()
		: SubsystemType(ESubsystemWeb::SteamCoreWeb)
	{
	}

public:
	void QueueAsyncTask(class FOnlineAsyncTask* asyncTask);
	void QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem);
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
};
