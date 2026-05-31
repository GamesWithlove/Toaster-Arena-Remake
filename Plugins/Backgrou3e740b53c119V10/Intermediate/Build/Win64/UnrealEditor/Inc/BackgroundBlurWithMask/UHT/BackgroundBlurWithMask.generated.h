// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BackgroundBlurWithMask.h"

#ifdef BACKGROUNDBLURWITHMASK_BackgroundBlurWithMask_generated_h
#error "BackgroundBlurWithMask.generated.h already included, missing '#pragma once' in BackgroundBlurWithMask.h"
#endif
#define BACKGROUNDBLURWITHMASK_BackgroundBlurWithMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UTexture2D;
struct FMargin;
struct FMaskMaterialSetting;
struct FSlateBrush;

// ********** Begin Class UBackgroundBlurWithMask **************************************************
#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS \
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


#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlurWithMask, NO_API)


struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics;
BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBackgroundBlurWithMask(); \
	friend struct ::Z_Construct_UClass_UBackgroundBlurWithMask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BACKGROUNDBLURWITHMASK_API UClass* ::Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackgroundBlurWithMask, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BackgroundBlurWithMask"), Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister) \
	DECLARE_SERIALIZER(UBackgroundBlurWithMask) \
	FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_ARCHIVESERIALIZER


#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlurWithMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlurWithMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlurWithMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlurWithMask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackgroundBlurWithMask(UBackgroundBlurWithMask&&) = delete; \
	UBackgroundBlurWithMask(const UBackgroundBlurWithMask&) = delete; \
	NO_API virtual ~UBackgroundBlurWithMask();


#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_27_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_RPC_WRAPPERS \
	FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_INCLASS \
	FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackgroundBlurWithMask;

// ********** End Class UBackgroundBlurWithMask ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Backgrou3e740b53c119V10_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
