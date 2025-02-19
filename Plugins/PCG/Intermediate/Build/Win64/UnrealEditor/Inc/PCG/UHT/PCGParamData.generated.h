// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGParamData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGParamData;
#ifdef PCG_PCGParamData_generated_h
#error "PCGParamData.generated.h already included, missing '#pragma once' in PCGParamData.h"
#endif
#define PCG_PCGParamData_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterParamsByKey); \
	DECLARE_FUNCTION(execFilterParamsByName); \
	DECLARE_FUNCTION(execFindOrAddMetadataKey); \
	DECLARE_FUNCTION(execFindMetadataKey); \
	DECLARE_FUNCTION(execMutableMetadata); \
	DECLARE_FUNCTION(execConstMetadata);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterParamsByKey); \
	DECLARE_FUNCTION(execFilterParamsByName); \
	DECLARE_FUNCTION(execFindOrAddMetadataKey); \
	DECLARE_FUNCTION(execFindMetadataKey); \
	DECLARE_FUNCTION(execMutableMetadata); \
	DECLARE_FUNCTION(execConstMetadata);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGParamData(); \
	friend struct Z_Construct_UClass_UPCGParamData_Statics; \
public: \
	DECLARE_CLASS(UPCGParamData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGParamData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPCGParamData(); \
	friend struct Z_Construct_UClass_UPCGParamData_Statics; \
public: \
	DECLARE_CLASS(UPCGParamData, UPCGData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGParamData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGParamData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGParamData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGParamData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGParamData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGParamData(UPCGParamData&&); \
	NO_API UPCGParamData(const UPCGParamData&); \
public: \
	NO_API virtual ~UPCGParamData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGParamData(UPCGParamData&&); \
	NO_API UPCGParamData(const UPCGParamData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGParamData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGParamData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGParamData) \
	NO_API virtual ~UPCGParamData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_13_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGParamData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGParamData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
