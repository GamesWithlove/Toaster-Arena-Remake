// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadata.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
enum class EPCGMetadataFilterMode : uint8;
enum class EPCGMetadataOp : uint8;
enum class EPCGMetadataTypes : uint8;
struct FPCGPoint;
#ifdef PCG_PCGMetadata_generated_h
#error "PCGMetadata.generated.h already included, missing '#pragma once' in PCGMetadata.h"
#endif
#define PCG_PCGMetadata_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAccumulatePointWeightedAttributes); \
	DECLARE_FUNCTION(execResetPointWeightedAttributes); \
	DECLARE_FUNCTION(execSetPointAttributes); \
	DECLARE_FUNCTION(execMergePointAttributes); \
	DECLARE_FUNCTION(execSetAttributesByKey); \
	DECLARE_FUNCTION(execAccumulateWeightedAttributesByKey); \
	DECLARE_FUNCTION(execResetWeightedAttributesByKey); \
	DECLARE_FUNCTION(execMergeAttributesByKey); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execClearAttribute); \
	DECLARE_FUNCTION(execRenameAttribute); \
	DECLARE_FUNCTION(execCopyExistingAttribute); \
	DECLARE_FUNCTION(execDeleteAttribute); \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execHasCommonAttributes); \
	DECLARE_FUNCTION(execHasAttribute); \
	DECLARE_FUNCTION(execCreateBoolAttribute); \
	DECLARE_FUNCTION(execCreateStringAttribute); \
	DECLARE_FUNCTION(execCreateTransformAttribute); \
	DECLARE_FUNCTION(execCreateQuatAttribute); \
	DECLARE_FUNCTION(execCreateRotatorAttribute); \
	DECLARE_FUNCTION(execCreateVector2Attribute); \
	DECLARE_FUNCTION(execCreateVector4Attribute); \
	DECLARE_FUNCTION(execCreateVectorAttribute); \
	DECLARE_FUNCTION(execCreateDoubleAttribute); \
	DECLARE_FUNCTION(execCreateFloatAttribute); \
	DECLARE_FUNCTION(execCreateInteger64Attribute); \
	DECLARE_FUNCTION(execCreateInteger32Attribute); \
	DECLARE_FUNCTION(execCopyAttribute); \
	DECLARE_FUNCTION(execCopyAttributes); \
	DECLARE_FUNCTION(execAddAttribute); \
	DECLARE_FUNCTION(execAddAttributesFiltered); \
	DECLARE_FUNCTION(execAddAttributes); \
	DECLARE_FUNCTION(execInitializeAsCopyWithAttributeFilter); \
	DECLARE_FUNCTION(execInitializeAsCopy); \
	DECLARE_FUNCTION(execInitializeWithAttributeFilter); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAccumulatePointWeightedAttributes); \
	DECLARE_FUNCTION(execResetPointWeightedAttributes); \
	DECLARE_FUNCTION(execSetPointAttributes); \
	DECLARE_FUNCTION(execMergePointAttributes); \
	DECLARE_FUNCTION(execSetAttributesByKey); \
	DECLARE_FUNCTION(execAccumulateWeightedAttributesByKey); \
	DECLARE_FUNCTION(execResetWeightedAttributesByKey); \
	DECLARE_FUNCTION(execMergeAttributesByKey); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execClearAttribute); \
	DECLARE_FUNCTION(execRenameAttribute); \
	DECLARE_FUNCTION(execCopyExistingAttribute); \
	DECLARE_FUNCTION(execDeleteAttribute); \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execHasCommonAttributes); \
	DECLARE_FUNCTION(execHasAttribute); \
	DECLARE_FUNCTION(execCreateBoolAttribute); \
	DECLARE_FUNCTION(execCreateStringAttribute); \
	DECLARE_FUNCTION(execCreateTransformAttribute); \
	DECLARE_FUNCTION(execCreateQuatAttribute); \
	DECLARE_FUNCTION(execCreateRotatorAttribute); \
	DECLARE_FUNCTION(execCreateVector2Attribute); \
	DECLARE_FUNCTION(execCreateVector4Attribute); \
	DECLARE_FUNCTION(execCreateVectorAttribute); \
	DECLARE_FUNCTION(execCreateDoubleAttribute); \
	DECLARE_FUNCTION(execCreateFloatAttribute); \
	DECLARE_FUNCTION(execCreateInteger64Attribute); \
	DECLARE_FUNCTION(execCreateInteger32Attribute); \
	DECLARE_FUNCTION(execCopyAttribute); \
	DECLARE_FUNCTION(execCopyAttributes); \
	DECLARE_FUNCTION(execAddAttribute); \
	DECLARE_FUNCTION(execAddAttributesFiltered); \
	DECLARE_FUNCTION(execAddAttributes); \
	DECLARE_FUNCTION(execInitializeAsCopyWithAttributeFilter); \
	DECLARE_FUNCTION(execInitializeAsCopy); \
	DECLARE_FUNCTION(execInitializeWithAttributeFilter); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGMetadata, NO_API)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadata(); \
	friend struct Z_Construct_UClass_UPCGMetadata_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadata) \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ARCHIVESERIALIZER


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPCGMetadata(); \
	friend struct Z_Construct_UClass_UPCGMetadata_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadata) \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ARCHIVESERIALIZER


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadata) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadata); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadata(UPCGMetadata&&); \
	NO_API UPCGMetadata(const UPCGMetadata&); \
public: \
	NO_API virtual ~UPCGMetadata();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadata(UPCGMetadata&&); \
	NO_API UPCGMetadata(const UPCGMetadata&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadata) \
	NO_API virtual ~UPCGMetadata();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMetadata>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadata_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
