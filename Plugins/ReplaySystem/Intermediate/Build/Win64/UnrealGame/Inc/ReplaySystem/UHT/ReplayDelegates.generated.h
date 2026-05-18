// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayDelegates.h"

#ifdef REPLAYSYSTEM_ReplayDelegates_generated_h
#error "ReplayDelegates.generated.h already included, missing '#pragma once' in ReplayDelegates.h"
#endif
#define REPLAYSYSTEM_ReplayDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReplayObject;
struct FReplayEvent;

// ********** Begin Delegate FOnRequestEventsComplete **********************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_12_DELEGATE \
REPLAYSYSTEM_API void FOnRequestEventsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEventsComplete, TArray<FReplayEvent> const& Events);


// ********** End Delegate FOnRequestEventsComplete ************************************************

// ********** Begin Delegate FOnRenameReplayComplete ***********************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_15_DELEGATE \
REPLAYSYSTEM_API void FOnRenameReplayComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRenameReplayComplete, bool bWasSuccessful);


// ********** End Delegate FOnRenameReplayComplete *************************************************

// ********** Begin Delegate FOnGetReplaysComplete *************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_18_DELEGATE \
REPLAYSYSTEM_API void FOnGetReplaysComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetReplaysComplete, TArray<UReplayObject*> const& Replays);


// ********** End Delegate FOnGetReplaysComplete ***************************************************

// ********** Begin Delegate FOnDeleteComplete *****************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_21_DELEGATE \
REPLAYSYSTEM_API void FOnDeleteComplete_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteComplete, bool bWasSuccessful);


// ********** End Delegate FOnDeleteComplete *******************************************************

// ********** Begin Delegate FOnGotoTimeComplete ***************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_24_DELEGATE \
REPLAYSYSTEM_API void FOnGotoTimeComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGotoTimeComplete, bool bWasSuccessful);


// ********** End Delegate FOnGotoTimeComplete *****************************************************

// ********** Begin Delegate FOnReplayComplete *****************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h_27_DELEGATE \
REPLAYSYSTEM_API void FOnReplayComplete_DelegateWrapper(const FMulticastScriptDelegate& OnReplayComplete);


// ********** End Delegate FOnReplayComplete *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayDelegates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
