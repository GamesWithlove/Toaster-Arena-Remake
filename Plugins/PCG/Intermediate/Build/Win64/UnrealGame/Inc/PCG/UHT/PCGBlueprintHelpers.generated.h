// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGBlueprintHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UPCGComponent;
class UPCGData;
class UPCGSettings;
struct FPCGContext;
struct FPCGLandscapeLayerWeight;
struct FPCGPoint;
struct FRandomStream;
#ifdef PCG_PCGBlueprintHelpers_generated_h
#error "PCGBlueprintHelpers.generated.h already included, missing '#pragma once' in PCGBlueprintHelpers.h"
#endif
#define PCG_PCGBlueprintHelpers_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTaskId); \
	DECLARE_FUNCTION(execGetInterpolatedPCGLandscapeLayerWeights); \
	DECLARE_FUNCTION(execCreatePCGDataFromActor); \
	DECLARE_FUNCTION(execGetActorLocalBoundsPCG); \
	DECLARE_FUNCTION(execGetActorBoundsPCG); \
	DECLARE_FUNCTION(execGetTransformedBounds); \
	DECLARE_FUNCTION(execGetLocalCenter); \
	DECLARE_FUNCTION(execSetLocalCenter); \
	DECLARE_FUNCTION(execGetExtents); \
	DECLARE_FUNCTION(execSetExtents); \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetComponent); \
	DECLARE_FUNCTION(execGetInputData); \
	DECLARE_FUNCTION(execGetActorData); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execSetSeedFromPosition); \
	DECLARE_FUNCTION(execComputeSeedFromPosition);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTaskId); \
	DECLARE_FUNCTION(execGetInterpolatedPCGLandscapeLayerWeights); \
	DECLARE_FUNCTION(execCreatePCGDataFromActor); \
	DECLARE_FUNCTION(execGetActorLocalBoundsPCG); \
	DECLARE_FUNCTION(execGetActorBoundsPCG); \
	DECLARE_FUNCTION(execGetTransformedBounds); \
	DECLARE_FUNCTION(execGetLocalCenter); \
	DECLARE_FUNCTION(execSetLocalCenter); \
	DECLARE_FUNCTION(execGetExtents); \
	DECLARE_FUNCTION(execSetExtents); \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetComponent); \
	DECLARE_FUNCTION(execGetInputData); \
	DECLARE_FUNCTION(execGetActorData); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execSetSeedFromPosition); \
	DECLARE_FUNCTION(execComputeSeedFromPosition);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintHelpers(); \
	friend struct Z_Construct_UClass_UPCGBlueprintHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintHelpers)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPCGBlueprintHelpers(); \
	friend struct Z_Construct_UClass_UPCGBlueprintHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintHelpers)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintHelpers(UPCGBlueprintHelpers&&); \
	NO_API UPCGBlueprintHelpers(const UPCGBlueprintHelpers&); \
public: \
	NO_API virtual ~UPCGBlueprintHelpers();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintHelpers(UPCGBlueprintHelpers&&); \
	NO_API UPCGBlueprintHelpers(const UPCGBlueprintHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintHelpers) \
	NO_API virtual ~UPCGBlueprintHelpers();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_19_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGBlueprintHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGBlueprintHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
