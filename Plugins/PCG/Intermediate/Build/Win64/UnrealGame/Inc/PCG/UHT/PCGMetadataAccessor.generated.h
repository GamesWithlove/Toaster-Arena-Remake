// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/PCGMetadataAccessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPCGMetadata;
struct FPCGPoint;
#ifdef PCG_PCGMetadataAccessor_generated_h
#error "PCGMetadataAccessor.generated.h already included, missing '#pragma once' in PCGMetadataAccessor.h"
#endif
#define PCG_PCGMetadataAccessor_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasAttributeSet); \
	DECLARE_FUNCTION(execSetBoolAttribute); \
	DECLARE_FUNCTION(execGetBoolAttribute); \
	DECLARE_FUNCTION(execSetStringAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execSetTransformAttribute); \
	DECLARE_FUNCTION(execGetTransformAttribute); \
	DECLARE_FUNCTION(execSetQuatAttribute); \
	DECLARE_FUNCTION(execGetQuatAttribute); \
	DECLARE_FUNCTION(execSetRotatorAttribute); \
	DECLARE_FUNCTION(execGetRotatorAttribute); \
	DECLARE_FUNCTION(execSetVector2Attribute); \
	DECLARE_FUNCTION(execGetVector2Attribute); \
	DECLARE_FUNCTION(execSetVector4Attribute); \
	DECLARE_FUNCTION(execGetVector4Attribute); \
	DECLARE_FUNCTION(execSetVectorAttribute); \
	DECLARE_FUNCTION(execGetVectorAttribute); \
	DECLARE_FUNCTION(execSetDoubleAttribute); \
	DECLARE_FUNCTION(execGetDoubleAttribute); \
	DECLARE_FUNCTION(execSetFloatAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execSetInteger64Attribute); \
	DECLARE_FUNCTION(execGetInteger64Attribute); \
	DECLARE_FUNCTION(execSetInteger32Attribute); \
	DECLARE_FUNCTION(execGetInteger32Attribute); \
	DECLARE_FUNCTION(execInitializeMetadata); \
	DECLARE_FUNCTION(execCopyPoint); \
	DECLARE_FUNCTION(execHasAttributeSetByMetadataKey); \
	DECLARE_FUNCTION(execSetAttributeFromPropertyByMetadataKey); \
	DECLARE_FUNCTION(execSetBoolAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetBoolAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetStringAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetStringAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetTransformAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetTransformAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetQuatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetQuatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetRotatorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetRotatorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVector2AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVector2AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVector4AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVector4AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVectorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVectorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetDoubleAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetDoubleAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetFloatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetFloatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetInteger64AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetInteger64AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetInteger32AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetInteger32AttributeByMetadataKey);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasAttributeSet); \
	DECLARE_FUNCTION(execSetBoolAttribute); \
	DECLARE_FUNCTION(execGetBoolAttribute); \
	DECLARE_FUNCTION(execSetStringAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execSetTransformAttribute); \
	DECLARE_FUNCTION(execGetTransformAttribute); \
	DECLARE_FUNCTION(execSetQuatAttribute); \
	DECLARE_FUNCTION(execGetQuatAttribute); \
	DECLARE_FUNCTION(execSetRotatorAttribute); \
	DECLARE_FUNCTION(execGetRotatorAttribute); \
	DECLARE_FUNCTION(execSetVector2Attribute); \
	DECLARE_FUNCTION(execGetVector2Attribute); \
	DECLARE_FUNCTION(execSetVector4Attribute); \
	DECLARE_FUNCTION(execGetVector4Attribute); \
	DECLARE_FUNCTION(execSetVectorAttribute); \
	DECLARE_FUNCTION(execGetVectorAttribute); \
	DECLARE_FUNCTION(execSetDoubleAttribute); \
	DECLARE_FUNCTION(execGetDoubleAttribute); \
	DECLARE_FUNCTION(execSetFloatAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execSetInteger64Attribute); \
	DECLARE_FUNCTION(execGetInteger64Attribute); \
	DECLARE_FUNCTION(execSetInteger32Attribute); \
	DECLARE_FUNCTION(execGetInteger32Attribute); \
	DECLARE_FUNCTION(execInitializeMetadata); \
	DECLARE_FUNCTION(execCopyPoint); \
	DECLARE_FUNCTION(execHasAttributeSetByMetadataKey); \
	DECLARE_FUNCTION(execSetAttributeFromPropertyByMetadataKey); \
	DECLARE_FUNCTION(execSetBoolAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetBoolAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetStringAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetStringAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetTransformAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetTransformAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetQuatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetQuatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetRotatorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetRotatorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVector2AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVector2AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVector4AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVector4AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetVectorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetVectorAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetDoubleAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetDoubleAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetFloatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetFloatAttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetInteger64AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetInteger64AttributeByMetadataKey); \
	DECLARE_FUNCTION(execSetInteger32AttributeByMetadataKey); \
	DECLARE_FUNCTION(execGetInteger32AttributeByMetadataKey);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMetadataAccessorHelpers(); \
	friend struct Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadataAccessorHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadataAccessorHelpers)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPCGMetadataAccessorHelpers(); \
	friend struct Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics; \
public: \
	DECLARE_CLASS(UPCGMetadataAccessorHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMetadataAccessorHelpers)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataAccessorHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataAccessorHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataAccessorHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataAccessorHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadataAccessorHelpers(UPCGMetadataAccessorHelpers&&); \
	NO_API UPCGMetadataAccessorHelpers(const UPCGMetadataAccessorHelpers&); \
public: \
	NO_API virtual ~UPCGMetadataAccessorHelpers();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMetadataAccessorHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMetadataAccessorHelpers(UPCGMetadataAccessorHelpers&&); \
	NO_API UPCGMetadataAccessorHelpers(const UPCGMetadataAccessorHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMetadataAccessorHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMetadataAccessorHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMetadataAccessorHelpers) \
	NO_API virtual ~UPCGMetadataAccessorHelpers();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_14_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMetadataAccessorHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_PCGMetadataAccessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
