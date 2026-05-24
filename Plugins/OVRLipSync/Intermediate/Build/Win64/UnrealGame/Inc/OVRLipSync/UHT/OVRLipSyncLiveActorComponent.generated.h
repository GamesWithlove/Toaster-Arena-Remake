// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRLipSyncLiveActorComponent.h"

#ifdef OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h
#error "OVRLipSyncLiveActorComponent.generated.h already included, missing '#pragma once' in OVRLipSyncLiveActorComponent.h"
#endif
#define OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOVRLipSyncActorComponent ************************************************
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVoiceCaptureTimer); \
	DECLARE_FUNCTION(execFeedAudio); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPermissionCallback); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics;
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponent(); \
	friend struct ::Z_Construct_UClass_UOVRLipSyncActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVRLIPSYNC_API UClass* ::Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOVRLipSyncActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponent)


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOVRLipSyncActorComponent(UOVRLipSyncActorComponent&&) = delete; \
	UOVRLipSyncActorComponent(const UOVRLipSyncActorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponent) \
	NO_API virtual ~UOVRLipSyncActorComponent();


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_41_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOVRLipSyncActorComponent;

// ********** End Class UOVRLipSyncActorComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h

// ********** Begin Enum OVRLipSyncProviderKind ****************************************************
#define FOREACH_ENUM_OVRLIPSYNCPROVIDERKIND(op) \
	op(OVRLipSyncProviderKind::Original) \
	op(OVRLipSyncProviderKind::Enhanced) \
	op(OVRLipSyncProviderKind::EnhancedWithLaughter) 

enum class OVRLipSyncProviderKind : uint8;
template<> struct TIsUEnumClass<OVRLipSyncProviderKind> { enum { Value = true }; };
template<> OVRLIPSYNC_NON_ATTRIBUTED_API UEnum* StaticEnum<OVRLipSyncProviderKind>();
// ********** End Enum OVRLipSyncProviderKind ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
