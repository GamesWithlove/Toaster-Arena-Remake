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
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMask() {}
// Cross Module References
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
// End Cross Module References
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execGetMaskTextureInUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetMaskTextureInUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execRedrawMaskMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RedrawMaskMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetLowQualityFallbackBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetBlurStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlurStrength(Z_Param_InStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskTextureChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InMaskTextureChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaskTextureChannel(EMaskTextureChannel(Z_Param_InMaskTextureChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskMaterialSetting)
	{
		P_GET_STRUCT_REF(FMaskMaterialSetting,Z_Param_Out_InMaskMaterialSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaskMaterialSetting(Z_Param_Out_InMaskMaterialSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetMaskTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InMaskTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaskTexture(Z_Param_InMaskTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetUseMaskMaterial)
	{
		P_GET_UBOOL(Z_Param_bInUseMaskMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseMaskMaterial(Z_Param_bInUseMaskMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetBlurRadius)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InBlurRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlurRadius(Z_Param_InBlurRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetApplyAlphaToBlur)
	{
		P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMask::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UBackgroundBlurWithMask::StaticRegisterNativesUBackgroundBlurWithMask()
	{
		UClass* Class = UBackgroundBlurWithMask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaskTextureInUse", &UBackgroundBlurWithMask::execGetMaskTextureInUse },
			{ "RedrawMaskMaterial", &UBackgroundBlurWithMask::execRedrawMaskMaterial },
			{ "SetApplyAlphaToBlur", &UBackgroundBlurWithMask::execSetApplyAlphaToBlur },
			{ "SetBlurRadius", &UBackgroundBlurWithMask::execSetBlurRadius },
			{ "SetBlurStrength", &UBackgroundBlurWithMask::execSetBlurStrength },
			{ "SetHorizontalAlignment", &UBackgroundBlurWithMask::execSetHorizontalAlignment },
			{ "SetLowQualityFallbackBrush", &UBackgroundBlurWithMask::execSetLowQualityFallbackBrush },
			{ "SetMaskMaterialSetting", &UBackgroundBlurWithMask::execSetMaskMaterialSetting },
			{ "SetMaskTexture", &UBackgroundBlurWithMask::execSetMaskTexture },
			{ "SetMaskTextureChannel", &UBackgroundBlurWithMask::execSetMaskTextureChannel },
			{ "SetPadding", &UBackgroundBlurWithMask::execSetPadding },
			{ "SetUseMaskMaterial", &UBackgroundBlurWithMask::execSetUseMaskMaterial },
			{ "SetVerticalAlignment", &UBackgroundBlurWithMask::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics
	{
		struct BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "GetMaskTextureInUse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::BackgroundBlurWithMask_eventGetMaskTextureInUse_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "RedrawMaskMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics
	{
		struct BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms
		{
			bool bInApplyAlphaToBlur;
		};
		static void NewProp_bInApplyAlphaToBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInApplyAlphaToBlur;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit(void* Obj)
	{
		((BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms*)Obj)->bInApplyAlphaToBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur = { "bInApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms), &Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::NewProp_bInApplyAlphaToBlur,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetApplyAlphaToBlur", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::BackgroundBlurWithMask_eventSetApplyAlphaToBlur_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics
	{
		struct BackgroundBlurWithMask_eventSetBlurRadius_Parms
		{
			int32 InBlurRadius;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InBlurRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::NewProp_InBlurRadius = { "InBlurRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetBlurRadius_Parms, InBlurRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::NewProp_InBlurRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetBlurRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::BackgroundBlurWithMask_eventSetBlurRadius_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics
	{
		struct BackgroundBlurWithMask_eventSetBlurStrength_Parms
		{
			float InStrength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::NewProp_InStrength = { "InStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetBlurStrength_Parms, InStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::NewProp_InStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetBlurStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::BackgroundBlurWithMask_eventSetBlurStrength_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics
	{
		struct BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::BackgroundBlurWithMask_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics
	{
		struct BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms
		{
			FSlateBrush InBrush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetLowQualityFallbackBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::BackgroundBlurWithMask_eventSetLowQualityFallbackBrush_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics
	{
		struct BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms
		{
			FMaskMaterialSetting InMaskMaterialSetting;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMaskMaterialSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMaskMaterialSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting = { "InMaskMaterialSetting", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms, InMaskMaterialSetting), Z_Construct_UScriptStruct_FMaskMaterialSetting, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting_MetaData)) }; // 1354664325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::NewProp_InMaskMaterialSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskMaterialSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::BackgroundBlurWithMask_eventSetMaskMaterialSetting_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics
	{
		struct BackgroundBlurWithMask_eventSetMaskTexture_Parms
		{
			UTexture2D* InMaskTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaskTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::NewProp_InMaskTexture = { "InMaskTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskTexture_Parms, InMaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::NewProp_InMaskTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::BackgroundBlurWithMask_eventSetMaskTexture_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics
	{
		struct BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms
		{
			TEnumAsByte<EMaskTextureChannel> InMaskTextureChannel;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InMaskTextureChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::NewProp_InMaskTextureChannel = { "InMaskTextureChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms, InMaskTextureChannel), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, METADATA_PARAMS(nullptr, 0) }; // 154242514
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::NewProp_InMaskTextureChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetMaskTextureChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::BackgroundBlurWithMask_eventSetMaskTextureChannel_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics
	{
		struct BackgroundBlurWithMask_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::BackgroundBlurWithMask_eventSetPadding_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics
	{
		struct BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms
		{
			bool bInUseMaskMaterial;
		};
		static void NewProp_bInUseMaskMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseMaskMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial_SetBit(void* Obj)
	{
		((BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms*)Obj)->bInUseMaskMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial = { "bInUseMaskMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms), &Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::NewProp_bInUseMaskMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetUseMaskMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::BackgroundBlurWithMask_eventSetUseMaskMaterial_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics
	{
		struct BackgroundBlurWithMask_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMask_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMask, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::BackgroundBlurWithMask_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackgroundBlurWithMask);
	UClass* Z_Construct_UClass_UBackgroundBlurWithMask_NoRegister()
	{
		return UBackgroundBlurWithMask::StaticClass();
	}
	struct Z_Construct_UClass_UBackgroundBlurWithMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaToBlur_MetaData[];
#endif
		static void NewProp_bApplyAlphaToBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaToBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaskMaterial_MetaData[];
#endif
		static void NewProp_bUseMaskMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaskMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterialSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaskMaterialSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskTextureChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaskTextureChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutoRadiusCalculation_MetaData[];
#endif
		static void NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutoRadiusCalculation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowQualityFallbackBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowQualityFallbackBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskMaterialRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskMaterialRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackgroundBlurWithMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackgroundBlurWithMask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_GetMaskTextureInUse, "GetMaskTextureInUse" }, // 1834508116
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_RedrawMaskMaterial, "RedrawMaskMaterial" }, // 2529513480
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetApplyAlphaToBlur, "SetApplyAlphaToBlur" }, // 2744907144
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurRadius, "SetBlurRadius" }, // 1115751177
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetBlurStrength, "SetBlurStrength" }, // 2346647299
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1712653255
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetLowQualityFallbackBrush, "SetLowQualityFallbackBrush" }, // 2708313282
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskMaterialSetting, "SetMaskMaterialSetting" }, // 73949510
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTexture, "SetMaskTexture" }, // 3166185775
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetMaskTextureChannel, "SetMaskTextureChannel" }, // 1985558425
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetPadding, "SetPadding" }, // 462259886
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetUseMaskMaterial, "SetUseMaskMaterial" }, // 2971249971
		{ &Z_Construct_UFunction_UBackgroundBlurWithMask_SetVerticalAlignment, "SetVerticalAlignment" }, // 401710236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A background blur with mask is a container widget that can contain one child widget.\n* A mask texture can be applied to control the blur effect region..\n*\n* * Single Child\n* * Blur Effect\n*/" },
		{ "DisplayName", "Background Blur With Mask" },
		{ "IncludePath", "BackgroundBlurWithMask.h" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "A background blur with mask is a container widget that can contain one child widget.\nA mask texture can be applied to control the blur effect region..\n\n* Single Child\n* Blur Effect" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to modulate the strength of the blur based on the widget alpha. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "True to modulate the strength of the blur based on the widget alpha." },
	};
#endif
	void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_SetBit(void* Obj)
	{
		((UBackgroundBlurWithMask*)Obj)->bApplyAlphaToBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur = { "bApplyAlphaToBlur", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bApplyAlphaToBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "How blurry the background is.  Larger numbers mean more blurry but will result in larger runtime cost on the gpu." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength = { "BlurStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, BlurStrength), METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to control blur region using a mask material. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "True to control blur region using a mask material." },
	};
#endif
	void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_SetBit(void* Obj)
	{
		((UBackgroundBlurWithMask*)Obj)->bUseMaskMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial = { "bUseMaskMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bUseMaskMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask texture to control blur region.\n\x09 */" },
		{ "EditCondition", "!bUseMaskMaterial" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Mask texture to control blur region." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Mask material setting.\n\x09 */" },
		{ "EditCondition", "bUseMaskMaterial" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Mask material setting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting = { "MaskMaterialSetting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskMaterialSetting), Z_Construct_UScriptStruct_FMaskMaterialSetting, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialSetting_MetaData)) }; // 1354664325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Which texture channel is used for background blur masking\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Which texture channel is used for background blur masking" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel = { "MaskTextureChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskTextureChannel), Z_Construct_UEnum_BackgroundBlurWithMask_EMaskTextureChannel, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskTextureChannel_MetaData)) }; // 154242514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData[] = {
		{ "Comment", "/** Whether or not the radius should be computed automatically or if it should use the radius */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "Whether or not the radius should be computed automatically or if it should use the radius" },
	};
#endif
	void Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit(void* Obj)
	{
		((UBackgroundBlurWithMask*)Obj)->bOverrideAutoRadiusCalculation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation = { "bOverrideAutoRadiusCalculation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBackgroundBlurWithMask), &Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_bOverrideAutoRadiusCalculation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\n\x09 * A larger value is more costly but allows for stronger blurs.\n\x09 */" },
		{ "EditCondition", "bOverrideAutoRadiusCalculation" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "This is the number of pixels which will be weighted in each direction from any given pixel when computing the blur\nA larger value is more costly but allows for stronger blurs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius = { "BlurRadius", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, BlurRadius), METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_BlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * An image to draw instead of applying a blur when low quality override mode is enabled.\n\x09 * You can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\n\x09 * This is usually done in the project's scalability settings\n\x09 */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
		{ "ToolTip", "An image to draw instead of applying a blur when low quality override mode is enabled.\nYou can enable low quality mode for background blurs by setting the cvar Slate.ForceBackgroundBlurLowQualityOverride to 1.\nThis is usually done in the project's scalability settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush = { "LowQualityFallbackBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, LowQualityFallbackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_LowQualityFallbackBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget = { "MaskMaterialRenderTarget", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMask, MaskMaterialRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::NewProp_MaskMaterialRenderTarget_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackgroundBlurWithMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlurWithMask>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackgroundBlurWithMask()
	{
		if (!Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton, Z_Construct_UClass_UBackgroundBlurWithMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackgroundBlurWithMask.OuterSingleton;
	}
	template<> BACKGROUNDBLURWITHMASK_API UClass* StaticClass<UBackgroundBlurWithMask>()
	{
		return UBackgroundBlurWithMask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlurWithMask);
	UBackgroundBlurWithMask::~UBackgroundBlurWithMask() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlurWithMask)
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlurWithMask, UBackgroundBlurWithMask::StaticClass, TEXT("UBackgroundBlurWithMask"), &Z_Registration_Info_UClass_UBackgroundBlurWithMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlurWithMask), 4231913437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_1629211621(TEXT("/Script/BackgroundBlurWithMask"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
