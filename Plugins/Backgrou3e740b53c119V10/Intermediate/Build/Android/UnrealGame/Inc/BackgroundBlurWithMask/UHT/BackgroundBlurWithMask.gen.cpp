// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackgroundBlurWithMask.h"
#include "BackgroundBlurWithMaskDefine.h"
#include "Layout/Margin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMask() {}

// ********** Begin Cross Module References ********************************************************
BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMask();
BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister();
BACKGROUNDBLURWITHMASK_API UEnum* Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel();
BACKGROUNDBLURWITHMASK_API UScriptStruct* Z_Construct_UScriptStruct_FMaskMaterialSetting();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UPackage* Z_Construct_UPackage__Script_BackgroundBlurWithMask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBackgroundBlurWithMask Function GetMaskTextureInUse *********************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics
{
	struct BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaskTextureInUse constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaskTextureInUse constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaskTextureInUse Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers) < 2048);
// ********** End Function GetMaskTextureInUse Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "GetMaskTextureInUse", 	Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execGetMaskTextureInUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetMaskTextureInUse();
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function GetMaskTextureInUse ***********************

// ********** Begin Class UBackgroundBlurWithMask Function RedrawMaskMaterial **********************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RedrawMaskMaterial constinit property declarations ********************
// ********** End Function RedrawMaskMaterial constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "RedrawMaskMaterial", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execRedrawMaskMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RedrawMaskMaterial();
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function RedrawMaskMaterial ************************

