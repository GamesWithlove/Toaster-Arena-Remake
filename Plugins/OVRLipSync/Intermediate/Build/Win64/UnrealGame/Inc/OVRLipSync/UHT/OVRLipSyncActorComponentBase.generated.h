// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OVRLipSyncActorComponentBase.h"

#ifdef OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h
#error "OVRLipSyncActorComponentBase.generated.h already included, missing '#pragma once' in OVRLipSyncActorComponentBase.h"
#endif
#define OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;

// ********** Begin Delegate FOVRLipSyncVisemesDataReadyDelegate ***********************************
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_31_DELEGATE \
OVRLIPSYNC_API void FOVRLipSyncVisemesDataReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OVRLipSyncVisemesDataReadyDelegate);


// ********** End Delegate FOVRLipSyncVisemesDataReadyDelegate *************************************

// ********** Begin Class UOVRLipSyncActorComponentBase ********************************************
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAssignVisemesToMorphTargets); \
	DECLARE_FUNCTION(execGetLaughterScore); \
	DECLARE_FUNCTION(execGetVisemeNames); \
	DECLARE_FUNCTION(execGetVisemes);


struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics;
OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponentBase(); \
	friend struct ::Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OVRLIPSYNC_API UClass* ::Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UOVRLipSyncActorComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OVRLipSync"), Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponentBase)


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOVRLipSyncActorComponentBase(UOVRLipSyncActorComponentBase&&) = delete; \
	UOVRLipSyncActorComponentBase(const UOVRLipSyncActorComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponentBase) \
	NO_API virtual ~UOVRLipSyncActorComponentBase();


#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_33_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOVRLipSyncActorComponentBase;

// ********** End Class UOVRLipSyncActorComponentBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
