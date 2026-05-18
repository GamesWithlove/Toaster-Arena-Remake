// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorWheelHelper.h"

#ifdef COLORWHEELPLUGIN_ColorWheelHelper_generated_h
#error "ColorWheelHelper.generated.h already included, missing '#pragma once' in ColorWheelHelper.h"
#endif
#define COLORWHEELPLUGIN_ColorWheelHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;

// ********** Begin Class UColorWheelHelper ********************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetColorUnderCursor); \
	DECLARE_FUNCTION(execRandomColor); \
	DECLARE_FUNCTION(execRandomLinearColor); \
	DECLARE_FUNCTION(execLinearColorToHex); \
	DECLARE_FUNCTION(execColorToHex); \
	DECLARE_FUNCTION(execHexToLinearColor); \
	DECLARE_FUNCTION(execHexToColor); \
	DECLARE_FUNCTION(execByteToHex); \
	DECLARE_FUNCTION(execHexToByte);


struct Z_Construct_UClass_UColorWheelHelper_Statics;
COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWheelHelper_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorWheelHelper(); \
	friend struct ::Z_Construct_UClass_UColorWheelHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORWHEELPLUGIN_API UClass* ::Z_Construct_UClass_UColorWheelHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorWheelHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColorWheelPlugin"), Z_Construct_UClass_UColorWheelHelper_NoRegister) \
	DECLARE_SERIALIZER(UColorWheelHelper)


#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorWheelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorWheelHelper(UColorWheelHelper&&) = delete; \
	UColorWheelHelper(const UColorWheelHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorWheelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorWheelHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorWheelHelper) \
	NO_API virtual ~UColorWheelHelper();


#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_17_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorWheelHelper;

// ********** End Class UColorWheelHelper **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWheelHelper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
