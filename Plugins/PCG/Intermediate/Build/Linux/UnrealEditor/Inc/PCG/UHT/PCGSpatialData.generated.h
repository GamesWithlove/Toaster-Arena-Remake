// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGSpatialData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGDifferenceData;
class UPCGIntersectionData;
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
class UPCGUnionData;
struct FPCGContext;
struct FPCGPoint;
struct FPCGProjectionParams;
#ifdef PCG_PCGSpatialData_generated_h
#error "PCGSpatialData.generated.h already included, missing '#pragma once' in PCGSpatialData.h"
#endif
#define PCG_PCGSpatialData_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeFromData); \
	DECLARE_FUNCTION(execCreateEmptyMetadata); \
	DECLARE_FUNCTION(execMutableMetadata); \
	DECLARE_FUNCTION(execConstMetadata); \
	DECLARE_FUNCTION(execSubtract); \
	DECLARE_FUNCTION(execUnionWith); \
	DECLARE_FUNCTION(execProjectOn); \
	DECLARE_FUNCTION(execIntersectWith); \
	DECLARE_FUNCTION(execHasNonTrivialTransform); \
	DECLARE_FUNCTION(execProjectPoint); \
	DECLARE_FUNCTION(execSamplePoint); \
	DECLARE_FUNCTION(execToPointDataWithContext); \
	DECLARE_FUNCTION(execToPointData); \
	DECLARE_FUNCTION(execGetDensityAtPosition); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetStrictBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetDimension);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeFromData); \
	DECLARE_FUNCTION(execCreateEmptyMetadata); \
	DECLARE_FUNCTION(execMutableMetadata); \
	DECLARE_FUNCTION(execConstMetadata); \
	DECLARE_FUNCTION(execSubtract); \
	DECLARE_FUNCTION(execUnionWith); \
	DECLARE_FUNCTION(execProjectOn); \
	DECLARE_FUNCTION(execIntersectWith); \
	DECLARE_FUNCTION(execHasNonTrivialTransform); \
	DECLARE_FUNCTION(execProjectPoint); \
	DECLARE_FUNCTION(execSamplePoint); \
	DECLARE_FUNCTION(execToPointDataWithContext); \
	DECLARE_FUNCTION(execToPointData); \
	DECLARE_FUNCTION(execGetDensityAtPosition); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetStrictBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetDimension);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialData(); \
	friend struct Z_Construct_UClass_UPCGSpatialData_Statics; \
public: \
	DECLARE_CLASS(UPCGSpatialData, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSpatialData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPCGSpatialData(); \
	friend struct Z_Construct_UClass_UPCGSpatialData_Statics; \
public: \
	DECLARE_CLASS(UPCGSpatialData, UPCGData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSpatialData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSpatialData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSpatialData(UPCGSpatialData&&); \
	NO_API UPCGSpatialData(const UPCGSpatialData&); \
public: \
	NO_API virtual ~UPCGSpatialData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSpatialData(UPCGSpatialData&&); \
	NO_API UPCGSpatialData(const UPCGSpatialData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialData) \
	NO_API virtual ~UPCGSpatialData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_29_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSpatialData>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpatialDataWithPointCache(); \
	friend struct Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics; \
public: \
	DECLARE_CLASS(UPCGSpatialDataWithPointCache, UPCGSpatialData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSpatialDataWithPointCache)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUPCGSpatialDataWithPointCache(); \
	friend struct Z_Construct_UClass_UPCGSpatialDataWithPointCache_Statics; \
public: \
	DECLARE_CLASS(UPCGSpatialDataWithPointCache, UPCGSpatialData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGSpatialDataWithPointCache)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSpatialDataWithPointCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialDataWithPointCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialDataWithPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialDataWithPointCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSpatialDataWithPointCache(UPCGSpatialDataWithPointCache&&); \
	NO_API UPCGSpatialDataWithPointCache(const UPCGSpatialDataWithPointCache&); \
public: \
	NO_API virtual ~UPCGSpatialDataWithPointCache();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGSpatialDataWithPointCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGSpatialDataWithPointCache(UPCGSpatialDataWithPointCache&&); \
	NO_API UPCGSpatialDataWithPointCache(const UPCGSpatialDataWithPointCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGSpatialDataWithPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpatialDataWithPointCache); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpatialDataWithPointCache) \
	NO_API virtual ~UPCGSpatialDataWithPointCache();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_154_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGSpatialDataWithPointCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGSpatialData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
