// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PakDownloader.h"

#ifdef PAKLOADER_PakDownloader_generated_h
#error "PakDownloader.generated.h already included, missing '#pragma once' in PakDownloader.h"
#endif
#define PAKLOADER_PakDownloader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncPakDownloader;

// ********** Begin Delegate FDownloadPakDelegate **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_12_DELEGATE \
PAKLOADER_API void FDownloadPakDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadPakDelegate, int32 HttpResponseCode, int64 ContentLength, const FString& SavePath, int64 BytesReceived);


// ********** End Delegate FDownloadPakDelegate ****************************************************

// ********** Begin Class UAsyncPakDownloader ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDownloadPak);


struct Z_Construct_UClass_UAsyncPakDownloader_Statics;
PAKLOADER_API UClass* Z_Construct_UClass_UAsyncPakDownloader_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncPakDownloader(); \
	friend struct ::Z_Construct_UClass_UAsyncPakDownloader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAKLOADER_API UClass* ::Z_Construct_UClass_UAsyncPakDownloader_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncPakDownloader, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), Z_Construct_UClass_UAsyncPakDownloader_NoRegister) \
	DECLARE_SERIALIZER(UAsyncPakDownloader)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncPakDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncPakDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncPakDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPakDownloader); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncPakDownloader(UAsyncPakDownloader&&) = delete; \
	UAsyncPakDownloader(const UAsyncPakDownloader&) = delete; \
	NO_API virtual ~UAsyncPakDownloader();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncPakDownloader;

// ********** End Class UAsyncPakDownloader ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PakLoader_Source_PakLoader_Public_PakDownloader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
