// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamRemoteStorage/SteamRemoteStorage.h"

#ifdef STEAMCORE_SteamRemoteStorage_generated_h
#error "SteamRemoteStorage.generated.h already included, missing '#pragma once' in SteamRemoteStorage.h"
#endif
#define STEAMCORE_SteamRemoteStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamRemoteStoragePlatform : uint8;
enum class ESteamUGCReadAction : uint8;
struct FRemoteStorageFileReadAsyncComplete;
struct FSteamID;
struct FSteamUGCHandle;
struct FUGCFileWriteStreamHandle;

// ********** Begin Class URemoteStorage ***********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSyncPlatforms); \
	DECLARE_FUNCTION(execSetCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForApp); \
	DECLARE_FUNCTION(execIsCloudEnabledForAccount); \
	DECLARE_FUNCTION(execGetUGCDownloadProgress); \
	DECLARE_FUNCTION(execUGCDownloadToLocation); \
	DECLARE_FUNCTION(execUGCRead); \
	DECLARE_FUNCTION(execUGCDownload); \
	DECLARE_FUNCTION(execGetUGCDetails); \
	DECLARE_FUNCTION(execGetSyncPlatforms); \
	DECLARE_FUNCTION(execGetQuota); \
	DECLARE_FUNCTION(execGetFileTimestamp); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetFileNameAndSize); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetCachedUGCHandle); \
	DECLARE_FUNCTION(execGetCachedUGCCount); \
	DECLARE_FUNCTION(execFileWriteStreamWriteChunk); \
	DECLARE_FUNCTION(execFileWriteStreamOpen); \
	DECLARE_FUNCTION(execFileWriteStreamClose); \
	DECLARE_FUNCTION(execFileWriteStreamCancel); \
	DECLARE_FUNCTION(execFileWriteAsync); \
	DECLARE_FUNCTION(execFileWrite); \
	DECLARE_FUNCTION(execFileShare); \
	DECLARE_FUNCTION(execFileReadAsyncComplete); \
	DECLARE_FUNCTION(execFileReadAsync); \
	DECLARE_FUNCTION(execFileRead); \
	DECLARE_FUNCTION(execFilePersisted); \
	DECLARE_FUNCTION(execFileForget); \
	DECLARE_FUNCTION(execFileExists); \
	DECLARE_FUNCTION(execFileDelete);


struct Z_Construct_UClass_URemoteStorage_Statics;
STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteStorage(); \
	friend struct ::Z_Construct_UClass_URemoteStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMCORE_API UClass* ::Z_Construct_UClass_URemoteStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteStorage, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), Z_Construct_UClass_URemoteStorage_NoRegister) \
	DECLARE_SERIALIZER(URemoteStorage)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteStorage(URemoteStorage&&) = delete; \
	URemoteStorage(const URemoteStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteStorage) \
	NO_API virtual ~URemoteStorage();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteStorage;

// ********** End Class URemoteStorage *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamRemoteStorage_SteamRemoteStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
