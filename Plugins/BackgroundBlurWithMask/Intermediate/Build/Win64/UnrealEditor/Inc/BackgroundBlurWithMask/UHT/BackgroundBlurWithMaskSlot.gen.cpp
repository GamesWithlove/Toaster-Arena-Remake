// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BackgroundBlurWithMaskSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundBlurWithMaskSlot() {}
// Cross Module References
	BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot();
	BACKGROUNDBLURWITHMASK_API UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_BackgroundBlurWithMask();
// End Cross Module References
	DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBackgroundBlurWithMaskSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UBackgroundBlurWithMaskSlot::StaticRegisterNativesUBackgroundBlurWithMaskSlot()
	{
		UClass* Class = UBackgroundBlurWithMaskSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UBackgroundBlurWithMaskSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UBackgroundBlurWithMaskSlot::execSetPadding },
			{ "SetVerticalAlignment", &UBackgroundBlurWithMaskSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics
	{
		struct BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics
	{
		struct BackgroundBlurWithMaskSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::BackgroundBlurWithMaskSlot_eventSetPadding_Parms), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics
	{
		struct BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBackgroundBlurWithMaskSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::BackgroundBlurWithMaskSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBackgroundBlurWithMaskSlot);
	UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot_NoRegister()
	{
		return UBackgroundBlurWithMaskSlot::StaticClass();
	}
	struct Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_BackgroundBlurWithMask,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3869132425
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetPadding, "SetPadding" }, // 3476962552
		{ &Z_Construct_UFunction_UBackgroundBlurWithMaskSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2043822421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Slot for the UBackgroundBlurWithMaskSlot, contains the widget displayed in a BackgroundBlur's single slot\n */" },
		{ "IncludePath", "BackgroundBlurWithMaskSlot.h" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The Slot for the UBackgroundBlurWithMaskSlot, contains the widget displayed in a BackgroundBlur's single slot" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|Background Blur Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/BackgroundBlurWithMaskSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBackgroundBlurWithMaskSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBackgroundBlurWithMaskSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::ClassParams = {
		&UBackgroundBlurWithMaskSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBackgroundBlurWithMaskSlot()
	{
		if (!Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton, Z_Construct_UClass_UBackgroundBlurWithMaskSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot.OuterSingleton;
	}
	template<> BACKGROUNDBLURWITHMASK_API UClass* StaticClass<UBackgroundBlurWithMaskSlot>()
	{
		return UBackgroundBlurWithMaskSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBackgroundBlurWithMaskSlot);
	UBackgroundBlurWithMaskSlot::~UBackgroundBlurWithMaskSlot() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBackgroundBlurWithMaskSlot, UBackgroundBlurWithMaskSlot::StaticClass, TEXT("UBackgroundBlurWithMaskSlot"), &Z_Registration_Info_UClass_UBackgroundBlurWithMaskSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBackgroundBlurWithMaskSlot), 3495324195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h_3600844091(TEXT("/Script/BackgroundBlurWithMask"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_BackgroundBlurWithMask_Source_BackgroundfBlurWithMask_Public_BackgroundBlurWithMaskSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
