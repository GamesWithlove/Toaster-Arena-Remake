// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGExecuteBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGBlueprintElement;
class UPCGMetadata;
class UPCGPointData;
class UPCGSpatialData;
enum class EPCGSettingsType : uint8;
struct FLinearColor;
struct FPCGContext;
struct FPCGDataCollection;
struct FPCGPoint;
struct FRandomStream;
#ifdef PCG_PCGExecuteBlueprint_generated_h
#error "PCGExecuteBlueprint.generated.h already included, missing '#pragma once' in PCGExecuteBlueprint.h"
#endif
#define PCG_PCGExecuteBlueprint_generated_h

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_RPC_WRAPPERS \
	virtual EPCGSettingsType NodeTypeOverride_Implementation() const; \
	virtual FLinearColor NodeColorOverride_Implementation() const; \
	virtual FName NodeTitleOverride_Implementation() const; \
	virtual void ExecuteWithContext_Implementation(FPCGContext& InContext, FPCGDataCollection const& Input, FPCGDataCollection& Output); \
 \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execOutputLabels); \
	DECLARE_FUNCTION(execInputLabels); \
	DECLARE_FUNCTION(execNodeTypeOverride); \
	DECLARE_FUNCTION(execNodeColorOverride); \
	DECLARE_FUNCTION(execNodeTitleOverride); \
	DECLARE_FUNCTION(execIterationLoop); \
	DECLARE_FUNCTION(execNestedLoop); \
	DECLARE_FUNCTION(execVariableLoop); \
	DECLARE_FUNCTION(execPointLoop); \
	DECLARE_FUNCTION(execExecuteWithContext);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EPCGSettingsType NodeTypeOverride_Implementation() const; \
	virtual FLinearColor NodeColorOverride_Implementation() const; \
	virtual FName NodeTitleOverride_Implementation() const; \
	virtual void ExecuteWithContext_Implementation(FPCGContext& InContext, FPCGDataCollection const& Input, FPCGDataCollection& Output); \
 \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execOutputLabels); \
	DECLARE_FUNCTION(execInputLabels); \
	DECLARE_FUNCTION(execNodeTypeOverride); \
	DECLARE_FUNCTION(execNodeColorOverride); \
	DECLARE_FUNCTION(execNodeTitleOverride); \
	DECLARE_FUNCTION(execIterationLoop); \
	DECLARE_FUNCTION(execNestedLoop); \
	DECLARE_FUNCTION(execVariableLoop); \
	DECLARE_FUNCTION(execPointLoop); \
	DECLARE_FUNCTION(execExecuteWithContext);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_CALLBACK_WRAPPERS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintElement(); \
	friend struct Z_Construct_UClass_UPCGBlueprintElement_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintElement)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPCGBlueprintElement(); \
	friend struct Z_Construct_UClass_UPCGBlueprintElement_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintElement)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintElement(UPCGBlueprintElement&&); \
	NO_API UPCGBlueprintElement(const UPCGBlueprintElement&); \
public: \
	NO_API virtual ~UPCGBlueprintElement();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintElement(UPCGBlueprintElement&&); \
	NO_API UPCGBlueprintElement(const UPCGBlueprintElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintElement) \
	NO_API virtual ~UPCGBlueprintElement();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_29_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_CALLBACK_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGBlueprintElement>();

#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetElementType); \
	DECLARE_FUNCTION(execSetElementType);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetElementType); \
	DECLARE_FUNCTION(execSetElementType);


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintSettings(); \
	friend struct Z_Construct_UClass_UPCGBlueprintSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_INCLASS \
private: \
	static void StaticRegisterNativesUPCGBlueprintSettings(); \
	friend struct Z_Construct_UClass_UPCGBlueprintSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGBlueprintSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGBlueprintSettings)


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGBlueprintSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlueprintSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintSettings(UPCGBlueprintSettings&&); \
	NO_API UPCGBlueprintSettings(const UPCGBlueprintSettings&); \
public: \
	NO_API virtual ~UPCGBlueprintSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGBlueprintSettings(UPCGBlueprintSettings&&); \
	NO_API UPCGBlueprintSettings(const UPCGBlueprintSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBlueprintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGBlueprintSettings) \
	NO_API virtual ~UPCGBlueprintSettings();


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_176_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGBlueprintSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
