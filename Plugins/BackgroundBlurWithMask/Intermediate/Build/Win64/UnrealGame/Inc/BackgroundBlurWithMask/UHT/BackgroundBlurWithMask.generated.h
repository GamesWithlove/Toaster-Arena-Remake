// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackgroundBlurWithMask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTexture;
struct FMargin;
struct FMaskMaterialSetting;
struct FSlateBrush;
#ifdef BACKGROUNDBLURWITHMASK_BackgroundBlurWithMask_generated_h
#error "BackgroundBlurWithMask.generated.h already included, missing '#pragma once' in BackgroundBlurWithMask.h"
#endif
#define BACKGROUNDBLURWITHMASK_BackgroundBlurWithMask_generated_h

#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_SPARSE_DATA
#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaskTextureInUse); \
	DECLARE_FUNCTION(execRedrawMaskMaterial); \
	DECLARE_FUNCTION(execSetLowQualityFallbackBrush); \
	DECLARE_FUNCTION(execSetBlurStrength); \
	DECLARE_FUNCTION(execSetMaskTextureChannel); \
	DECLARE_FUNCTION(execSetMaskMaterialSetting); \
	DECLARE_FUNCTION(execSetMaskTexture); \
	DECLARE_FUNCTION(execSetUseMaskMaterial); \
	DECLARE_FUNCTION(execSetBlurRadius); \
	DECLARE_FUNCTION(execSetApplyAlphaToBlur); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaskTextureInUse); \
	DECLARE_FUNCTION(execRedrawMaskMaterial); \
	DECLARE_FUNCTION(execSetLowQualityFallbackBrush); \
	DECLARE_FUNCTION(execSetBlurStrength); \
	DECLARE_FUNCTION(execSetMaskTextureChannel); \
	DECLARE_FUNCTION(execSetMaskMaterialSetting); \
	DECLARE_FUNCTION(execSetMaskTexture); \
	DECLARE_FUNCTION(execSetUseMaskMaterial); \
	DECLARE_FUNCTION(execSetBlurRadius); \
	DECLARE_FUNCTION(execSetApplyAlphaToBlur); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ACCESSORS
#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlurWithMask, NO_API)


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackgroundBlurWithMask(); \
	friend struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlurWithMask, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BackgroundBlurWithMask"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlurWithMask) \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ARCHIVESERIALIZER


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBackgroundBlurWithMask(); \
	friend struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlurWithMask, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BackgroundBlurWithMask"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlurWithMask) \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ARCHIVESERIALIZER


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlurWithMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlurWithMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlurWithMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlurWithMask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlurWithMask(UBackgroundBlurWithMask&&); \
	NO_API UBackgroundBlurWithMask(const UBackgroundBlurWithMask&); \
public: \
	NO_API virtual ~UBackgroundBlurWithMask();


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlurWithMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlurWithMask(UBackgroundBlurWithMask&&); \
	NO_API UBackgroundBlurWithMask(const UBackgroundBlurWithMask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlurWithMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlurWithMask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlurWithMask) \
	NO_API virtual ~UBackgroundBlurWithMask();


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_27_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_SPARSE_DATA \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ACCESSORS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BackgroundBlurWithMask."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BACKGROUNDBLURWITHMASK_API UClass* StaticClass<class UBackgroundBlurWithMask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
