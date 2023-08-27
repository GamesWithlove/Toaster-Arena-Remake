/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include <CoreMinimal.h>
#include <Engine/Texture2D.h>
#include <Engine/Engine.h>
#include <Engine/GameInstance.h>
#include <Engine/World.h>
#include <Serialization/MemoryWriter.h>
#include <Serialization/MemoryReader.h>
#include <HAL/RunnableThread.h>
#include <Misc/ConfigCacheIni.h>
#include <Misc/DateTime.h>
#include <Misc/FileHelper.h>
#include <Misc/EngineVersionComparison.h>
#include <Misc/CoreDelegates.h>
#include <OnlineSessionSettings.h>
#include <OnlineSubsystem.h>
#include <Interfaces/OnlineSessionInterface.h>
#include <Subsystems/GameInstanceSubsystem.h>
#include <Async/TaskGraphInterfaces.h>
#include <Containers/Ticker.h>
#include <Interfaces/IPv4/IPv4Address.h>
#include <TimerManager.h>
#include <Net/OnlineBlueprintCallProxyBase.h>
#include <OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h>
#include <SocketSubsystem.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Async/Async.h>
#include <HttpModule.h>
#include <Interfaces/IHttpRequest.h>
#include <Interfaces/IHttpResponse.h>
#include <AudioDevice.h>
#include <GameFramework/PlayerState.h>
#include <Sound/SoundWaveProcedural.h>
#if ENABLE_STEAMCORE
#include <OnlineSubsystemSteam.h>
#include <OnlinePingInterfaceSteam.h>
#include <SteamSharedModule.h>
#include <OnlineSubsystemSteamModule.h>
#endif

#if UE_VERSION_NEWER_THAN(5,1,0)
#include <Online/OnlineSessionNames.h>
#endif

#include "SteamCoreLogging.h"
