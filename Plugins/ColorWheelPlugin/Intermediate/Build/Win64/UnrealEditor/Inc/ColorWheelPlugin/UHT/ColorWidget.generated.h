// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorWidget.h"

#ifdef COLORWHEELPLUGIN_ColorWidget_generated_h
#error "ColorWidget.generated.h already included, missing '#pragma once' in ColorWidget.h"
#endif
#define COLORWHEELPLUGIN_ColorWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin Delegate FColorChangedEvent ****************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_23_DELEGATE \
COLORWHEELPLUGIN_API void FColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& ColorChangedEvent, FLinearColor const& NewColor);


// ********** End Delegate FColorChangedEvent ******************************************************

// ********** Begin Delegate FMouseDownEvent *******************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_26_DELEGATE \
COLORWHEELPLUGIN_API void FMouseDownEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseDownEvent);


// ********** End Delegate FMouseDownEvent *********************************************************

// ********** Begin Delegate FMouseUpEvent *********************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_29_DELEGATE \
COLORWHEELPLUGIN_API void FMouseUpEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseUpEvent);


// ********** End Delegate FMouseUpEvent ***********************************************************

// ********** Begin Class UColorWidget *************************************************************
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execGetCurrentColor); \
	DECLARE_FUNCTION(execSetColor);


struct Z_Construct_UClass_UColorWidget_Statics;
COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWidget_NoRegister();

#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorWidget(); \
	friend struct ::Z_Construct_UClass_UColorWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORWHEELPLUGIN_API UClass* ::Z_Construct_UClass_UColorWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ColorWheelPlugin"), Z_Construct_UClass_UColorWidget_NoRegister) \
	DECLARE_SERIALIZER(UColorWidget)


#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorWidget(UColorWidget&&) = delete; \
	UColorWidget(const UColorWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorWidget) \
	NO_API virtual ~UColorWidget();


#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_36_PROLOG
#define FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorWidget;

// ********** End Class UColorWidget ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
