// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MatchAndSet/PCGMatchAndSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGPointData;
class UPCGPointMatchAndSetSettings;
struct FPCGContext;
#ifdef PCG_PCGMatchAndSetBase_generated_h
#error "PCGMatchAndSetBase.generated.h already included, missing '#pragma once' in PCGMatchAndSetBase.h"
#endif
#define PCG_PCGMatchAndSetBase_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_RPC_WRAPPERS \
	virtual void MatchAndSet_Implementation(FPCGContext& Context, const UPCGPointMatchAndSetSettings* InSettings, const UPCGPointData* InPointData, UPCGPointData* OutPointData) const; \
	virtual bool ValidatePreconditions_Implementation(const UPCGPointData* InPointData) const; \
 \
	DECLARE_FUNCTION(execMatchAndSet); \
	DECLARE_FUNCTION(execValidatePreconditions);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatchAndSet); \
	DECLARE_FUNCTION(execValidatePreconditions);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMatchAndSetBase(); \
	friend struct Z_Construct_UClass_UPCGMatchAndSetBase_Statics; \
public: \
	DECLARE_CLASS(UPCGMatchAndSetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMatchAndSetBase)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPCGMatchAndSetBase(); \
	friend struct Z_Construct_UClass_UPCGMatchAndSetBase_Statics; \
public: \
	DECLARE_CLASS(UPCGMatchAndSetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGMatchAndSetBase)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMatchAndSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMatchAndSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMatchAndSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMatchAndSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMatchAndSetBase(UPCGMatchAndSetBase&&); \
	NO_API UPCGMatchAndSetBase(const UPCGMatchAndSetBase&); \
public: \
	NO_API virtual ~UPCGMatchAndSetBase();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMatchAndSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGMatchAndSetBase(UPCGMatchAndSetBase&&); \
	NO_API UPCGMatchAndSetBase(const UPCGMatchAndSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMatchAndSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMatchAndSetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMatchAndSetBase) \
	NO_API virtual ~UPCGMatchAndSetBase();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_23_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGMatchAndSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_MatchAndSet_PCGMatchAndSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
