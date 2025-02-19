// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPointFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGPointFilter_generated_h
#error "PCGPointFilter.generated.h already included, missing '#pragma once' in PCGPointFilter.h"
#endif
#define PCG_PCGPointFilter_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointFilterSettings(); \
	friend struct Z_Construct_UClass_UPCGPointFilterSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGPointFilterSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPointFilterSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUPCGPointFilterSettings(); \
	friend struct Z_Construct_UClass_UPCGPointFilterSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGPointFilterSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGPointFilterSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGPointFilterSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointFilterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointFilterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointFilterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPointFilterSettings(UPCGPointFilterSettings&&); \
	NO_API UPCGPointFilterSettings(const UPCGPointFilterSettings&); \
public: \
	NO_API virtual ~UPCGPointFilterSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGPointFilterSettings(UPCGPointFilterSettings&&); \
	NO_API UPCGPointFilterSettings(const UPCGPointFilterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGPointFilterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointFilterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGPointFilterSettings) \
	NO_API virtual ~UPCGPointFilterSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_61_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGPointFilterSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFilter_h


#define FOREACH_ENUM_EPCGPOINTTARGETFILTERTYPE(op) \
	op(EPCGPointTargetFilterType::Property) \
	op(EPCGPointTargetFilterType::Metadata) 

enum class EPCGPointTargetFilterType : uint8;
template<> struct TIsUEnumClass<EPCGPointTargetFilterType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGPointTargetFilterType>();

#define FOREACH_ENUM_EPCGPOINTTHRESHOLDTYPE(op) \
	op(EPCGPointThresholdType::Property) \
	op(EPCGPointThresholdType::Metadata) \
	op(EPCGPointThresholdType::Constant) 

enum class EPCGPointThresholdType : uint8;
template<> struct TIsUEnumClass<EPCGPointThresholdType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGPointThresholdType>();

#define FOREACH_ENUM_EPCGPOINTFILTERCONSTANTTYPE(op) \
	op(EPCGPointFilterConstantType::Integer64) \
	op(EPCGPointFilterConstantType::Float) \
	op(EPCGPointFilterConstantType::Vector) \
	op(EPCGPointFilterConstantType::Vector4) \
	op(EPCGPointFilterConstantType::String) \
	op(EPCGPointFilterConstantType::Unknown) 

enum class EPCGPointFilterConstantType : uint8;
template<> struct TIsUEnumClass<EPCGPointFilterConstantType> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGPointFilterConstantType>();

#define FOREACH_ENUM_EPCGPOINTFILTEROPERATOR(op) \
	op(EPCGPointFilterOperator::Greater) \
	op(EPCGPointFilterOperator::GreaterOrEqual) \
	op(EPCGPointFilterOperator::Lesser) \
	op(EPCGPointFilterOperator::LesserOrEqual) \
	op(EPCGPointFilterOperator::Equal) \
	op(EPCGPointFilterOperator::NotEqual) 

enum class EPCGPointFilterOperator : uint8;
template<> struct TIsUEnumClass<EPCGPointFilterOperator> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGPointFilterOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
