// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRLipSyncPlaybackActorComponent.h"

#ifdef OVRLIPSYNC_OVRLipSyncPlaybackActorComponent_generated_h
#error "OVRLipSyncPlaybackActorComponent.generated.h already included, missing '#pragma once' in OVRLipSyncPlaybackActorComponent.h"
#endif
#define OVRLIPSYNC_OVRLipSyncPlaybackActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UOVRLipSyncFrameSequence;

// ********** Begin Class UOVRLipSyncPlaybackActorComponent ****************************************
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlaybackSequence); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics;
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncPlaybackActorComponent(); \
	friend struct ::Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVRLIPSYNC_API UClass* ::Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOVRLipSyncPlaybackActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOVRLipSyncPlaybackActorComponent)


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncPlaybackActorComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOVRLipSyncPlaybackActorComponent(UOVRLipSyncPlaybackActorComponent&&) = delete; \
	UOVRLipSyncPlaybackActorComponent(const UOVRLipSyncPlaybackActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncPlaybackActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncPlaybackActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncPlaybackActorComponent) \
	NO_API virtual ~UOVRLipSyncPlaybackActorComponent();


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_32_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOVRLipSyncPlaybackActorComponent;

// ********** End Class UOVRLipSyncPlaybackActorComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
