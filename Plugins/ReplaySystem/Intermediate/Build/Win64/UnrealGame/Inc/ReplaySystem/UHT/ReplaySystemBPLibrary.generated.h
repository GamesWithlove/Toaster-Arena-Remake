// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplaySystemBPLibrary.h"

#ifdef REPLAYSYSTEM_ReplaySystemBPLibrary_generated_h
#error "ReplaySystemBPLibrary.generated.h already included, missing '#pragma once' in ReplaySystemBPLibrary.h"
#endif
#define REPLAYSYSTEM_ReplaySystemBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDeleteReplayObject;
class UDemoNetDriver;
class UGetSavedReplaysObject;
class UGoToTimeObject;
class UObject;
class URenameReplayObject;
class UReplayDataObject;
class URequestEventsObject;
struct FBlendSettings;

// ********** Begin Class UReplaySystemBPLibrary ***************************************************
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMaxRecordHz); \
	DECLARE_FUNCTION(execSetMaxRecordHz); \
	DECLARE_FUNCTION(execGetDemoDriver); \
	DECLARE_FUNCTION(execStopSpectating); \
	DECLARE_FUNCTION(execSpectateActor); \
	DECLARE_FUNCTION(execMsToSeconds); \
	DECLARE_FUNCTION(execCreateReplayDataObject); \
	DECLARE_FUNCTION(execRequestActiveReplayEvents); \
	DECLARE_FUNCTION(execAddEventToActiveReplay); \
	DECLARE_FUNCTION(execGetActiveReplayName); \
	DECLARE_FUNCTION(execIsReplayPlaybackPaused); \
	DECLARE_FUNCTION(execIsPlayingReplay); \
	DECLARE_FUNCTION(execGetReplayLength); \
	DECLARE_FUNCTION(execGetCurrentReplayTime); \
	DECLARE_FUNCTION(execGetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execGoToSpecificTime); \
	DECLARE_FUNCTION(execRestartReplayPlayback); \
	DECLARE_FUNCTION(execPlayRecordedReplay); \
	DECLARE_FUNCTION(execGetSavedReplays); \
	DECLARE_FUNCTION(execRenameReplayFriendly); \
	DECLARE_FUNCTION(execRenameReplay); \
	DECLARE_FUNCTION(execDeleteReplay); \
	DECLARE_FUNCTION(execIsRecordingReplay); \
	DECLARE_FUNCTION(execStopRecordingReplay); \
	DECLARE_FUNCTION(execRecordReplay); \
	DECLARE_FUNCTION(execGetReplaySavePath); \
	DECLARE_FUNCTION(execSetReplaySavePath);


struct Z_Construct_UClass_UReplaySystemBPLibrary_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplaySystemBPLibrary_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUReplaySystemBPLibrary(); \
	friend struct ::Z_Construct_UClass_UReplaySystemBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_UReplaySystemBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplaySystemBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_UReplaySystemBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UReplaySystemBPLibrary)


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaySystemBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplaySystemBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaySystemBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySystemBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplaySystemBPLibrary(UReplaySystemBPLibrary&&) = delete; \
	UReplaySystemBPLibrary(const UReplaySystemBPLibrary&) = delete; \
	NO_API virtual ~UReplaySystemBPLibrary();


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_38_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplaySystemBPLibrary;

// ********** End Class UReplaySystemBPLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplaySystemBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
