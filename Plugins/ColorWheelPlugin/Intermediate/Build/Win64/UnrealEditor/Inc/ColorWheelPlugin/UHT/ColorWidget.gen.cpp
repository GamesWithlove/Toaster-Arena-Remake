// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorWidget.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorWidget() {}
// Cross Module References
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
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics
	{
		struct _Script_ColorWheelPlugin_eventColorChangedEvent_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ColorWheelPlugin_eventColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n   Delegate: Broadcasted when a color change has occured.\n   Param 1: FLinearColor | The new Color that has been set.\n */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Delegate: Broadcasted when a color change has occured.\nParam 1: FLinearColor | The new Color that has been set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "ColorChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::_Script_ColorWheelPlugin_eventColorChangedEvent_Parms), Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature_Statics::FuncParams);
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
	struct Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate: Broadcasted when the mouse is down on the Wheel. */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Delegate: Broadcasted when the mouse is down on the Wheel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "MouseDownEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMouseDownEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseDownEvent)
{
	MouseDownEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate: Broadcasted when the mouse is lifted from the Wheel. */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Delegate: Broadcasted when the mouse is lifted from the Wheel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ColorWheelPlugin, nullptr, "MouseUpEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMouseUpEvent_DelegateWrapper(const FMulticastScriptDelegate& MouseUpEvent)
{
	MouseUpEvent.ProcessMulticastDelegate<UObject>(NULL);
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
	DEFINE_FUNCTION(UColorWidget::execGetCurrentColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetCurrentColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UColorWidget::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	void UColorWidget::StaticRegisterNativesUColorWidget()
	{
		UClass* Class = UColorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentColor", &UColorWidget::execGetCurrentColor },
			{ "SetColor", &UColorWidget::execSetColor },
			{ "SetColorAndOpacity", &UColorWidget::execSetColorAndOpacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics
	{
		struct ColorWidget_eventGetCurrentColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWidget_eventGetCurrentColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel|Functions" },
		{ "Comment", "/**\n\x09*\x09Gets the color of the colorwheel\n\x09*\x09@return \x09\x09\x09\x09The current color of the colorwheel\n\x09*/" },
		{ "DisplayName", "Get Color" },
		{ "Keywords", "get color wheel" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Gets the color of the colorwheel\n@return                                 The current color of the colorwheel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "GetCurrentColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::ColorWidget_eventGetCurrentColor_Parms), Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWidget_GetCurrentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_GetCurrentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWidget_SetColor_Statics
	{
		struct ColorWidget_eventSetColor_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWidget_eventSetColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWidget_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Wheel|Functions" },
		{ "Comment", "/**\n\x09*\x09Sets the color of the colorwheel\n\x09*\x09@param NewColor\x09\x09\x09""A new linear color value\n\x09*/" },
		{ "DisplayName", "Set Color" },
		{ "Keywords", "set color wheel" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Sets the color of the colorwheel\n@param NewColor                 A new linear color value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWidget_SetColor_Statics::ColorWidget_eventSetColor_Parms), Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWidget_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWidget_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics
	{
		struct ColorWidget_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
			TEnumAsByte<EWheelBrushTarget> Target;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ColorWidget_eventSetColorAndOpacity_Parms, Target), Z_Construct_UEnum_ColorWheelPlugin_EWheelBrushTarget, METADATA_PARAMS(nullptr, 0) }; // 2779690821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color and opacity of the specified brush */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Sets the color and opacity of the specified brush" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorWidget, nullptr, "SetColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::ColorWidget_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorWidget_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UColorWidget_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UColorWidget);
	UClass* Z_Construct_UClass_UColorWidget_NoRegister()
	{
		return UColorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UColorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorPin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HueCircle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HueCircle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseDown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ColorWheelPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorWidget_GetCurrentColor, "GetCurrentColor" }, // 3777661054
		{ &Z_Construct_UFunction_UColorWidget_SetColor, "SetColor" }, // 2789084534
		{ &Z_Construct_UFunction_UColorWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 1401684718
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple color wheel that can be used to select a specific color using a Pin\n *\n * * No Children\n */" },
		{ "DisplayName", "Color Wheel" },
		{ "IncludePath", "ColorWidget.h" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "A simple color wheel that can be used to select a specific color using a Pin\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The image used for the pin */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "The image used for the pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin = { "SelectorPin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorWidget, SelectorPin), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The image used for the wheel */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "The image used for the wheel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle = { "HueCircle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorWidget, HueCircle), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
		{ "Comment", "/** Event called when value is changed */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Event called when value is changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorWidget, OnColorChanged), Z_Construct_UDelegateFunction_ColorWheelPlugin_ColorChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged_MetaData)) }; // 647831723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
		{ "Comment", "/** Event called when the mouse is being pressed on the wheel */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Event called when the mouse is being pressed on the wheel" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown = { "OnMouseDown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorWidget, OnMouseDown), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseDownEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown_MetaData)) }; // 3196624487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp_MetaData[] = {
		{ "Category", "Color Wheel|Event" },
		{ "Comment", "/** Event called when the mouse is being lifted from the wheel */" },
		{ "ModuleRelativePath", "Public/ColorWidget.h" },
		{ "ToolTip", "Event called when the mouse is being lifted from the wheel" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp = { "OnMouseUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UColorWidget, OnMouseUp), Z_Construct_UDelegateFunction_ColorWheelPlugin_MouseUpEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp_MetaData)) }; // 185291762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UColorWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_SelectorPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_HueCircle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnColorChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UColorWidget_Statics::NewProp_OnMouseUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorWidget>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UColorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorWidget()
	{
		if (!Z_Registration_Info_UClass_UColorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UColorWidget.OuterSingleton, Z_Construct_UClass_UColorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UColorWidget.OuterSingleton;
	}
	template<> COLORWHEELPLUGIN_API UClass* StaticClass<UColorWidget>()
	{
		return UColorWidget::StaticClass();
	}
	UColorWidget::UColorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorWidget);
	UColorWidget::~UColorWidget() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UColorWidget, UColorWidget::StaticClass, TEXT("UColorWidget"), &Z_Registration_Info_UClass_UColorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UColorWidget), 4236790059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_3766069056(TEXT("/Script/ColorWheelPlugin"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_ColorWheelPlugin_Source_ColorWheelPlugin_Public_ColorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
