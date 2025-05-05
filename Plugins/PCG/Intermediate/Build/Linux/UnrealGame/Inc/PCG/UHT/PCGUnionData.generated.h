// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGUnionData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGSpatialData;
#ifdef PCG_PCGUnionData_generated_h
#error "PCGUnionData.generated.h already included, missing '#pragma once' in PCGUnionData.h"
#endif
#define PCG_PCGUnionData_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddData); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddData); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGUnionData(); \
	friend struct Z_Construct_UClass_UPCGUnionData_Statics; \
public: \
	DECLARE_CLASS(UPCGUnionData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGUnionData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPCGUnionData(); \
	friend struct Z_Construct_UClass_UPCGUnionData_Statics; \
public: \
	DECLARE_CLASS(UPCGUnionData, UPCGSpatialDataWithPointCache, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGUnionData)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGUnionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUnionData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGUnionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUnionData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGUnionData(UPCGUnionData&&); \
	NO_API UPCGUnionData(const UPCGUnionData&); \
public: \
	NO_API virtual ~UPCGUnionData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGUnionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGUnionData(UPCGUnionData&&); \
	NO_API UPCGUnionData(const UPCGUnionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGUnionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGUnionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGUnionData) \
	NO_API virtual ~UPCGUnionData();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_25_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGUnionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Data_PCGUnionData_h


#define FOREACH_ENUM_EPCGUNIONTYPE(op) \
	op(EPCGUnionType::LeftToRightPriority) \
	op(EPCGUnionType::RightToLeftPriority) \
	op(EPCGUnionType::KeepAll) 

enum class EPCGUnionType : uint8;
template<> struct TIsUEnumClass<EPCGUnionType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGUnionType>();

#define FOREACH_ENUM_EPCGUNIONDENSITYFUNCTION(op) \
	op(EPCGUnionDensityFunction::Maximum) \
	op(EPCGUnionDensityFunction::ClampedAddition) \
	op(EPCGUnionDensityFunction::Binary) 

enum class EPCGUnionDensityFunction : uint8;
template<> struct TIsUEnumClass<EPCGUnionDensityFunction> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGUnionDensityFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