// ********** Begin Class UBackgroundBlurWithMask Function SetApplyAlphaToBlur *********************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics
{
	struct BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms
	{
		bool bInApplyAlphaToBlur;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetApplyAlphaToBlur constinit property declarations *******************
	static void NewProp_bInApplyAlphaToBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInApplyAlphaToBlur;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetApplyAlphaToBlur constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetApplyAlphaToBlur Property Definitions ******************************
void Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit(void* Obj)
{
	((BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms*)Obj)->bInApplyAlphaToBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur = { "bInApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms), &Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers) < 2048);
// ********** End Function SetApplyAlphaToBlur Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetApplyAlphaToBlur", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetApplyAlphaToBlur)
{
	P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetApplyAlphaToBlur ***********************

// ********** Begin Class UBackgroundBlurWithMask Function SetBlurRadius ***************************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics
{
	struct BackgroundBlurWithMask_eventSetBlurRadius_Parms
	{
		int32 InBlurRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBlurRadius constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InBlurRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBlurRadius constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBlurRadius Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::NewProp_InBlurRadius = { "InBlurRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetBlurRadius_Parms, InBlurRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::NewProp_InBlurRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers) < 2048);
// ********** End Function SetBlurRadius Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetBlurRadius", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::BackgroundBlurWithMask_eventSetBlurRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::BackgroundBlurWithMask_eventSetBlurRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetBlurRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InBlurRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlurRadius(Z_Param_InBlurRadius);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetBlurRadius *****************************

// ********** Begin Class UBackgroundBlurWithMask Function SetBlurStrength *************************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics
{
	struct BackgroundBlurWithMask_eventSetBlurStrength_Parms
	{
		float InStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBlurStrength constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBlurStrength constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBlurStrength Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::NewProp_InStrength = { "InStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetBlurStrength_Parms, InStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::NewProp_InStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers) < 2048);
// ********** End Function SetBlurStrength Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetBlurStrength", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::BackgroundBlurWithMask_eventSetBlurStrength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::BackgroundBlurWithMask_eventSetBlurStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetBlurStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlurStrength(Z_Param_InStrength);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetBlurStrength ***************************

// ********** Begin Class UBackgroundBlurWithMask Function SetHorizontalAlignment ******************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics
{
	struct BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHorizontalAlignment constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHorizontalAlignment constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHorizontalAlignment Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 990570535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers) < 2048);
// ********** End Function SetHorizontalAlignment Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetHorizontalAlignment", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetHorizontalAlignment ********************

// ********** Begin Class UBackgroundBlurWithMask Function SetLowQualityFallbackBrush **************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics
{
	struct BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms
	{
		FSlateBrush InBrush;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLowQualityFallbackBrush constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLowQualityFallbackBrush constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLowQualityFallbackBrush Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrush_MetaData), NewProp_InBrush_MetaData) }; // 4278521822
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers) < 2048);
// ********** End Function SetLowQualityFallbackBrush Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetLowQualityFallbackBrush", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetLowQualityFallbackBrush)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetLowQualityFallbackBrush ****************

// ********** Begin Class UBackgroundBlurWithMask Function SetMaskMaterialSetting ******************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics
{
	struct BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms
	{
		FMaskMaterialSetting InMaskMaterialSetting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaskMaterialSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaskMaterialSetting constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMaskMaterialSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaskMaterialSetting constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaskMaterialSetting Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting = { "InMaskMaterialSetting", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms, InMaskMaterialSetting), Z_Construct_UScriptStruct_FMaskMaterialSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaskMaterialSetting_MetaData), NewProp_InMaskMaterialSetting_MetaData) }; // 3269052173
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers) < 2048);
// ********** End Function SetMaskMaterialSetting Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskMaterialSetting", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskMaterialSetting)
{
	P_GET_STRUCT_REF(FMaskMaterialSetting,Z_Param_Out_InMaskMaterialSetting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaskMaterialSetting(Z_Param_Out_InMaskMaterialSetting);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetMaskMaterialSetting ********************

// ********** Begin Class UBackgroundBlurWithMask Function SetMaskTexture **************************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics
{
	struct BackgroundBlurWithMask_eventSetMaskTexture_Parms
	{
		UTexture2D* InMaskTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaskTexture constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaskTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaskTexture constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaskTexture Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::NewProp_InMaskTexture = { "InMaskTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskTexture_Parms, InMaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::NewProp_InMaskTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers) < 2048);
// ********** End Function SetMaskTexture Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskTexture", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::BackgroundBlurWithMask_eventSetMaskTexture_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::BackgroundBlurWithMask_eventSetMaskTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_InMaskTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaskTexture(Z_Param_InMaskTexture);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetMaskTexture ****************************

// ********** Begin Class UBackgroundBlurWithMask Function SetMaskTextureChannel *******************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics
{
	struct BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms
	{
		TEnumAsByte<EMaskTextureChannel> InMaskTextureChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMaskTextureChannel constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMaskTextureChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMaskTextureChannel constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMaskTextureChannel Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::NewProp_InMaskTextureChannel = { "InMaskTextureChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms, InMaskTextureChannel), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, METADATA_PARAMS(0, nullptr) }; // 2444708300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::NewProp_InMaskTextureChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers) < 2048);
// ********** End Function SetMaskTextureChannel Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskTextureChannel", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskTextureChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InMaskTextureChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaskTextureChannel(EMaskTextureChannel(Z_Param_InMaskTextureChannel));
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetMaskTextureChannel *********************

// ********** Begin Class UBackgroundBlurWithMask Function SetPadding ******************************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics
{
	struct BackgroundBlurWithMask_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPadding constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPadding constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPadding Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 4099648758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers) < 2048);
// ********** End Function SetPadding Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetPadding", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::BackgroundBlurWithMask_eventSetPadding_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::BackgroundBlurWithMask_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetPadding ********************************

// ********** Begin Class UBackgroundBlurWithMask Function SetUseMaskMaterial **********************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics
{
	struct BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms
	{
		bool bInUseMaskMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUseMaskMaterial constinit property declarations ********************
	static void NewProp_bInUseMaskMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseMaskMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUseMaskMaterial constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUseMaskMaterial Property Definitions *******************************
void Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial_SetBit(void* Obj)
{
	((BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms*)Obj)->bInUseMaskMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial = { "bInUseMaskMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms), &Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers) < 2048);
// ********** End Function SetUseMaskMaterial Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetUseMaskMaterial", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetUseMaskMaterial)
{
	P_GET_UBOOL(Z_Param_bInUseMaskMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseMaskMaterial(Z_Param_bInUseMaskMaterial);
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetUseMaskMaterial ************************

// ********** Begin Class UBackgroundBlurWithMask Function SetVerticalAlignment ********************
struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics
{
	struct BackgroundBlurWithMask_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVerticalAlignment constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVerticalAlignment constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVerticalAlignment Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 2496106429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers) < 2048);
// ********** End Function SetVerticalAlignment Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetVerticalAlignment", 	Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::BackgroundBlurWithMask_eventSetVerticalAlignment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::BackgroundBlurWithMask_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// ********** End Class UBackgroundBlurWithMask Function SetVerticalAlignment **********************

// ********** Begin Class UBackgroundBlurWithMask **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBackgroundBlurWithMask;
UClass* UBackgroundBlurWithMask::GetPrivateStaticClass()
{
	using TClass = UBackgroundBlurWithMask;
	if (!Z_Registration_Info_UClass_UBackgroundBlurWithMask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BackgroundBlurWithMask"),
			Z_Registration_Info_UClass_UBackgroundBlurWithMask.InnerSingleton,
			StaticRegisterNativesUBackgroundBlurWithMask,
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
	return Z_Registration_Info_UClass_UBackgroundBlurWithMask.InnerSingleton;
}
UClass* Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister()
{
	return UBackgroundBlurWithMask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A background blur with mask is a container widget that can contain one child widget.\n* A mask texture can be applied to control the blur effect region..\n*\n* * Single Child\n* * Blur Effect\n*/" },
		{ "DisplayName", "Background Blur With Mask" },
		{ "IncludePath", "BackgroundBlurWithMask.h" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "A background blur with mask is a container widget that can contain one child widget.\nA mask texture can be applied to control the blur effect region..\n\n* Single Child\n* Blur Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaToBlur_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to modulate the strength of the blur based on the widget alpha. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "True to modulate the strength of the blur based on the widget alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurStrength_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaskMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to control blur region using a mask material. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "True to control blur region using a mask material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask texture to control blur region.\n\x09 */" },
		{ "EditCondition", "!bUseMaskMaterial" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Mask texture to control blur region." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterialSetting_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material setting.\n\x09 */" },
		{ "EditCondition", "bUseMaskMaterial" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Mask material setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskTextureChannel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Which texture channel is used for background blur masking\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Which texture channel is used for background blur masking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutoRadiusCalculation_MetaData[] = {
		{ "Comment", "/** Whether or not the radius should be computed automatically or if it should use the radius */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Whether or not the radius should be computed automatically or if it should use the radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\n\x09 * A larger value is more costly but allows for stronger blurs.\n\x09 */" },
		{ "EditCondition", "bOverrideAutoRadiusCalculation" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowQualityFallbackBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * An image to draw instead of applying a blur when low quality override mode is enabled.\n\x09 * You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\n\x09 * This is usually done in the project's scalability settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "An image to draw instead of applying a blur when low quality override mode is enabled.\nYou can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\nThis is usually done in the project's scalability settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterialRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBackgroundBlurWithMask constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static void NewProp_bApplyAlphaToBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaToBlur;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurStrength;
	static void NewProp_bUseMaskMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaskMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaskMaterialSetting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaskTextureChannel;
	static void NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutoRadiusCalculation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlurRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowQualityFallbackBrush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskMaterialRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBackgroundBlurWithMask constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetMaskTextureInUse"), .Pointer = &UBackgroundBlurWithMask::execGetMaskTextureInUse },
		{ .NameUTF8 = UTF8TEXT("RedrawMaskMaterial"), .Pointer = &UBackgroundBlurWithMask::execRedrawMaskMaterial },
		{ .NameUTF8 = UTF8TEXT("SetApplyAlphaToBlur"), .Pointer = &UBackgroundBlurWithMask::execSetApplyAlphaToBlur },
		{ .NameUTF8 = UTF8TEXT("SetBlurRadius"), .Pointer = &UBackgroundBlurWithMask::execSetBlurRadius },
		{ .NameUTF8 = UTF8TEXT("SetBlurStrength"), .Pointer = &UBackgroundBlurWithMask::execSetBlurStrength },
		{ .NameUTF8 = UTF8TEXT("SetHorizontalAlignment"), .Pointer = &UBackgroundBlurWithMask::execSetHorizontalAlignment },
		{ .NameUTF8 = UTF8TEXT("SetLowQualityFallbackBrush"), .Pointer = &UBackgroundBlurWithMask::execSetLowQualityFallbackBrush },
		{ .NameUTF8 = UTF8TEXT("SetMaskMaterialSetting"), .Pointer = &UBackgroundBlurWithMask::execSetMaskMaterialSetting },
		{ .NameUTF8 = UTF8TEXT("SetMaskTexture"), .Pointer = &UBackgroundBlurWithMask::execSetMaskTexture },
		{ .NameUTF8 = UTF8TEXT("SetMaskTextureChannel"), .Pointer = &UBackgroundBlurWithMask::execSetMaskTextureChannel },
		{ .NameUTF8 = UTF8TEXT("SetPadding"), .Pointer = &UBackgroundBlurWithMask::execSetPadding },
		{ .NameUTF8 = UTF8TEXT("SetUseMaskMaterial"), .Pointer = &UBackgroundBlurWithMask::execSetUseMaskMaterial },
		{ .NameUTF8 = UTF8TEXT("SetVerticalAlignment"), .Pointer = &UBackgroundBlurWithMask::execSetVerticalAlignment },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse, "GetMaskTextureInUse" }, // 3158515895
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial, "RedrawMaskMaterial" }, // 3238152686
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur, "SetApplyAlphaToBlur" }, // 3324669087
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius, "SetBlurRadius" }, // 2909283350
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength, "SetBlurStrength" }, // 1556362208
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2349421706
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush, "SetLowQualityFallbackBrush" }, // 2328123617
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting, "SetMaskMaterialSetting" }, // 567284614
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture, "SetMaskTexture" }, // 2650524880
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel, "SetMaskTextureChannel" }, // 1822261024
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding, "SetPadding" }, // 3797240806
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial, "SetUseMaskMaterial" }, // 3397284731
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment, "SetVerticalAlignment" }, // 2522899434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlurWithMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics

// ********** Begin Class UBackgroundBlurWithMask Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 4099648758
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 990570535
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 2496106429
void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_SetBit(void* Obj)
{
	((UBackgroundBlurWithMask*)Obj)->bApplyAlphaToBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur = { "bApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAlphaToBlur_MetaData), NewProp_bApplyAlphaToBlur_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength = { "BlurStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, BlurStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurStrength_MetaData), NewProp_BlurStrength_MetaData) };
void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_SetBit(void* Obj)
{
	((UBackgroundBlurWithMask*)Obj)->bUseMaskMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial = { "bUseMaskMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaskMaterial_MetaData), NewProp_bUseMaskMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskTexture_MetaData), NewProp_MaskTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting = { "MaskMaterialSetting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskMaterialSetting), Z_Construct_UScriptStruct_FMaskMaterialSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskMaterialSetting_MetaData), NewProp_MaskMaterialSetting_MetaData) }; // 3269052173
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel = { "MaskTextureChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskTextureChannel), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskTextureChannel_MetaData), NewProp_MaskTextureChannel_MetaData) }; // 2444708300
void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj)
{
	((UBackgroundBlurWithMask*)Obj)->bOverrideAutoRadiusCalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation = { "bOverrideAutoRadiusCalculation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAutoRadiusCalculation_MetaData), NewProp_bOverrideAutoRadiusCalculation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, BlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurRadius_MetaData), NewProp_BlurRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush = { "LowQualityFallbackBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, LowQualityFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowQualityFallbackBrush_MetaData), NewProp_LowQualityFallbackBrush_MetaData) }; // 4278521822
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget = { "MaskMaterialRenderTarget", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskMaterialRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskMaterialRenderTarget_MetaData), NewProp_MaskMaterialRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlurWithMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::PropPointers) < 2048);
// ********** End Class UBackgroundBlurWithMask Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UBackgroundBlurWithMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::ClassParams = {
	&UBackgroundBlurWithMask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBackgroundBlurWithMask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Class_MetaDataParams)
};
void UBackgroundBlurWithMask::StaticRegisterNativesUBackgroundBlurWithMask()
{
	UClass* Class = UBackgroundBlurWithMask::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBackgroundBlurWithMask()
{
	if (!Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton, Z_Construct_UClass_UBackgroundBlurWithMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBackgroundBlurWithMask);
UBackgroundBlurWithMask::~UBackgroundBlurWithMask() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlurWithMask)
// ********** End Class UBackgroundBlurWithMask ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h__Script_BackgroundBlurWithMask_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlurWithMask, UBackgroundBlurWithMask::StaticClass, TEXT("UBackgroundBlurWithMask"), &Z_Registration_Info_UClass_UBackgroundBlurWithMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlurWithMask), 3663268190U) },
	};
}; // Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h__Script_BackgroundBlurWithMask_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h__Script_BackgroundBlurWithMask_510016107{
	TEXT("/Script/BackgroundBlurWithMask"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h__Script_BackgroundBlurWithMask_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h__Script_BackgroundBlurWithMask_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
