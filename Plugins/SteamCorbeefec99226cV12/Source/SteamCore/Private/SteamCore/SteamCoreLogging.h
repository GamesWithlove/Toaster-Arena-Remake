/**
* Copyright (C) 2017-2025 eelDev AB
*/

#pragma once

#define LogSteamCoreDebug(format, ...) UE_LOG(LogSteamCore, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogSteamCoreVerbose(format, ...) UE_LOG(LogSteamCore, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogSteamCoreVeryVerbose(format, ...) UE_LOG(LogSteamCore, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogSteamCoreError(format, ...) UE_LOG(LogSteamCore, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogSteamCoreWarning(format, ...) UE_LOG(LogSteamCore, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
