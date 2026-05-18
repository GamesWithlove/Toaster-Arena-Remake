// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorWidget.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeColorWidget() {}

// ********** Begin Cross Module References ********************************************************
COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWidget();
COLORWHEELPLUGIN_API UClass* Z_Construct_UClass_UColorWidget_NoRegister();
COLORWHEELPLUGIN_API UEnum* Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget();
COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature();
COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature();
COLORWHEELPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_ColorWheelPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FColorChangedEvent ****************************************************
struct Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics
{
	struct _Script_ColorWheelPlugin_eventColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   Delegate: Broadcasted when a color change has occured.\n   Param 1: FLinearColor | The new Color that has been set.\n */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate: Broadcasted when a color change has occured.\nParam 1: FLinearColor | The new Color that has been set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FColorChangedEvent constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FColorChangedEvent constinit property declarations **********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FColorChangedEvent Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ColorWheelPlugin_eventColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FColorChangedEvent Property Definitions *********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "ColorChangedEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::_Script_ColorWheelPlugin_eventColorChangedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::_Script_ColorWheelPlugin_eventColorChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& ColorChangedEvent, FLinearColor const& NewColor)
{
	struct _Script_ColorWheelPlugin_eventColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
	_Script_ColorWheelPlugin_eventColorChangedEvent_Parms Parms;
	Parms.NewColor=NewColor;
	ColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FColorChangedEvent ******************************************************

// ********** Begin Delegate FMouseDownEvent *******************************************************
struct Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate: Broadcasted when the mouse is down on the Wheel. */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate: Broadcasted when the mouse is down on the Wheel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMouseDownEvent constinit property declarations ***********************
// ********** End Delegate FMouseDownEvent constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "MouseDownEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMouseDownEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseDownEvent)
{
	MouseDownEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FMouseDownEvent *********************************************************

// ********** Begin Delegate FMouseUpEvent *********************************************************
struct Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate: Broadcasted when the mouse is lifted from the Wheel. */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate: Broadcasted when the mouse is lifted from the Wheel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FMouseUpEvent constinit property declarations *************************
// ********** End Delegate FMouseUpEvent constinit property declarations ***************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "MouseUpEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMouseUpEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseUpEvent)
{
	MouseUpEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FMouseUpEvent ***********************************************************

// ********** Begin Class UColorWidget Function GetCurrentColor ************************************
struct Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics
{
	struct ColorWidget_eventGetCurrentColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Color Wheel|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Gets the color of the colorwheel\n\x09*\x09@return \x09\x09\x09\x09The current color of the colorwheel\n\x09*/" },
#endif
		{ "DisplayName", "Get Color" },
		{ "Keywords", "get color wheel" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the color of the colorwheel\n@return                                 The current color of the colorwheel" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentColor constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentColor constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentColor Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorWidget_eventGetCurrentColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentColor Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "GetCurrentColor", 	Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::ColorWidget_eventGetCurrentColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::ColorWidget_eventGetCurrentColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorWidget_GetCurrentColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorWidget::execGetCurrentColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetCurrentColor();
	P_NATIVE_END;
}
// ********** End Class UColorWidget Function GetCurrentColor **************************************

// ********** Begin Class UColorWidget Function SetColor *******************************************
struct Z_Construct_UFunction_UColorWidget_SetColor_Statics
{
	struct ColorWidget_eventSetColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Color Wheel|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Sets the color of the colorwheel\n\x09*\x09@param NewColor\x09\x09\x09""A new linear color value\n\x09*/" },
#endif
		{ "DisplayName", "Set Color" },
		{ "Keywords", "set color wheel" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color of the colorwheel\n@param NewColor                 A new linear color value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetColor constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColor constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColor Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorWidget_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers) < 2048);
// ********** End Function SetColor Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_SetColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "SetColor", 	Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UColorWidget_SetColor_Statics::ColorWidget_eventSetColor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorWidget_SetColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UColorWidget_SetColor_Statics::ColorWidget_eventSetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorWidget_SetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_SetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorWidget::execSetColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// ********** End Class UColorWidget Function SetColor *********************************************

// ********** Begin Class UColorWidget Function SetColorAndOpacity *********************************
struct Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics
{
	struct ColorWidget_eventSetColorAndOpacity_Parms
	{
		FLinearColor InColorAndOpacity;
		TEnumAsByte<EWheelBrushTarget> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the color and opacity of the specified brush */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color and opacity of the specified brush" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetColorAndOpacity constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetColorAndOpacity constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetColorAndOpacity Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ColorWidget_eventSetColorAndOpacity_Parms, Target), Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget, METADATA_PARAMS(0, nullptr) }; // 3144247793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers) < 2048);
// ********** End Function SetColorAndOpacity Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "SetColorAndOpacity", 	Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::ColorWidget_eventSetColorAndOpacity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::ColorWidget_eventSetColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UColorWidget_SetColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UColorWidget::execSetColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
	P_GET_PROPERTY(FByteProperty,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity,EWheelBrushTarget(Z_Param_Target));
	P_NATIVE_END;
}
// ********** End Class UColorWidget Function SetColorAndOpacity ***********************************

// ********** Begin Class UColorWidget *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UColorWidget;
UClass* UColorWidget::GetPrivateStaticClass()
{
	using TClass = UColorWidget;
	if (!Z_Registration_Info_UClass_UColorWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ColorWidget"),
			Z_Registration_Info_UClass_UColorWidget.InnerSingleton,
			StaticRegisterNativesUColorWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UColorWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UColorWidget_NoRegister()
{
	return UColorWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UColorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A simple color wheel that can be used to select a specific color using a Pin\n *\n * * No Children\n */" },
#endif
		{ "DisplayName", "Color Wheel" },
		{ "IncludePath", "ColorWidget.h" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple color wheel that can be used to select a specific color using a Pin\n\n* No Children" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectorPin_MetaData[] = {
		{ "Category", "Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The image used for the pin */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The image used for the pin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HueCircle_MetaData[] = {
		{ "Category", "Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The image used for the wheel */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The image used for the wheel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when value is changed */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when value is changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseDown_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when the mouse is being pressed on the wheel */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when the mouse is being pressed on the wheel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseUp_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event called when the mouse is being lifted from the wheel */" },
#endif
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when the mouse is being lifted from the wheel" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UColorWidget constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorPin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HueCircle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseDown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UColorWidget constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentColor"), .Pointer = &UColorWidget::execGetCurrentColor },
		{ .NameUTF8 = UTF8TEXT("SetColor"), .Pointer = &UColorWidget::execSetColor },
		{ .NameUTF8 = UTF8TEXT("SetColorAndOpacity"), .Pointer = &UColorWidget::execSetColorAndOpacity },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorWidget_GetCurrentColor, "GetCurrentColor" }, // 4124938059
		{ &Z_Construct_UFunction_UColorWidget_SetColor, "SetColor" }, // 382652974
		{ &Z_Construct_UFunction_UColorWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 3004533378
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UColorWidget_Statics

// ********** Begin Class UColorWidget Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin = { "SelectorPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorWidget, SelectorPin), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectorPin_MetaData), NewProp_SelectorPin_MetaData) }; // 4278521822
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle = { "HueCircle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorWidget, HueCircle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HueCircle_MetaData), NewProp_HueCircle_MetaData) }; // 4278521822
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorWidget, OnColorChanged), Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnColorChanged_MetaData), NewProp_OnColorChanged_MetaData) }; // 376115825
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown = { "OnMouseDown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorWidget, OnMouseDown), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseDown_MetaData), NewProp_OnMouseDown_MetaData) }; // 1905159542
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp = { "OnMouseUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UColorWidget, OnMouseUp), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMouseUp_MetaData), NewProp_OnMouseUp_MetaData) }; // 834797489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::PropPointers) < 2048);
// ********** End Class UColorWidget Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UColorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ColorWheelPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UColorWidget_Statics::ClassParams = {
	&UColorWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UColorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UColorWidget_Statics::Class_MetaDataParams)
};
void UColorWidget::StaticRegisterNativesUColorWidget()
{
	UClass* Class = UColorWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UColorWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_UColorWidget()
{
	if (!Z_Registration_Info_UClass_UColorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorWidget.OuterSingleton, Z_Construct_UClass_UColorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UColorWidget.OuterSingleton;
}
UColorWidget::UColorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UColorWidget);
UColorWidget::~UColorWidget() {}
// ********** End Class UColorWidget ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h__Script_ColorWheelPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UColorWidget, UColorWidget::StaticClass, TEXT("UColorWidget"), &Z_Registration_Info_UClass_UColorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorWidget), 2399472203U) },
	};
}; // Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h__Script_ColorWheelPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h__Script_ColorWheelPlugin_2124817162{
	TEXT("/Script/ColorWheelPlugin"),
	Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h__Script_ColorWheelPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_5_7_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h__Script_ColorWheelPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
