// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGPointData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGPointData;
struct FPCGPoint;
#ifdef PCG_PCGPointData_generated_h
#error "PCGPointData.generated.h already included, missing '#pragma once' in PCGPointData.h"
#endif
#define PCG_PCGPointData_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyPointsFrom); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetPoints);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyPointsFrom); \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetPoints);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointData(); \
	friend struct Z_Construct_UClass_UPCGPointData_Statics; \
public: \
	DECLARE_CLASS(UPCGPointData, UPCGSpatialData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPointData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUPCGPointData(); \
	friend struct Z_Construct_UClass_UPCGPointData_Statics; \
public: \
	DECLARE_CLASS(UPCGPointData, UPCGSpatialData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPointData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPointData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPointData(UPCGPointData&&); \
	NO_API UPCGPointData(const UPCGPointData&); \
public: \
	NO_API virtual ~UPCGPointData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPointData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPointData(UPCGPointData&&); \
	NO_API UPCGPointData(const UPCGPointData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointData) \
	NO_API virtual ~UPCGPointData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_62_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGPointData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGPointData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
