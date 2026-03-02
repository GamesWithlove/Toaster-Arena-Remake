// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGCRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FUGCPackage;
#ifdef SIMPLEUGC_UGCRegistry_generated_h
#error "UGCRegistry.generated.h already included, missing '#pragma once' in UGCRegistry.h"
#endif
#define SIMPLEUGC_UGCRegistry_generated_h

#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCPackage_Statics; \
	SIMPLEUGC_API static class UScriptStruct* StaticStruct();


template<> SIMPLEUGC_API UScriptStruct* StaticStruct<struct FUGCPackage>();

#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execFindUGCPackages);


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execFindUGCPackages);


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public: \
	NO_API virtual ~UUGCRegistry();


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry) \
	NO_API virtual ~UUGCRegistry();


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_39_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEUGC_API UClass* StaticClass<class UUGCRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
