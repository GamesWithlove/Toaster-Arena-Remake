// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModifyReplayObject.h"

#ifdef REPLAYSYSTEM_ModifyReplayObject_generated_h
#error "ModifyReplayObject.generated.h already included, missing '#pragma once' in ModifyReplayObject.h"
#endif
#define REPLAYSYSTEM_ModifyReplayObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModifyReplayObject ******************************************************
struct Z_Construct_UClass_UModifyReplayObject_Statics;
REPLAYSYSTEM_API UClass* Z_Construct_UClass_UModifyReplayObject_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifyReplayObject(); \
	friend struct ::Z_Construct_UClass_UModifyReplayObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLAYSYSTEM_API UClass* ::Z_Construct_UClass_UModifyReplayObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UModifyReplayObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReplaySystem"), Z_Construct_UClass_UModifyReplayObject_NoRegister) \
	DECLARE_SERIALIZER(UModifyReplayObject)


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifyReplayObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModifyReplayObject(UModifyReplayObject&&) = delete; \
	UModifyReplayObject(const UModifyReplayObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifyReplayObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifyReplayObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifyReplayObject) \
	NO_API virtual ~UModifyReplayObject();


#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_16_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_20_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModifyReplayObject;

// ********** End Class UModifyReplayObject ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_ReplaySystem_Source_ReplaySystem_Public_ModifyReplayObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
