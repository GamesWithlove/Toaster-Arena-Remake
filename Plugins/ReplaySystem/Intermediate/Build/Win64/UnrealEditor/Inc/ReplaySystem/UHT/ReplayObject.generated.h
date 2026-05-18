// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplayObject.h"

#ifdef REPLAYSYSTEM_ReplayObject_generated_h
#error "ReplayObject.generated.h already included, missing '#pragma once' in ReplayObject.h"
#endif
#define REPLAYSYSTEM_ReplayObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplayObject ************************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestEvents);


struct Z_Construct_UClass_UReplayObject_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UReplayObject_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplayObject(); \
	friend struct ::Z_Construct_UClass_UReplayObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_UReplayObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplayObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_UReplayObject_NoRegister) \
	DECLARE_SERIALIZER(UReplayObject)


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplayObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplayObject(UReplayObject&&) = delete; \
	UReplayObject(const UReplayObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplayObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplayObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplayObject) \
	NO_API virtual ~UReplayObject();


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_19_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplayObject;

// ********** End Class UReplayObject **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_ReplayObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
