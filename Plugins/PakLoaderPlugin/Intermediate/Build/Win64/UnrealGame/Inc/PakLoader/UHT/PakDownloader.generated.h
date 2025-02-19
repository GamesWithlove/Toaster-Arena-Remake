// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PakDownloader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncPakDownloader;
#ifdef PAKLOADER_PakDownloader_generated_h
#error "PakDownloader.generated.h already included, missing '#pragma once' in PakDownloader.h"
#endif
#define PAKLOADER_PakDownloader_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_12_DELEGATE \
PAKLOADER_API void FDownloadPakDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadPakDelegate, int32 HttpResponseCode, int32 ContentLength, const FString& SavePath, int32 BytesReceived);


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadPak);


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadPak);


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncPakDownloader(); \
	friend struct Z_Construct_UClass_UAsyncPakDownloader_Statics; \
public: \
	DECLARE_CLASS(UAsyncPakDownloader, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), NO_API) \
	DECLARE_SERIALIZER(UAsyncPakDownloader)


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncPakDownloader(); \
	friend struct Z_Construct_UClass_UAsyncPakDownloader_Statics; \
public: \
	DECLARE_CLASS(UAsyncPakDownloader, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PakLoader"), NO_API) \
	DECLARE_SERIALIZER(UAsyncPakDownloader)


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncPakDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncPakDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncPakDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPakDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncPakDownloader(UAsyncPakDownloader&&); \
	NO_API UAsyncPakDownloader(const UAsyncPakDownloader&); \
public: \
	NO_API virtual ~UAsyncPakDownloader();


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncPakDownloader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncPakDownloader(UAsyncPakDownloader&&); \
	NO_API UAsyncPakDownloader(const UAsyncPakDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncPakDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncPakDownloader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncPakDownloader) \
	NO_API virtual ~UAsyncPakDownloader();


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncPakDownloader."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAKLOADER_API UClass* StaticClass<class UAsyncPakDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PakLoaderPlugin_Source_PakLoader_Public_PakDownloader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
