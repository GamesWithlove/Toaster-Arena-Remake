// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenameReplayObject.h"

#ifdef REPLAYSYSTEM_RenameReplayObject_generated_h
#error "RenameReplayObject.generated.h already included, missing '#pragma once' in RenameReplayObject.h"
#endif
#define REPLAYSYSTEM_RenameReplayObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenameReplayObject ******************************************************
struct Z_Construct_UClass_URenameReplayObject_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_URenameReplayObject_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenameReplayObject(); \
	friend struct ::Z_Construct_UClass_URenameReplayObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_URenameReplayObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URenameReplayObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_URenameReplayObject_NoRegister) \
	DECLARE_SERIALIZER(URenameReplayObject)


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenameReplayObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenameReplayObject(URenameReplayObject&&) = delete; \
	URenameReplayObject(const URenameReplayObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenameReplayObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenameReplayObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenameReplayObject) \
	NO_API virtual ~URenameReplayObject();


#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_16_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenameReplayObject;

// ********** End Class URenameReplayObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ReplaySystem_Source_ReplaySystem_Public_RenameReplayObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
