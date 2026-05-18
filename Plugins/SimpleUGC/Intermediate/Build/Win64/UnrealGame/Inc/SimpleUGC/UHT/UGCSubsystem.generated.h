// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGCSubsystem.h"

#ifdef SIMPLEUGC_UGCSubsystem_generated_h
#error "UGCSubsystem.generated.h already included, missing '#pragma once' in UGCSubsystem.h"
#endif
#define SIMPLEUGC_UGCSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUGCRegistry;

// ********** Begin Class UUGCSubsystem ************************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUgcRegistry); \
	DECLARE_FUNCTION(execGetUgcRegistry);


struct Z_Construct_UClass_UUGCSubsystem_Statics;
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCSubsystem_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCSubsystem(); \
	friend struct ::Z_Construct_UClass_UUGCSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEUGC_API UClass* ::Z_Construct_UClass_UUGCSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGCSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), Z_Construct_UClass_UUGCSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UUGCSubsystem)


#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGCSubsystem(UUGCSubsystem&&) = delete; \
	UUGCSubsystem(const UUGCSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUGCSubsystem) \
	NO_API virtual ~UUGCSubsystem();


#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_9_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGCSubsystem;

// ********** End Class UUGCSubsystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
