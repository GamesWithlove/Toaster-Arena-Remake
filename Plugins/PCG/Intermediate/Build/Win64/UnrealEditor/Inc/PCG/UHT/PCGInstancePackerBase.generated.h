// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstancePackers/PCGInstancePackerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGMeshInstanceList;
struct FPCGPackedCustomData;
#ifdef PCG_PCGInstancePackerBase_generated_h
#error "PCGInstancePackerBase.generated.h already included, missing '#pragma once' in PCGInstancePackerBase.h"
#endif
#define PCG_PCGInstancePackerBase_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPackedCustomData>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_RPC_WRAPPERS \
	virtual void PackInstances_Implementation(FPCGContext& Context, const UPCGSpatialData* InSpatialData, FPCGMeshInstanceList const& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const; \
 \
	DECLARE_FUNCTION(execPackCustomDataFromAttributes); \
	DECLARE_FUNCTION(execAddTypeToPacking); \
	DECLARE_FUNCTION(execPackInstances);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPackCustomDataFromAttributes); \
	DECLARE_FUNCTION(execAddTypeToPacking); \
	DECLARE_FUNCTION(execPackInstances);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstancePackerBase(); \
	friend struct Z_Construct_UClass_UPCGInstancePackerBase_Statics; \
public: \
	DECLARE_CLASS(UPCGInstancePackerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGInstancePackerBase)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPCGInstancePackerBase(); \
	friend struct Z_Construct_UClass_UPCGInstancePackerBase_Statics; \
public: \
	DECLARE_CLASS(UPCGInstancePackerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGInstancePackerBase)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGInstancePackerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstancePackerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInstancePackerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstancePackerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGInstancePackerBase(UPCGInstancePackerBase&&); \
	NO_API UPCGInstancePackerBase(const UPCGInstancePackerBase&); \
public: \
	NO_API virtual ~UPCGInstancePackerBase();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGInstancePackerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGInstancePackerBase(UPCGInstancePackerBase&&); \
	NO_API UPCGInstancePackerBase(const UPCGInstancePackerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInstancePackerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstancePackerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstancePackerBase) \
	NO_API virtual ~UPCGInstancePackerBase();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_27_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGInstancePackerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_InstancePackers_PCGInstancePackerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
