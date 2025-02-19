// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/SteamRemoteStorageTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageDownloadUGCResult;
struct FRemoteStorageFileReadAsyncComplete;
struct FRemoteStorageFileShareResult;
struct FRemoteStorageFileWriteAsyncComplete;
struct FRemoteStoragePublishedFileSubscribed;
struct FRemoteStoragePublishedFileUnsubscribed;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoteStorageUnsubscribePublishedFileResult;
#ifdef STEAMCORE_SteamRemoteStorageTypes_generated_h
#error "SteamRemoteStorageTypes.generated.h already included, missing '#pragma once' in SteamRemoteStorageTypes.h"
#endif
#define STEAMCORE_SteamRemoteStorageTypes_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FUGCFileWriteStreamHandle>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileWriteAsyncComplete>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileReadAsyncComplete>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileShareResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageUnsubscribePublishedFileResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileUnsubscribed>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileSubscribed>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageDownloadUGCResult>();

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_282_DELEGATE \
STEAMCORE_API void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_283_DELEGATE \
STEAMCORE_API void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_284_DELEGATE \
STEAMCORE_API void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_285_DELEGATE \
STEAMCORE_API void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& Data);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_286_DELEGATE \
STEAMCORE_API void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_287_DELEGATE \
STEAMCORE_API void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_288_DELEGATE \
STEAMCORE_API void FOnUGCDownloadAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_289_DELEGATE \
STEAMCORE_API void FOnUGCDownloadToLocationAsync_DelegateWrapper(const FScriptDelegate& OnUGCDownloadToLocationAsync, FRemoteStorageDownloadUGCResult const& Data, bool bWasSuccessful);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h_290_DELEGATE \
STEAMCORE_API void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& Data, bool bWasSuccessful);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorageTypes_h


#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::None) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved2) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> struct TIsUEnumClass<ESteamRemoteStoragePlatform> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();

#define FOREACH_ENUM_ESTEAMUGCREADACTION(op) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished) \
	op(ESteamUGCReadAction::k_EUGCRead_ContinueReading) \
	op(ESteamUGCReadAction::k_EUGCRead_Close) 

enum class ESteamUGCReadAction : uint8;
template<> struct TIsUEnumClass<ESteamUGCReadAction> { enum { Value = true }; };
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUGCReadAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
