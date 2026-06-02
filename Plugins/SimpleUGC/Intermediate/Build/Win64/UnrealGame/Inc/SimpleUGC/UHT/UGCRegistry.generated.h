// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGCRegistry.h"

#ifdef SIMPLEUGC_UGCRegistry_generated_h
#error "UGCRegistry.generated.h already included, missing '#pragma once' in UGCRegistry.h"
#endif
#define SIMPLEUGC_UGCRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
struct FUGCPackage;

// ********** Begin ScriptStruct FUGCPackage *******************************************************
struct Z_Construct_UScriptStruct_FUGCPackage_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUGCPackage_Statics; \
	SIMPLEUGC_API static class UScriptStruct* StaticStruct();


struct FUGCPackage;
// ********** End ScriptStruct FUGCPackage *********************************************************

// ********** Begin Class UUGCRegistry *************************************************************
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execFindUGCPackages);


struct Z_Construct_UClass_UUGCRegistry_Statics;
SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct ::Z_Construct_UClass_UUGCRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEUGC_API UClass* ::Z_Construct_UClass_UUGCRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), Z_Construct_UClass_UUGCRegistry_NoRegister) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUGCRegistry(UUGCRegistry&&) = delete; \
	UUGCRegistry(const UUGCRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry) \
	NO_API virtual ~UUGCRegistry();


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_39_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUGCRegistry;

// ********** End Class UUGCRegistry ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
