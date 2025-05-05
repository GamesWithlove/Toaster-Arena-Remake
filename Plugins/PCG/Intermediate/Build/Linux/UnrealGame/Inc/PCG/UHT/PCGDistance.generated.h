// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDistance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGDistance_generated_h
#error "PCGDistance.generated.h already included, missing '#pragma once' in PCGDistance.h"
#endif
#define PCG_PCGDistance_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_RPC_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDistanceSettings(); \
	friend struct Z_Construct_UClass_UPCGDistanceSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGDistanceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGDistanceSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUPCGDistanceSettings(); \
	friend struct Z_Construct_UClass_UPCGDistanceSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGDistanceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGDistanceSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDistanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDistanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDistanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDistanceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGDistanceSettings(UPCGDistanceSettings&&); \
	NO_API UPCGDistanceSettings(const UPCGDistanceSettings&); \
public: \
	NO_API virtual ~UPCGDistanceSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDistanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGDistanceSettings(UPCGDistanceSettings&&); \
	NO_API UPCGDistanceSettings(const UPCGDistanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDistanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDistanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDistanceSettings) \
	NO_API virtual ~UPCGDistanceSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_26_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGDistanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGDistance_h


#define FOREACH_ENUM_PCGDISTANCESHAPE(op) \
	op(PCGDistanceShape::SphereBounds) \
	op(PCGDistanceShape::BoxBounds) \
	op(PCGDistanceShape::Center) 

enum class PCGDistanceShape;
template<> struct TIsUEnumClass<PCGDistanceShape> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<PCGDistanceShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
