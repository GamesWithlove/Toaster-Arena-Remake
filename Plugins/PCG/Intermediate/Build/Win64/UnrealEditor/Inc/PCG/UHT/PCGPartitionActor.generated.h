// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/PCGPartitionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGComponent;
#ifdef PCG_PCGPartitionActor_generated_h
#error "PCGPartitionActor.generated.h already included, missing '#pragma once' in PCGPartitionActor.h"
#endif
#define PCG_PCGPartitionActor_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetLocalComponent);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetLocalComponent);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGPartitionActor(); \
	friend struct Z_Construct_UClass_APCGPartitionActor_Statics; \
public: \
	DECLARE_CLASS(APCGPartitionActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), PCG_API) \
	DECLARE_SERIALIZER(APCGPartitionActor)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAPCGPartitionActor(); \
	friend struct Z_Construct_UClass_APCGPartitionActor_Statics; \
public: \
	DECLARE_CLASS(APCGPartitionActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), PCG_API) \
	DECLARE_SERIALIZER(APCGPartitionActor)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API APCGPartitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGPartitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, APCGPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGPartitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PCG_API APCGPartitionActor(APCGPartitionActor&&); \
	PCG_API APCGPartitionActor(const APCGPartitionActor&); \
public: \
	PCG_API virtual ~APCGPartitionActor();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PCG_API APCGPartitionActor(APCGPartitionActor&&); \
	PCG_API APCGPartitionActor(const APCGPartitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, APCGPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGPartitionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGPartitionActor) \
	PCG_API virtual ~APCGPartitionActor();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_19_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class APCGPartitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Private_Grid_PCGPartitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
