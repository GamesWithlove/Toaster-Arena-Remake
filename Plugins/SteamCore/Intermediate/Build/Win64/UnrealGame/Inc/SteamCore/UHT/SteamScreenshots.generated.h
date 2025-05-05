// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamScreenshots/SteamScreenshots.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamVRScreenshotType : uint8;
struct FPublishedFileID;
struct FScreenshotHandle;
struct FSteamID;
#ifdef STEAMCORE_SteamScreenshots_generated_h
#error "SteamScreenshots.generated.h already included, missing '#pragma once' in SteamScreenshots.h"
#endif
#define STEAMCORE_SteamScreenshots_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteScreenshot); \
	DECLARE_FUNCTION(execTriggerScreenshot); \
	DECLARE_FUNCTION(execTagUser); \
	DECLARE_FUNCTION(execTagPublishedFile); \
	DECLARE_FUNCTION(execSetLocation); \
	DECLARE_FUNCTION(execIsScreenshotsHooked); \
	DECLARE_FUNCTION(execHookScreenshots); \
	DECLARE_FUNCTION(execAddVRScreenshotToLibrary); \
	DECLARE_FUNCTION(execAddScreenshotToLibrary);


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenshots(); \
	friend struct Z_Construct_UClass_UScreenshots_Statics; \
public: \
	DECLARE_CLASS(UScreenshots, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UScreenshots)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScreenshots(); \
	friend struct Z_Construct_UClass_UScreenshots_Statics; \
public: \
	DECLARE_CLASS(UScreenshots, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UScreenshots)


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenshots(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenshots) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshots); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshots(UScreenshots&&); \
	NO_API UScreenshots(const UScreenshots&); \
public: \
	NO_API virtual ~UScreenshots();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenshots(UScreenshots&&); \
	NO_API UScreenshots(const UScreenshots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenshots); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenshots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenshots) \
	NO_API virtual ~UScreenshots();


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UScreenshots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCore_Source_SteamCore_Public_SteamScreenshots_SteamScreenshots_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
